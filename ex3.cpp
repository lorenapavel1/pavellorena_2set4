#include<iostream>
using namespace std;
int a,b;
int main()
{
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    if (a==b)
    {
        cout<<"cmmdc este"<<endl;
        cin>>a;
    }
    else
    {
        while(a!=b)
        {
            if (a>b){a=a-b;}
            else{b=b-a;}

        }
    }
        if(a==1)

            cout<<"nr sunt prime intre ele";
        else
            cout<<"nr nu sunt prime intre ele";

    return 0;

}
