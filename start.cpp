#include "../controller/controller.cpp"
#include <iostream>
#include<string>
using namespace std;


void displaySystem ()
{
     cout << "\t\t***************** Student Managment System ***************** " << endl;

        cout << "Plase Enter your Process you need to do !" << endl;
        cout << "1 - About Student" << "\t\t" << "2 - about Course " << endl;
        cout << "3 - About Teachers" << "\t" << "4 - Exit " << endl;

};

void showList (string value)
{
    
            cout << "1 - Add " <<value<< "\t\t" << "2 - Remove " <<value<< endl;
            cout << "3 - Edit " <<value<< "\t" << "4 - Show  "<<value << endl;
            cout << " 5 - Exit" << endl;
}


int main()
{

    int process;
    int flag = 0;

    while (true)
    {

        displaySystem();
        
        cin >> process;

        switch (process)
        {
        case 1:
            
            showList("Student");

            int processStudent;
            cin >> processStudent ; 
           
            if (processStudent == 1)
            {

        

            Student student ;    

             cout <<"Please Enter Student Data"<<endl;

             cout <<"Enter Student Name : ";
             string name; 
             cin>>name;
             student.setName(name);
             
             cout <<"Enter Student Age : ";
             int age ;
             cin>>age;
             student.setAge(age);

             cout <<"Enter Student PhoneNumber : ";
            string PhoneNumber ; 
             cin >> PhoneNumber;
             student.setPhoneNumber(PhoneNumber);

             cout <<"Enter Student GPA : ";
            double gpa ; 
             cin >> gpa;
             student.setGpa(gpa);


                StudentController studentController ;

                studentController.addStudent(student);
                
               

            }
            
            
        break;

        case 2:

            showList("Course");
            
        break;

        case 3:

           showList("Teacher");

        break;

        case 4:

            cout << "process Exit" << endl;

            flag = 1;

            break;

        default:
            cout << "Invalid Choose" << endl;
        }

        if (flag == 1)
        {
            break;
        }
    }
}