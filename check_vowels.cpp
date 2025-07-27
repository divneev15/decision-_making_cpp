// divneev 24070123043 entc A2

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character you want to check : ";
    cin>>ch;
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        cout<<"\nthe char is a vowel";
    }
    else
    {
        cout<<"\nthe character is a consonant";
    }
}

/* output of this code

enter the character you want to check : V

the character is a consonant

*/
