#include "../service/service.cpp"
#include<bits/stdc++.h>


//!-----------------------------------student-------------------------------------


class StudentController
{
    private :

        StudentServiceImpl studentService ; 

    public :

     int addStudent(Student student)
    {
      return  studentService.addStudent(student);
    }

};

//!-----------------------------------course-------------------------------------


class CourseController
{

    private :

     CourseServiceImpl  courseService ; 

    public :

     int addCourse(Course course)
    {
        return  courseService.addCourse(course);
    }
    

};

//!-----------------------------------teacher-------------------------------------

class TeacherController
{

    private :

        TeacherServiceImpl TeacherService ;

    public :

    int addTeacher(Teacher teacher)
    {
       return TeacherService.addTeacher(teacher);
    }

};



