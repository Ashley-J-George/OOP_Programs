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
  
  void modify()
  {
      T b;
      int i,flag=0;
      cout<<"\nEnter the element you want to modify:";
      cin>>b;
      for(i=0;i<n;i++)
      {
          if(a[i]==b)
          {
              cout<<endl<<a[i]<<" is present at "<<i+1<<" position";
              cout<<"\nEnter new element in place of "<<b<<":";
              cin>>a[i];   
              flag=1;
              break;
          }

      }
     if(flag!=1)
     {
         cout<<"\nElement not found:";
     }
     
     
  }
 

  void multiply()
  {
      T s;
      int i;
      cout<<"\nEnter scalar to be multiplied: ";
      cin>>s;
      for(i=0;i<n;i++)
      {
          a[i]=a[i]*s;
      }
  }
  
};


template<class T>
void menu(array<T> obj)  //type of obj
{
           int q1; 
         do{
                 
           cout<<"\nEnter the operation you want to perform:\nTo enter the values press 1\nTo display elements press 2\nTo modify a element press 3 \nTo multiply with scalar press 4\nExit press 5\n";
           cin>>q1;
           
           switch (q1)
           {      
                    case 1:obj.read();
                    break;
                    case 2:obj.display();
                    break;
                        case 3: 
                    obj.modify();;
                    cout<<"\nAfter modification\n";
                    obj.display();
                    break;
                    case 4:
                    obj.multiply();
                    cout<<"\nAfter scalar multiplication\n";
                    obj.display();
                    break;
                    case 5:cout<<"\nExitted from this menu\n";
                    break;
                   default:cout<<"\nInvalid entry\n";
                   break;
           }
        }
        while(q1!=5);  
           
}


int main()
{
        int v;
        do{
        cout<<"\n\nTo deal with integer type press 1\nTo deal with float type press 2\nExit press 3\n";
        cin>>v;
        switch(v)
        {
    case 1:array<int> iobj;
           menu(iobj);
           
    break;
    case 2:array<float> fobj;
          menu(fobj);

    break;
    case 3:cout<<"\nExitted from this menu\n";
    break;
    default:cout<<"\nInvalid entry\n";
    
    break;
    }
    }while(v!=3);
    return 0;
}

