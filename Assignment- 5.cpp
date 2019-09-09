#include<cstring>
  #include<iostream>
using namespace std;
class personal
{
    string name;
    string address;
    long int phone_no;

public:
    void accept()
    {
        cout<<"Enter name of employee:\n";
        cin>>name;
        cout<<"Enter address of employee:\n";
        cin>>address;
        cout<<"Enter phone number of employee:\n";
        cin>>phone_no;

    }

    void display()
    {
        cout<<"\nName of employee is="<<name<<endl;
        cout<<"\nAddress of employee is="<<address<<endl;
        cout<<"\nPhone number of employee is="<<phone_no<<endl;
    }

};
class professional
{
    string dept;
    string desgn;
    long int salary;

public:
    void accept()
    {
        cout<<"Enter department of employee:\n";
        cin>>dept;
        cout<<"Enter designation of employee:\n";
        cin>>desgn;
        cout<<"Enter salary per annum  of employee:\n";
        cin>>salary;

    }

    void display()
    {
        cout<<"\nDepartment of employee is="<<dept<<endl;
        cout<<"\nDesignation of employee is="<<desgn<<endl;
        cout<<"\nSalary (per annum) of employee is="<<salary<<endl;
    }



};
class academic
{
    string degree;
    float percentage;

public:
    void accept()
    {
        cout<<"Enter degree of employee:\n";
        cin>>degree;
        cout<<"Enter percentage of employee:\n";
        cin>>percentage;

    }

    void display()
    {
        cout<<"\nDeegre of employee is="<<degree<<endl;
        cout<<"\nPercentage of employee is="<<percentage<<endl;

    }
};

class biodata : public personal,public professional,public academic
{
public:
        void accept()
        {
            personal::accept();
            professional::accept();
            academic::accept();
        }


        void display()
        {
            personal::display();
            professional::display();
            academic::display();
            }
};

int main()
{
	biodata obj;
	obj.accept();
	obj.display();
	return 0;
}



