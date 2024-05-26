#include<iostream>
#include<string>
#include <climits>
#define ll long long
using namespace std;

ll n,a,l[500];
bool is_triangle(ll a,ll b, ll c)
{
    return a + b > c && a + c > b && b + c > a;
}
string minium_triangle_perimeter(ll* arr,ll a)
{
    ll mininum_perimeter = LLONG_MAX;
    bool has_triangle = false;
    // int c = 0;
    ll sides[3] ;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int l = j + 1; l < n ; l++)
            {
                // cout <<" Test loop :" << arr[i] << " " << arr[j] << " " << arr[l] <<" \n";
                // c++;
                // cout << arr[i] << " " << arr[j] << " " << arr[l] << "\n";
                if (is_triangle(arr[i],arr[j],arr[l]))
                {
                    
                    ll perimeter = arr[i] + arr[j] + arr[l];

                    if (mininum_perimeter > abs(a-perimeter))
                    {
                        mininum_perimeter =  abs(a-perimeter);
                        sides[0] = arr[i];
                        sides[1] = arr[j];
                        sides[2] = arr[l];
                        // cout <<" Test :" << sides[0] << " " << sides[1] << " " << sides[2] <<" "<< perimeter <<" \n";

                    }
                    has_triangle = true;
                }
                
            }
            
        }
        
    }
    if (has_triangle)
    {
        // cout <<" Final :" << sides[0] << " " << sides[1] << " " << sides[2]<< " Counter " << c << " \n";
        return to_string(sides[0]+sides[1]+sides[2]);
    }
    
    return "UNSOL";
}
int main()
{
    cin >> n >> a;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    string result = minium_triangle_perimeter(l,a);
    cout << "Result " << result << endl;
    return 0;
}