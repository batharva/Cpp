#include <iostream>
using namespace std;
int main(){
    int testcases;
        cin>>testcases;
        int totalamt[testcases];
        for (int i = 0; i < testcases; i++)
        {
            int goal,sells;
            cin>>goal>>sells;
            if (goal>=sells)
            {
                totalamt[i]=sells*1;
            }else if (sells>goal)
            {
                totalamt[i]=goal*1+(sells-goal)*2;
            }
        }
        for (int i = 0; i < testcases; i++)
        {
            cout<<totalamt[i]<<endl;
        }
        
    return 0;
}   