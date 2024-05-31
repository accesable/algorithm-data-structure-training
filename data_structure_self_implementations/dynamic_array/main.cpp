#include <iostream>

class DynamicIntArray{
private:
    int capacity;
    int *data;
    int size;

    void resize(int new_capacity){
        int * new_data = new int[new_capacity];
        for (int i = 0; i < size; i++)
        {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        capacity = new_capacity;
    }
public:
    DynamicIntArray(int init_capacity = 2) : size(0),capacity(init_capacity){
        capacity = init_capacity;
    }
    ~DynamicIntArray(){ delete[] data;}

    void add(int n)
    {
        if (size == capacity)
        {
            resize(capacity*2);
        }
        data[size++] = n;
    }

    int get(int index) const{
        if (index >= 0 && index < size)
        {
            return data[index];
        }
        throw std::out_of_range("Index out of range");
    }
    int getSize() const{ return size; }
    int getCapacity() const {return capacity; }

    void set(int index,int value) {
        if (index >= 0 && index < size)
        {
            data[index] = value;
            return;
        }
        throw std::out_of_range("Index out of range");
    }

    void insertAt(int index,int value)
    {
        if (index >= 0 && index < size)
        {
            if (size == capacity)
            {
                resize(capacity*2);
            }
            
            for (int i = size; i != index; i--)
            {
                data[i] = data[i-1];
            }
            data[index] = value;

            size++;
            return;
        }
        throw std::out_of_range("Index out of range");
    }
    void deleteAt(int index)
    {
        if (index >= 0 && index < size)
        {
            for (int i = index; i < size - 1; i++)
            {
                data[i] = data[i+1];
            }
            size--;
            return;
        }
        throw std::out_of_range("Index out of range !");
    }
    void printArr(){
        for (int i = 0; i < size; i++)
        {
            std::cout << data[i] << " ";
        }
        // std::cout << std::endl;
    }
};

int main() {
    DynamicIntArray arr;
    arr.add(1);
    arr.add(2);
    arr.add(3);
    arr.add(4);
    arr.insertAt(2,7);
    arr.insertAt(0,-23);

    arr.printArr();

    arr.deleteAt(3);
    std::cout << "\nAfter delete element at index 3" << std::endl;
    arr.printArr();

    std::cout << "\nCapacity: " << arr.getCapacity() << std::endl;

    return 0;
}