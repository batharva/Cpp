/*
Alice (even multiples of 7)
Bob (odd multiple of 9)
Charlie (jo num dono ke conditions ko satisfy naho kate)
*/

#include <iostream>
using namespace std;
int main(){
    int testcases;
        cin>>testcases;
        string persons[testcases];
        for (int i = 0; i < testcases; i++)
        {
            int num;
            cin>>num;
            if (num%2==0 && num%7==0)
            {
                persons[i]="Alice";
            }else if (num%2!=0 && num%9==0)
            {
                persons[i]="Bob";
            }else{
                persons[i]="Charlie";
            }
        }
        for (int i = 0; i < testcases; i++)
        {
            cout<<persons[i]<<endl;
        }
        
    return 0;
}