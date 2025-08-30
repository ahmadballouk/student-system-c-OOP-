
#include "BaseEntity.cpp"



class Teacher : public BaseEntity
{
 private : 

         
        double salary  ; 

    public : 

    //* setters
       
         void setSalary (double salary)
        {
            this ->salary = salary ; 
        }

        //*getters



         double getSalary ()
        {
            return salary ; 
        }

};