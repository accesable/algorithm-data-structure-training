#include<iostream>
#include<cmath>
#include<vector>
#include<limits>
#include<algorithm>
#include<tuple>
using namespace std;
string find_smallest_area_triangle(vector<int> &l);
bool is_triangle(int a,int b,int c);
double triangle_are(int a,int b , int c);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> l(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(l.begin(),l.end());
    string result = find_smallest_area_triangle(l);
    cout << result << endl;
    return 0;
}
string find_smallest_area_triangle(vector<int> &l)
{
    int n = l.size();
    double min_area = numeric_limits<double>::infinity();
    tuple<int,int,int> best_triangle(-1,-1,-1);
    for (size_t i = 0; i < n-2; i++)
    {
        for (size_t j = 0; j < n-1; j++)
        {
            for (size_t k = 0; k < n; k++)
            {
                int a=l[i],b=l[j],c=l[k];
                if (is_triangle(a,b,c))
                {
                    double area = triangle_are(a,b,c);
                    if (area < min_area)
                    {
                        min_area = area;
                        best_triangle = make_tuple(a,b,c);
                    }
                    
                }
                
            }
            
        }
        
    }
    if (get<0>(best_triangle)==-1)
    {
        return "UNSOL";
    }
    else
    {
        int a,b,c;
        tie(a,b,c) = best_triangle;
        return to_string(a)+" "+to_string(b)+" "+to_string(c);
    }
    
    
    
}

bool is_triangle(int a,int b,int c)
{
    return a + b > c && a + c > b && c + b > a;
}

double triangle_are(int a,int b , int c)
{
    double s = (a + b + c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}



