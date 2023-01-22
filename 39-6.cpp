#include<iostream>
using namespace std;
#include<forward_list>
#include<iterator>

int main ()
{
    forward_list <int> Fl = {1,2,3,4,5};

    forward_list <int> Fl2 = {6,7,8,9,10};

    Fl.merge(Fl2);

    forward_list <int> :: iterator it;

    cout<<"After merging the forward list is: \n\n";

    for(it=Fl.begin(); it!=Fl.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;
}
