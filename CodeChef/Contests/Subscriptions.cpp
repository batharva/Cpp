/*
6 people can share on subscription
cost of one x
no of frd n
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
    int testcases=inconst(1,1000);
    int result[testcases];
    for (int i = 0; i < testcases; i++)
    {
       int n=inconst(1,100);
       int x=inconst(1,1000);
       if (n%6==0)
       {
        result[i]=(n/6)*x;
       }else{
        result[i]=(n/6)*x+x;
       }
    }
    for (int i = 0; i < testcases; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}

