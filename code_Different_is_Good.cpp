#include<iostream>
using namespace std;
int main (){
    int n,i,c=0;
    
   //pi
   cin>>n;
    char s[n];
   cin>>s;
    for(i=1;s[i]!='\0';i++){}
    if (i>26)
    {cout<<-1;}
    else 
    {
        for(int j=0; j<i;j++){
            for(int k=j+1;k<i;k++)
            {//cout<<s[j]<<s[k]<<endl;
              if(s[j]==s[k])  
              c++;

            }
        }
cout<<c;
    }
return 0;
}