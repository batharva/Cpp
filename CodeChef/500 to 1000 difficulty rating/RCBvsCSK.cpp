#include <iostream>
using namespace std;
int main(){
    int rcbruns,cskruns;
    int minrunstoqualify=18;
    while (true)
    {
        cin>>rcbruns;
        if (rcbruns>=150 && rcbruns<=250)
        {
            break;
        }else{
            continue;
        }
    }
    while (true)
    {
        cin>>cskruns;
        if (cskruns>=150 && cskruns<=rcbruns+6)
        {
            break;
        }else{
            continue;
        }
    }
    if ((rcbruns-cskruns)>=minrunstoqualify)
    {
        cout<<"RCB"<<endl;
    }else
    {
        cout<<"CSK"<<endl;
    }
    return 0;
}