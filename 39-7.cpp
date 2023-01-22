#include<iostream>
using namespace std;
#include<forward_list>
#include<iterator>

int main ()
{
    forward_list <int> Forwardlist1 = {3,2,9};

    forward_list <int> Forwardlist2 = {8,1,2};

    Forwardlist1.sort();
    Forwardlist2.sort();

    Forwardlist1.merge(Forwardlist2);

    forward_list <int> :: iterator it;

    cout<<"After merging the forward list is: \n\n";

    for(it=Forwardlist1.begin(); it!=Forwardlist1.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;
}
