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
    int soilders=inconst(1,100);
    int wepons[soilders];
    int lucky=0,unlucky=0;
    for (int i = 0; i < soilders; i++)
    {
        wepons[i]=inconst(1,100);
        if (wepons[i]%2==0)
        {
            lucky++;
        }else 
        {
            unlucky++;
        }   
    }
    
    if (lucky>unlucky)
    {
        cout<<"READY FOR BATTLE";
    }else{
        cout<<"NOT READY";
    }
    return 0;
}