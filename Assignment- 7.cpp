#include <iostream>
using namespace std;
template<class T>
class array
{
   T a[20];
   int n;
public:
   void read()
   {
       int i;
       cout<<"\nEnter number of elements:";
       cin>>n;
       cout<<"\nEnter "<<n<<" elements:";
       for(i=0;i<n;i++)
       cin>>a[i];
   }

  void display()
  {      int i;
      cout<<"\nThe vectors are: ";
      cout<<"(";
      for(i=0;i<n;i++)
      {
          cout<<a[i];
          if(i!=n-1)
          cout<<",";
      }
      cout<<")\n";
  }
  

  void swap(T &a,T &b)
  {
  T temp;
  temp=a;
  a=b;
  b=temp;
   
  }
void selection_sort()
{
int i,j;
for(i=0;i<n-1;i++)
{
    	int i,j;
	int min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		swap(a[min],a[i]);
	}
}


}

  
};


int main()
{
	cout<<"\nDealing with integer\n";
	array<int> obj;
	obj.read();
	obj.display();
    obj.selection_sort();
    cout<<"\nAfter sorting\n";
    obj.display();
	cout<<"\nDealing with floating point numbers\n";
	array<float> fobj;
	fobj.read();
	fobj.display();
    fobj.selection_sort();
    cout<<"\nAfter sorting\n";
    fobj.display();
    return 0;
}

