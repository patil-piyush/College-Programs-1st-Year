#include <iostream>

template <class T>
class Student
{
public:
    T mark1;
    T mark2;

    Student(T m1, T m2)
    {
        this->mark1 = m1;
        this->mark2 = m2;
    }

    T calculateTotal()
    {
        return mark1 + mark2;
    }
};

int main()
{

    Student<int> student1(11, 99);
    std::cout << "Total marks of student 1 (integer marks): " << student1.calculateTotal() << std::endl;

    Student<float> student2(22.2, 44.4);
    std::cout << "Total marks of student 2 (floating point marks): " << student2.calculateTotal() << std::endl;

    return 0;
}