#include<iostream>

using namespace std;

class Hema
{
private:
    int xyz=100;
protected:
    int abc=10;
public:
    int qwerty=12345;

    friend void latha(Hema& z);
};
    void latha(Hema& z)
    {
        cout<<"Private data "<<z.xyz<<endl;
        cout<<"protected data "<<z.abc<<endl;
        cout<<"public data "<<z.qwerty<<endl;
    }

int main()
{
   Hema obj;
   latha(obj);
   return 0;
}
