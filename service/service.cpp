#include "../Repository/Repository.cpp"
#include<bits/stdc++.h>
using namespace std ; 

//!-----------------------------------student-------------------------------------

class StudentService {

    public :

     virtual int addStudent(Student student) = 0;
};

class StudentServiceImpl {

private : 

 StudentRepositoryImpl studentRepository ; 



public :
     int addStudent(Student student)
    {
      return  studentRepository.addStudent(student);
    }



};

//!-----------------------------------course-------------------------------------


class CourseService {

       virtual int addCourse (Course course) = 0 ; 

};




class CourseServiceImpl {
    


private :
 CourseRepositoryImpl courseRepository ;


public :
     int addCourse(Course course)
    {
        return  courseRepository.addCourse(course);
    }
    
};

//!-----------------------------------teacher-------------------------------------


class TeacherService {

    virtual int addTeacher(Teacher teacher) = 0 ;


};




class TeacherServiceImpl 
{

private :

  

TeacherRepositoryImpl teacherRepository ; 


public :

int addTeacher(Teacher teacher)
    {
       return teacherRepository.addTeacher(teacher);
    }

    
};

