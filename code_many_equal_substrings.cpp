#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k, ne;
    cin >> n >> k;
    ne = n;
    string s1[n];
    cin >> s1[n];
    if(n<2){for (int i = 0; i <=k; i++)
            {
                cout << s1[n];
            }}
     else{for (int i = 0; i < n/2; i++)
    {
        //cout<<s1[i]<< " "<< s1[n-i];
        if (s1[i] == s1[(n - i)])
        {
            
        }
       
    }}
for (int i = 0; i <= k; i++)
            {
                cout << s1[n];
            }
    return 0;
}