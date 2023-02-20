//Just to make sure this is made by iyusmaster/Neporu
#include <iostream>
using namespace std;

int main ()
{
    int choice, a, b, result;
    char answer;
    cout<<"Please choose 1 between these 4 sums :"<<endl;
    cout<<"(1.increase) (2.decrease) (3.multiplication) (4.distribution)"<<endl;
    cout<<"Your answer : ";
    cin>>choice;
    if (choice == 1)
    {
        cout<<"Please input 2 value you want to sums"<<endl;
        cin>>a;
        cout<<a<<" + ";
        cin>>b;
        result=a+b;
        cout<<"Summation result : "<<result<<endl;
        cout<<"\n";
        cout<<"Do you want to repeat?"<<endl;
        cout<<"Y/N(AnyKey) : ";
        cin>>answer;
        if(answer == 'Y' || answer == 'y')
            {
            cout<<"Okay, restarting now...!!!"<<endl;
            cout<<"\n";
            return main();
            }
            else
            {
            cout<<"Okay, the progam is now finished it's task. You can close it now :)"<<endl;
            return 0;
            }
    }
    else if (choice == 2)
    {
        cout<<"Please input 2 value you want to to sums"<<endl;
        cin>>a;
        cout<<a<<" - ";
        cin>>b;
        result=a-b;
        cout<<"Summation result : "<<result<<endl;
        cout<<"\n";
        cout<<"Do you want to repeat?"<<endl;
        cout<<"Y/N(AnyKey) : ";
        cin>>answer;
        if(answer == 'Y' || answer == 'y')
            {
            cout<<"Okay, restarting now...!!!"<<endl;
            cout<<"\n";
            return main();
            }
            else
            {
            cout<<"Okay, the progam is now finished it's task. You can close it now :)"<<endl;
            return 0;
            }
    }
    else if (choice == 3)
    {
        cout<<"Please input 2 value you want to to sums"<<endl;
        cin>>a;
        cout<<a<<" x ";
        cin>>b;
        result=a*b;
        cout<<"Summation result : "<<result<<endl;
        cout<<"\n";
        cout<<"Do you want to repeat?"<<endl;
        cout<<"Y/N(AnyKey) : ";
        cin>>answer;
        if(answer == 'Y' || answer == 'y')
            {
            cout<<"Okay, restarting now...!!!"<<endl;
            cout<<"\n";
            return main();
            }
            else
            {
            cout<<"Okay, the progam is now finished it's task. You can close it now :)"<<endl;
            return 0;
            }
    }
    else if (choice == 4)
    {
        cout<<"Please input 2 value you want to to sums"<<endl;
        cin>>a;
        cout<<a<<" % ";
        cin>>b;
        result=a/b;
        cout<<"Summation result : "<<result<<endl;
        cout<<"\n";
        cout<<"Do you want to repeat?"<<endl;
        cout<<"Y/N(AnyKey) : ";
        cin>>answer;
        if(answer == 'Y' || answer == 'y')
            {
            cout<<"Okay, restarting now...!!!"<<endl;
            cout<<"\n";
            return main();
            }
            else
            {
            cout<<"Okay, the progam is now finished it's task. You can close it now :)"<<endl;
            return 0;
            }
    }
    else
    {
        cout<<"You just put the wrong choice."<<endl;
        cout<<"Do you wanna back to the beginning again?"<<endl;
        cout<<"Y/N(AnyKey) : ";
        cin>>answer;
        if(answer == 'Y' || answer == 'y')
            {
            cout<<"Okay, restarting now...!!!"<<endl;
            cout<<"\n";
            return main();
            }
            else
            {
            cout<<"Okay, the progam is now finished it's task. You can close it now :)"<<endl;
            return 0;
            }
    }
}