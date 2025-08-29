


class Student 
{
    private : 

        int id ;
        string name;
        int age  ;
        string PhoneNumber ;  
        double gpa ; 

    public : 

    //* setters
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

         void setGpa (double gpa)
        {
            this ->gpa = gpa ; 
        }

        //*getters

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

         double getGpa ()
        {
            return gpa ; 
        }

};