
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    while(true){
        char c,ary[1001];

        cin>>ary;
        if(ary[0]=='0'&&ary[1]=='\0')
            break;

        int odd=0,even=0;
        int arySize;
        for(int i=0;i<1001;i++)
            if(ary[i]=='\0'){
                arySize=i;
                break;
            }

        for(int i=0;i<arySize;i++){
            if(i%2==0)
                even=even+(ary[i]-'0');
            else
                odd=odd+(ary[i]-'0');
        }
        if((even-odd)==0||(int)abs((double)even-odd)%11==0)
                cout<<ary<<" is a multiple of 11."<<endl;

        else
                cout<<ary<<" is not a multiple of 11."<<endl;

    }
    return 0;
}
