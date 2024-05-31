#include<bits/stdc++.h>

#define ll long long
using namespace std;
void printArr(int arr[],int n);
void printArrReverse(int *arr,int n);
int getArrSum(int *arr,int n);
int* getCopyOfArr(int *arrToBeCopied,int n);
void swap(int *a,int *b);
void bubbleSort(int *arr,int n);

int main()
{
    int n ;
    cout << "Enter number of elements : " ;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "element - " << i << " : " ;
        cin >> arr[i];
    }
    // Print Array
    cout << "Print Array" << endl;
    printArr(arr,n);

    // Print Array in Reverse
    cout << endl;
    cout << "Print Array Reverse" << endl;
    printArrReverse(arr,n);

    // Get sum of element in array
    cout << endl;
    cout << "Sum of element in this arr : " << getArrSum(arr,n) << endl;

    // Get copy array
    cout << endl;
    int *copiedArray = getCopyOfArr(arr,n);
    cout << "array first index address to be copied : " << &arr << " copied array first index address address : " << &copiedArray << endl;
    printArrReverse(arr,n);

    // Get sum of element in array
    cout << endl;
    cout << "Duplicated elements in this Array : " << getArrSum(arr,n) << endl;
    return 0;
}
void printArr(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
void printArrReverse(int *arr,int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << "  ";
    }
    
}
int getArrSum(int *arr,int n)
{
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int* getCopyOfArr(int *arrToBeCopied,int n)
{
    int *copiedArr = new int[n];
    for (int i = 0; i < n; i++)
    {
        copiedArr[i] = arrToBeCopied[i];
    }
    return copiedArr;
}
void bubbleSort(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
            
        }
        
    }
    
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}



// int main()
// {
//     int a=23,b=12123;
//     cout << "a : " << a << " b : " << b << endl;
//     swap(&a,&b);
//     cout << "a : " << a << " b : " << b;
//     return 0;
// }

// int main()
// {
//     int n ;
//     cout << "Enter number of elements : " ;
//     cin >> n;

//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "element - " << i << " : " ;
//         cin >> arr[i];
//     }
//     printArr(arr,n);

//     bubbleSort(arr,n);
//     cout << endl;
//     printArr(arr,n);
//     return 0;
// }