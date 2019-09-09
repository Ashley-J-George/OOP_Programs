#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int id,i,n;
    string name,author;
    float price;

    ofstream out;
    out.open("Data.txt");
    cout<<"\nEnter number of entries = ";
    cin>>n;
    for(i=0;i<n;i++)    
    {
    cout<<"\nEnter Book ID = ";
    cin>>id;
    cout<<"\nEnter name of the book = ";
    cin>>name;
    cout<<"\nEnter name of author = ";
    cin>>author;
    cout<<"\nEnter price of book = ";
    cin>>price;
    out<<id<<"  "<<name<<"  "<<author<<"  "<<price<<"\n";
    }
    out.close();
    
    ifstream in;
    in.open("Data.txt");
    while(in)
    {
    in>>id>>name>>author>>price;
    cout<<"\nBook ID = "<<id;
    cout<<"\nName of the book = "<<name;
    cout<<"\nName of the author = "<<author;
    cout<<"\nPrice of the book = "<<price<<endl;
    }
    in.close();
    return 0;
}

