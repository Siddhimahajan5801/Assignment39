#include<iostream>
using namespace std;
#include<forward_list>
#include<iterator>

int main ()
{
    forward_list <int> :: iterator it;

    forward_list <int> Fl_1 = {1,2,3,4,5};

    forward_list <int> Fl_2 = Fl_1;  //1st method

    forward_list <int> Fl_3;
    Fl_3.assign(Fl_1.begin(),Fl_1.end());

    cout<<"The forward list-2 is: \n\n";

    for(it=Fl_2.begin(); it!=Fl_2.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl<<endl;

     cout<<"The forward list-3 is: \n\n";

    for(it=Fl_3.begin(); it!=Fl_3.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;
}
