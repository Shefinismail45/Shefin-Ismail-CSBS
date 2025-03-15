#include<iostream>

using namespace std;

class Student
{
public:
    void dis()
    {
        cout<<"Student class"<<endl;
    }
};
class Classroom
{
    public:
    void di()
    {
        cout<<"classroom class"<<endl;
    }
};

class Dept : public Student,public Classroom{};
int main()
{
    Dept al;
    al.dis();
    al.di();
    return 0;
}
