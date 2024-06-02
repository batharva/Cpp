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
    int testcases=inconst(1,10);
    string result[testcases];
    for (int i = 0; i < testcases; i++)
    {
        int x=inconst(1,9);
        x+=15;
        if (x==22 || x<22)
        {
            result[i]="Yes";
        }else{
            result[i]="No";
        }   
    }
    for (int i = 0; i < testcases; i++)
    {
        cout<<result[i]<<endl;
    }   
    return 0;
}