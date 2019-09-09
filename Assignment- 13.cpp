#include<iostream>
#include<list>
using namespace std;

class deque
{
	list <int> l;
	
public:

	void push_back(int x)
	{
		l.push_back(x);	
	}
	
	void push_front(int y)
	{
		l.push_front(y);	
	}

	void pop_front()
	{
		l.pop_front();	
	}

	void pop_back()
	{
		l.pop_back();	
	}
	int front()
	{
		return l.front();
	}
	
	int rear()
	{
		return l.back();
	}
	void display()
	{
		cout<<"\nThe elements of deque are ";
		list<int> :: iterator i;
		for(i=l.begin();i!=l.end();i++)
		cout<<*i<<" ";
	}

};

int main()
{
	deque s;
	int v;
	cout<<"\n\n          DEQUE OPERATIONS\n";
	do
	{
		cout<<"\nMENU\n";	
		cout<<"\n1:PUSH-BACK ELEMENT";
		cout<<"\n2:PUSH-FRONT ELEMENT";
		cout<<"\n3:POP-BACK ELEMENT";
		cout<<"\n4:POP-FRONT ELEMENT";
		cout<<"\n5:DISPLAY FRONT ELEMENT";
		cout<<"\n6:DISPLAY REAR ELEMENT";
		cout<<"\n7:DISPLAY DEQUE";
		cout<<"\n8:EXIT\n";
		cin>>v;
		switch (v)
		{
			case 1: int x;
					cout<<"\nEnter the element = ";	   
			 		cin>>x;
			 		s.push_back(x);
			 		break;
		    case 2: int y;
					cout<<"\nEnter the element = ";	   
			 		cin>>y;
			 		s.push_front(y);
			 		break;		
			case 3: s.pop_back();
		 		    break;
	
	    	case 4: s.pop_front();
		 		    break;
		
			case 5:	cout<<"\nThe front element = "<<s.front();	   
			 		break;
		
			case 6:	cout<<"\nThe rear element = "<<s.rear();	   
			 		break;
	
			case 7: s.display();
				    break;
			
			case 8: cout<<"\nExitted!\n";
					break;
			default: cout<<"\nInvalid option";		
		
		}
	}while(v!=8);

return 0;
};


























