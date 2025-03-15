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
class Classroom :public Student
{
    public:
    void di()
    {
        dis();
    }
};

class Dept : public Classroom{

};

int main()
{
    Dept al;
    al.di();
    return 0;
}
