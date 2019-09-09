#include<iostream>
#include<string>
using namespace std;

void test(int age, float income, string city, bool vehicle)
{
        try
        {
                if(age<18||age>55)
                throw age;
                else if(income<50000||income>100000)
                throw income;
                else if(city!="PUNE"&&city!="pune"&&city!="Pune"&&city!="MUMBAI"&&city!="mumbai"&&city!="Mumbai"&&city!="BANGALORE"&&city!="Bangalore"&&city!="bangalore"&&city!="CHENNAI"&&city!="chennai"&&city!="Chennai")
                throw city;
                else if(vehicle==0)
                throw vehicle;
        }
        
        catch(int age)
        {
                cout<<"\nException:Age criteria not met\n";
        }
        catch(float income)
        {
                cout<<"\nException:Income criteria not met\n";
        } 
        catch(string city)
        {
                cout<<"\nException:City criteria not met\n";
        }
        catch(bool vehicle)
        {
                cout<<"\nException:Vehicle criteria not met\n";
        }

}


int main()
{
     int age;
     float income;
     string city;
     bool vehicle;
     cout<<"\nEnter age=";
     cin>>age;
     cout<<"\nEnter income=";
     cin>>income;
     cout<<"\nEnter city=";
     cin>>city;
     cout<<"\nDo you have a four wheeler?\nIf 'yes' press '1' else press '0'\n";
     cin>>vehicle;          
     test(age,income,city, vehicle);


return 0;
}
