#include <iostream>
#include<conio.h>

using namespace std;

class student
{
    public:
    int roll no;
    string name;
    void insert(int a, string n)
    {
        roll no = a;
        name = n;
    }
    void display()
    {
        cout<<roll no<<" "<<name<<end1;
    }
};
int main() 
{
    student s1;
    student s2;
    s1.insert(13,"Abhishek");
    s2.insert(14,"Chandan");
    s1,display();
    s2,display();
    return 0;
}