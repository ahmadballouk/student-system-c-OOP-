
#include "BaseEntity.cpp"


class Student : public BaseEntity
{
    private : 

         
        double gpa ; 

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