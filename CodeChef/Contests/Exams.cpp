/*
no of schools x
no of students in each y
no of students passed z

condition 

all std appered in exam
std >50% passed
*/

#include <iostream>
using namespace std;
int inconst(int lowerconstrain,int upperconstrain){
    int a;
    while (true)
    {
        cin>>a;
        if (a>=lowerconstrain && a<=upperconstrain)
        {
            break;
        }
    }
    return a;
    
}
int main(){
    int testcases;
    cin>>testcases;
    bool result[testcases];
    for (int i = 0; i < testcases; i++)
    {
        float x=inconst(1,5);
        float y=inconst(1,50);
        float z=inconst(0,x*y);
        float nostdpassed=(z*100)/(x*y);
        if (nostdpassed>50.00)
        {
            result[i]=1;
        }else
        {
            result[i]=0;
        }
    }
    for (int i = 0; i < testcases; i++)
    {
        if (result[i]==1)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}