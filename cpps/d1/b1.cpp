#include<iostream>

int main()
{
    std::cout << "Enter x , y ,z ";
    int x,y,z;
    std:: cin >> x >> y >> z;
    std::cout << "Result : " << x + y - z + y;
    return 0;
}