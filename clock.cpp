#include<iostream>
using namespace std;
class clock
{
    int h,m,s;
    public:
    void get()
    {
        cout<<endl<<"Enter current time: ";
        cout<<endl<<"Enter hour: ";
        cin>>h;
        cout<<endl<<"Enter minutes: ";
        cin>>m;
        cout<<endl<<"Enter seconds: ";
        cin>>s;
    }
    
    void hrs12()
    {
        int h1,m1,s1;
        cout<<endl<<"Enter hour: ";
        cin>>h1;
        cout<<endl<<"Enter minutes: ";
        cin>>m1;
        cout<<endl<<"Enter seconds: ";
        cin>>s1;
        h+=h1;
        m+=m1;
        s+=s1;
        
        for(;s>=60;m+=1,s-=60);
        for(;m>=60;h+=1,m-=60);
        for(int d=0;h>=12;h-=12,d++);
        cout<<endl<<h<<":"<<m<<":"<<s;
    }
    
    void hrs24()
    {
        int h1,m1,s1;
        cout<<endl<<"Enter hour: ";
        cin>>h1;
        cout<<endl<<"Enter minutes: ";
        cin>>m1;
        cout<<endl<<"Enter seconds: ";
        cin>>s1;
        h+=h1;
        m+=m1;
        s+=s1;
       
        for(;s>=60;m+=1,s-=60);
        for(;m>=60;h+=1,m-=60);
        for(;h>=24;h-=24);
        cout<<endl<<h<<":"<<m<<":"<<s;
    }
};

int main()
{
    clock c1;
    while(1)
    {
        c1.get();
        cout<<endl<<"Choose from following options: ";
        cout<<endl<<"1. 12 hrs";
        cout<<endl<<"2. 24 hrs";
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 1:
            c1.hrs12();
        break;

        case 2:
            c1.hrs24();
        break;
        
        default:
        break;
        }
        cout<<endl<<"to exit press 1, to continue press 0"<<endl;
        int choice1;
        cin>>choice1;
        if(choice1==1)
        break;
        else
        continue;
    }
    
    return 0;
}