#include <iostream>
using namespace std;

int main() {
    int N,s=1,f,f1=1,f2=1;
	cin>>N;
for(int i=1;i<N;i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        s=s+f1;
       // cout<<" "<<s<<" "<<f;
       }
cout<<s;
	return 0;
}
