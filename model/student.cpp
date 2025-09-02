
#include "BaseEntity.cpp"
#include "teacher.cpp"


class Student : public BaseEntity
{
    private : 

         
        double gpa ; 
        Teacher arr [5];
    public : 

    //* setters
       

         void setGpa (double gpa)
        {
            this ->gpa = gpa ; 
        }

        //*getters

     

         double getGpa ()
        {
            return gpa ; 
        }

};