#include "../service/service.cpp"
#include<bits/stdc++.h>




class StudentController
{
    private :

        StudentService studentService ; 

    public :

     int addStudent(Student student)
    {
      return  studentService.addStudent(student);
    }

};


class CourseController
{

    private :

     CourseService  courseService ; 

    public :

     int addCourse(Course course)
    {
        return  courseService.addCourse(course);
    }
    

};


class TeacherController
{

    private :

        TeacherService TeacherService ;

    public :

    int addTeacher(Teacher teacher)
    {
       return TeacherService.addTeacher(teacher);
    }

};



