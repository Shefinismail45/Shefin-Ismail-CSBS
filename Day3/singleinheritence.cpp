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
class Classroom :public Student{};

int main()
{
    Classroom c1;
    c1.dis();
    return 0;
}
