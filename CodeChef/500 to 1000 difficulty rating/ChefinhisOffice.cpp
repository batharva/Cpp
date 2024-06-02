/*
working hrs x (mon - thurs)
working hs y (frd only)
x>y
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
    int testcases=inconst(1,100);
    int result[testcases];
    for (int i = 0; i < testcases; i++)
    {
        int x=inconst(2,12);
        int y=inconst(1,x);
        result[i]=4*x+1*y;
    }
    for (int i = 0; i < testcases; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}