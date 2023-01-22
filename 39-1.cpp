#include<iostream>
using namespace std;
#include<forward_list>
#include<iterator>

int main ()
{
    forward_list <int> Fl;

    Fl.assign({1,5,4,3,3,4});

    cout<<"The forward list is : ";

    for(auto x: Fl)
        cout<<x<<"  ";

    Fl.sort();

    cout<<"\n\nAfter Sorting list : ";

    for(auto x: Fl)
        cout<<x<<"  ";

    cout<<"\n\nMax Size = "<<Fl.max_size()<<endl;

    cout<<"\n1st element = "<<Fl.front()<<endl<<endl;

    Fl.pop_front();
    cout<<"1st element after pop_front = "<<Fl.front()<<endl<<endl;

    Fl.push_front(8);
    cout<<"After push front 1st element = "<<Fl.front()<<endl<<endl;

    if(Fl.empty()== true)
        cout<<"The forward list is empty!\n";
    else
        cout<<"The forward list is not empty!\n";

    Fl.clear();

    cout<<"\nAfter clearing : ";

    if(Fl.empty()== true)
        cout<<"The forward list is empty!\n";
    else
        cout<<"The forward list is not empty!\n";


    cout<<endl;

    return 0;
}
