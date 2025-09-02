#include <iostream>
using namespace std;

//create model shareDate 

class ShareData
{

private:
    int id;
    string name;

public:
    // seters

    void setId(int id)
    {
        this->id = id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    // geters

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }
};

// creat model  BaseEntity

class BaseEntity : public ShareData
{

private:
    int age;
    string PhoneNumber;

public:
    void setAge(int age)
    {
        this->age = age;
    }

    void setPhoneNumber(string PhoneNumber)
    {
        this->PhoneNumber = PhoneNumber;
    }

    int getAge()
    {
        return age;
    }

    string getPhoneNumber()
    {
        return PhoneNumber;
    }
};

// create model teacher

class Teacher : public BaseEntity
{
private:
    double salary;
    int studentIds[5];

public:
    //* setters

    void setSalary(double salary)
    {
        this->salary = salary;
    }

    void setstudentsId(int studentIds[5])
    {
        for (int i = 0; i < sizeof(studentIds) / sizeof(studentIds[0]); i++)
        {
            this->studentIds[i] = studentIds[i];
        }
    }

    //*getters

    int *getStudentIds()
    {
        return studentIds;
    }

    double getSalary()
    {
        return salary;
    }
};

// craete model student

class Student : public BaseEntity
{
private:
    double gpa;
    Teacher teachers[5];

public:
    //* setters

    void setGpa(double gpa)
    {
        this->gpa = gpa;
    }

    void setTeachers(Teacher teachers[5])
    {
        for (int i = 0; i < 5; i++)
        {
            this->teachers[i] = teachers[i];
        }
    }

    //*getters

    //! pointer عم ياشر ع الاراي
    Teacher *getTeachers()
    {
        return teachers;
    }

    double getGpa()
    {
        return gpa;
    }
};

// create model course

class Course : public ShareData
{
private:
    double hour;

public:
    // seters

    void sethour(double hour)
    {
        this->hour = hour;
    }

    // geters

    double gethour()
    {
        return hour;
    }
};
