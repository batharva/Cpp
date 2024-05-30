#include <iostream>
using namespace std;
int main(){
    int testcases;
        cin>>testcases;
        int sumofdigits[testcases];
        for (int i = 0; i < testcases; i++)
        {
           int num;
           cin>>num;
            int sum=0;
            while (num>0)
            {  
                sum=sum +num%10;
                num=num/10;
            }
            sumofdigits[i]=sum;
        }
        for (int i = 0; i < testcases; i++)
        {
            cout<<sumofdigits[i]<<endl;
        }
    return 0;
}