#include <iostream>


class Student
{

    public:
    Student(int p_id, int p_age, std::string p_name): id(p_id), age(p_age), name(p_name)
    {

    }

    void Display_info()
    {
        std::cout << "Id = " << this->id << "Age = " << this->age << "Name = " << this->name;

    }


    private:
    int id;
    int age;
    std::string name;

};

int main()
{


    return 0;
}
