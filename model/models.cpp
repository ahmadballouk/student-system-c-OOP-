#include<iostream>
using namespace std ;

// creat model  BaseEntity

class BaseEntity
{

private :
        int id ;
        string name;
        int age  ;
        string PhoneNumber ;  
public :

        void setId (int id)
        {
            this -> id = id ; 
        }

     void setName (string name)
        {
            this ->name = name ; 
        }

         void setAge (int age)
        {
            this -> age = age ; 
        }

         void setPhoneNumber (string PhoneNumber)
        {
            this ->PhoneNumber = PhoneNumber ; 
        }


         int getId ()
        {
            return id ; 
        }

     string getName ()
        {
            return name ; 
        }

         int  getAge ()
        {
           return age ;  
        }

         string getPhoneNumber ()
        {
          return PhoneNumber ;   
        }

        
};


//create model teacher 

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


// craete model student 

class Student : public BaseEntity
{
    private : 

         
        double gpa ; 
        Teacher teachers [5];

    public : 

    //* setters
       

         void setGpa (double gpa)
        {
            this ->gpa = gpa ; 
        }

        void setTeachers (  Teacher teachers [5])
        {
            for (int i = 0 ; i < 5 ; i++ )
            {
                this ->teachers[i]=teachers[i];
            }
        }



        //*getters

        //! pointer عم ياشر ع الاراي 
        Teacher * getTeachers (  )
        {
            return teachers ;
        }

        
            

         double getGpa ()
        {
            return gpa ; 
        }

};
