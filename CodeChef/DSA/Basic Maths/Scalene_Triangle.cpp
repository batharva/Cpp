#include <iostream>
using namespace std;
int main(){
    int testcases;
        cin>>testcases;
        bool triangle[testcases];
        for (int i = 0; i < testcases; i++)
        {
            int lenofside[3];
            for (int j = 0; j < 3; j++)
            {
                cin>>lenofside[j];
            }
            //Equilaternal
            if(lenofside[0]==lenofside[1] && lenofside[1]==lenofside[2]){
                triangle[i]=0;
            }
            //scalen
            else if (lenofside[0]!=lenofside[1] && lenofside[1]!=lenofside[2] && lenofside[0]!=lenofside[2])
            {
                triangle[i]=1;
            }
            //isoscales
            else 
            {
                int temp=0;
                for (int b = 0; b < 3; b++)
                {
                    if (lenofside[temp]==lenofside[b])
                    {
                        triangle[i]=0;
                        break;
                    }else{
                        temp++;
                    }
                }
            }
        }
        for (int i = 0; i < testcases; i++)
        {
            if (triangle[i])
            {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    return 0;
}