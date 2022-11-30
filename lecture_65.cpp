#include <iostream>
using namespace std;
class student
{
private:
    int a, b;

public:
    student()
    {
    }
    student(int x, int y)
    {
        a = x;
        b = y;
    }
    student operator+(student const &obj)
    {
        student temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
    void print()
    {
        cout << "The value of A is :" << a << endl;
        cout << "The value of B is :" << b << endl;
    }
};
int main()
{
    student obj1(5, 5);
    student obj2(2, 2);
    student obj3;
    obj3 = obj1 + obj2;
    cout << "The obj 1" << endl;
    obj1.print();
    cout << "The obj 2" << endl;
    obj2.print();
    cout << "The obj 3" << endl;
    obj3.print();
    return 0;
}