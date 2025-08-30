class Teacher 
{
 private : 

        int id ;
        string name;
        int age  ;
        string PhoneNumber ;  
        double salary  ; 

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

         void setSalary (double salary)
        {
            this ->salary = salary ; 
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

         double getSalary ()
        {
            return salary ; 
        }

};