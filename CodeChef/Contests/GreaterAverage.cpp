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
        }else{
            continue;
        }
    }
    return a;
    
}
int main(){
    int testcases;
    cin>>testcases;
    string result[testcases];
    for (int i = 0; i < testcases; i++)
    {
        float a=inconst(1,10),
        b=inconst(1,10),c=inconst(1,10);

        float avg=(a+b)/2;
        if (avg>c)
        {
            result[i]="YES";
        }else{
            result[i]="NO";
        }
        
    }
    for (int i = 0; i < testcases; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}