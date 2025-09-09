#include "../Repository/Repository.cpp"
#include<bits/stdc++.h>
using namespace std ; 


class StudentService {

    public :

     virtual int addStudent(Student student) = 0;
};

class StudentServiceImpl {

private : 

 StudentRepository studentRepository ; 



public :
     int addstudent(Student student)
    {
      return  studentRepository.addStudent(student);
    }



};


class CourseService {

       virtual int addCourse (Course course) = 0 ; 

};




class CourseServiceImpl {
    


private :
 CourseRepository courseRepository ;


public :
     int addscourse(Course course)
    {
        return  courseRepository.addCourse(course);
    }
    
};

class TeacherService {

    virtual int addteacher(Teacher teacher) = 0 ;


};




class TeacherServiceImpl 
{

private :

  

TeacherRepository teacherRepository ; 


public :

int addteacher(Teacher teacher)
    {
       return teacherRepository.addTeacher(teacher);
    }

    
};

