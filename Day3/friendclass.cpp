#include<iostream>

using namespace std;

class Arman
{
private:
    int private_variable=10;
protected:
    int protected_variable=100;
public:
    void bike()
    {
        cout<<"public class bike"<<endl;
    }
    friend class Shankar;
};

        class Shankar{
public:
    void display(Arman& a)
    {
        cout<<"Private data of arman"<<a.private_variable<<endl;
        cout<<"protected variable of arman"<<a.protected_variable<<endl;
    }
    };
int main()
{
    Arman z;
    z.bike();

    Shankar obj;
    obj.display(z);
}
