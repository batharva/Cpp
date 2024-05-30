#include <iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    int distance[]={0,};
    for (int i = 1; i <=testcases; i++)
    {
        cin>>distance[i];
    }
    for (int i = 1; i <=testcases; i++)
    {
        cout<<(distance[i]*10)<<endl;
    }
    return 0;
}