#include<iostream>
using namespace std;
int main()

{
    char c;
    cout<<"Enter character:-";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        cout<<"vovel";
    }

    else 
    {
        cout<<"consonant";
    }
}