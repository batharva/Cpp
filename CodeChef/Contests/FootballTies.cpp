/*
Points

winner = 3
Loser = 0
Draew = 1
*/

/*
11 5

30
03
11
11
30
30

*/

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
    int testcases=constraininput(1,75);
    int drwa[testcases];
        for (int i = 0; i < testcases; i++)
        {
            int xfinalscores=constraininput(0,14),yfinalscores=constraininput(0,14);
            
            //Only one match
            if ((xfinalscores+yfinalscores)<3 && (xfinalscores+yfinalscores)==2) 
            {
                drwa[i]=1;
            }
            //More than one match
            else if ((xfinalscores+yfinalscores)%3==0 )
            {
                drwa[i]=0;
            }else
            {
                if (yfinalscores<xfinalscores)
                {
                    drwa[i]=yfinalscores%3;
                }else{
                    drwa[i]=xfinalscores%3;
                }
                
            }
            
        }
    for (int i = 0; i < testcases; i++)
    {
        cout<<drwa[i]<<endl;
    }
    
    return 0;
}
