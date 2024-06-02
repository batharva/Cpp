#include <iostream>
using namespace std;
int constraininput(int lowerconstrain,int upperconstrain){
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
    int A=constraininput(1,10);
    int B=constraininput(1,10);
    if (A<=B)
    {
        cout<<"Tyro"<<endl;
    }else{
        cout<<"Dom"<<endl;
    }
    
    return 0;
}