#include"../model/models.cpp"
#include<bits/stdc++.h>
using namespace std;


////////////////!student////////////////////////////////////
//* interface studentRepository
class studentRepository
{
    public:

        virtual int  addstudent (Student student) = 0 ; 
        
};



//* class studentRepositoryImpl
class studentRepositoryImpl : public studentRepository
{

private :
    Student students [25];
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
        students[index] = student ;
        index++;
        }
    }


};

////////////////!course////////////////////////////////////

//* interface courseRepository

class courseRepository
{
  public :

        virtual int  addcourse (Course course) = 0 ; 


 
};


//* class courseRepositoryImpl
class courseRepositoryImpl : public courseRepository
{
    private :
   Course courses [25];
    int index = 0 ;

public :
    int  addscourse (Course course)
    {
        if (index == 25)
        {
            cout<<"full teachers"<<endl;
        }
        else
        {
        courses[index] = course ;
        index++;
        }
    }

};


////////////////!teacher////////////////////////////////////

//* interface courseRepository

class TeacherRepository
{
        virtual int  addteacher (Teacher teacher) = 0 ; 

};


//* class teacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository
{

         private :
   Teacher Teachers [25];
    int index = 0 ;

public :
    int  addscourse (Teacher teacher)
    {
        if (index == 25)
        {
            cout<<"full courses"<<endl;
        }
        else
        {
        Teachers[index] = teacher ;
        index++;
        }
    }
};


