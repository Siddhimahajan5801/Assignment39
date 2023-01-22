#include<iostream>
using namespace std;
#include<forward_list>
#include<iterator>

int main ()
{
    forward_list <int> Fl;
    int sum=0;

    for(int i=10; i>0; i--)
    {
        Fl.push_front(i);
        sum=sum+(i);
    }

    forward_list <int> :: iterator it;

    cout<<"The forward list is: \n\n";

    for(it=Fl.begin(); it!=Fl.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<"\n\nThe sum of all the elements of the list is = "<<sum<<endl;

    return 0;
}
