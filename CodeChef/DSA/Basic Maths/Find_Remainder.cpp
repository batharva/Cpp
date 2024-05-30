#include <iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    int remainders[testcases];
        for (int i = 0; i < testcases; i++)
        {
            int a,b;
            cin>>a>>b;
            remainders[i]=a%b;
        }
        for (int i = 0; i < testcases; i++)
        {
            cout<<remainders[i]<<endl;
        }
        
    return 0;
}