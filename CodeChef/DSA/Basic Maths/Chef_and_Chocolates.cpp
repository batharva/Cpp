#include <iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    int numofchocolates[testcases];
    for (int i = 0; i < testcases; i++)
    {
        int numof5rupee, numof10rupee, costofchocolate;
        cin>>numof5rupee;
        cin>>numof10rupee;
        cin>>costofchocolate;
        int totalamt=numof10rupee*10+numof5rupee*5;
        numofchocolates[i]=(totalamt/costofchocolate);
    }
    for (int i = 0; i < testcases; i++)
    {
        cout<<numofchocolates[i]<<endl;
    }
    
    return 0;
}