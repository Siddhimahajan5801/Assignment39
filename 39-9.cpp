#include<iostream>
using namespace std;
#include<forward_list>
#include<iterator>

int main ()
{
    forward_list <int> Fl = {1,2,3,4,5};

    forward_list <int> Fl2 = {6,7,8,9,10};

    forward_list <int> :: iterator it;

    Fl2.splice_after(Fl2.begin(), Fl, Fl.begin(), Fl.end());

    cout<<"The forward list after splice_after() : \n\n";

    for(it=Fl2.begin(); it!=Fl2.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;
}
