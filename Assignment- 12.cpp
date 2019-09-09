#include <iostream>
#include <stack>
using namespace std;

class binary_add
{
    stack <int> s1,s2,s3;
    int n;
public:
    void read()
    {
        int i,x;
        cout<<"\nEnter no. of digits = ";
        cin>>n;
        cout<<"\nEnter First binary number \n";
        for(i=0;i<n;i++)
        {
        cout<<"Enter bit = ";
            cin>>x;
            s1.push(x);
        }
        cout<<"\nEnter Second binary number \n ";
        for(i=0;i<n;i++)
        {
     	    cout<<"Enter bit = ";
            cin>>x;
            s2.push(x);
        }

    }

    void add()
    {
        int a,b,s,c=0;
        while(!s1.empty())
        {
            a=s1.top();
            s1.pop();
            b=s2.top();
            s2.pop();
            s=a^b^c;
            c=(a&b)|(b&c)|(c&a);
            s3.push(s);

        }
        if(c==1)
            s3.push(1);

        cout<<"\nThe addition = ";
        while(!s3.empty())
        {
            cout<<s3.top();
            s3.pop();

        }

     cout<<endl;
    }

};

int main() 
{
        binary_add s;
        s.read();
        s.add();
        return 0;
}
