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
        int x=inconst(1,1000);
        int y=inconst(1,1000);
        result[i]=(x*y)/100;
        

    }
    for (int i = 0; i < testcases; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}