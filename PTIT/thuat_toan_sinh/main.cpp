#include<iostream>
using namespace std;

void generate_matrix(int n,int**&matrix);

int main()
{
    int n;
    cout << "Enter Number N : " ;
    cin >> n;
    cout << int(2.5)<< "|  " << int(5/2) << "| " << int(2.4) << endl;
    int** matrix;
    generate_matrix(n,matrix);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n"; 
    }
    

}

void generate_matrix(int n,int**&matrix)
{
    matrix = new int*[n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }

    int value = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = value++;
        }
        
    }
    
    
}
