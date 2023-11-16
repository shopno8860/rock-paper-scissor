#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="rock",b="paper",c="scissor";
    int w,x,y;
    rakesh:
    cout<<"FOR USER:"<<endl;
    cout<<"enter your choice"<<endl;
    cout<<"if rock press 1,paper press 2,scissor press 3"<<endl;
    cin>>w;
    cout<<"FOR computer:"<<endl;
     cout<<"enter your choice"<<endl;
    cout<<"if rock press 1,paper press 2,scissor press 3"<<endl;
    srand(static_cast<unsigned int>(time(0)));
    x=rand()%3+1;
    cout<<x<<endl;
    cout<<"RESULT :"<<endl;
    if(w==x)cout<<"tie"<<endl;
    else if((w==1&&x==3)||(w==2&&x==1)||(w==3&&x==2))
    cout<<"USER WIN"<<endl;
    else cout<<"COMPUTER WIN"<<endl;
    cout<<"DO YOU WANT TO PLAY AGAIN?/n IF YES PRESS 1 ELSE 0"<<endl;
    cin>>y;
    if(y==1)goto rakesh;
    else return 0;

}
