#include <iostream>
using namespace std;
class sd
{   static int count;
	int rno;
	string name;
	string cls;
	char div;
	string dob;
	string bg;
	string adrs;
	long int pno;
	string dl;

public:

	sd()   //default
	{
	        cout<<"\ncalling Default constructor\n\n";
	        rno=3;
	        name="Jay";
	        cls="SE";
	        div='A';
	        dob="07/05/1999";
	        bg="B+ve";
	        adrs="Jalgaon";
	        pno=7057151998;
	        dl="D637376363660";
	        count++;

	}
	sd(int a,string b,string c,char d,string e,string f,string g,long int h,string i)   //parameterised
	{
	        cout<<"\ncalling Parameterised constructor\n\n";
		this->rno=a;
		this->name=b;
		this->cls=c;
		this->div=d;
		this->dob=e;
		this->bg=f;
		this->adrs=g;
		this->pno=h;
		this->dl=i;
		count++;

	}
	
	sd(sd &s)    		//copy constructor
	{
	        cout<<"\ncalling Copy constructor\n\n";
		rno=s.rno;
		name=s.name;
	        cls=s.cls;
		div=s.div;
		dob=s.dob;
		bg=s.bg;
		adrs=s.adrs;
		pno=s.pno;
		dl=s.dl;
		
		count++;

	}

	void display()
	{
		cout<<"Roll No.="<<rno<<endl;
		cout<<"name"<<name<<endl;
		cout<<"Class="<<cls<<endl;
		cout<<"Division="<< div<<endl;
		cout<<"Date of birth="<<dob<<endl;
		cout<<"Blood group="<<bg<<endl;
		cout<<"Address="<<adrs<<endl;
		cout<<"Phone Number= "<<pno<<endl;
		cout<<"Driving license number="<<dl<<endl<<endl;
	}
	
	static void no()
	{
	cout<<"\nTotal number of students="<<count<<endl;
	} 

};

int sd::count;

	int main()
	{

		sd s1;
		s1.display();
		sd s2(34,"adaad","SE",'A',"12/08/2000","B+ve","Dhule",5464745645,"1534367Y");
		s2.display();
	        sd s3(s1);
		s3.display();                                                                              
		sd::no();
		return 0;
	}

