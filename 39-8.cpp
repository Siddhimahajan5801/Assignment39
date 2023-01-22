#include<iostream>
using namespace std;
#include<forward_list>
#include<iterator>

int main ()
{
    forward_list <int> Forwardlist1 = {3,2,9};

    forward_list <int> Forwardlist2 = {8,1,2};

    forward_list <int> :: iterator it;

    cout<<"Before swapping\n\nList-1 : ";

    for(it=Forwardlist1.begin(); it!=Forwardlist1.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<"\n\nList-2 : ";

    for(it=Forwardlist2.begin(); it!=Forwardlist2.end(); it++)
    {
        cout<<*it<<"  ";
    }

    Forwardlist1.swap(Forwardlist2);

    cout<<"\n\n--------------------------------------------";


    cout<<"\n\nAfter swapping\n\nList-1 : ";

    for(it=Forwardlist1.begin(); it!=Forwardlist1.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<"\n\nList-2 : ";

    for(it=Forwardlist2.begin(); it!=Forwardlist2.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<"\n\n--------------------------------------------";

    return 0;
}
