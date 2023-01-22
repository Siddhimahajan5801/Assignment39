#include<iostream>
using namespace std;
#include<forward_list>
#include<iterator>

int main ()
{
    forward_list <int> Fl = {1,3,4,8,6,6,4,2,4,4,7,1,1};

    cout<<"Forward List =  ";
    for(auto x : Fl)
        cout<<x<<"  ";

    cout<<"\n\nAfter removing all the consecutive duplicate elements the list is : \n\n";

    Fl.unique();

    for(auto x : Fl)
        cout<<x<<"  ";

    cout<<endl;

    return 0;

}
