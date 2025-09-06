#include"../model/models.cpp"
#include<bits/stdc++.h>
using namespace std;


////////////////!student////////////////////////////////////
//* interface studentRepository
class studentRepository
{
    public:

        virtual int  addstudent (Student student)  ; 
        
};



//* class studentRepositoryImpl
class studentRepositoryImpl : public studentRepository
{

private :
    Student student [25];
    int index = 0 ;

public :
    int  addstudent (Student student)
    {
        if (index == 25)
        {
            cout<<"full student"<<endl;
        }
        else
        {
        student[index] = student ;
        index++;
        }
    }


};

////////////////!course////////////////////////////////////

//* interface courseRepository

class courseRepository
{
  public :

 
};


//* class courseRepositoryImpl
class courseRepositoryImpl : public courseRepository
{

};


////////////////!teacher////////////////////////////////////

//* interface courseRepository

class TeacherRepository
{

};


//* class teacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository
{

};


