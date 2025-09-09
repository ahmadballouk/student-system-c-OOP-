#include<iostream>

using namespace std ;




int main ()
{

    int process ;
    int flag  = 0 ; 

while(true)
{
  cout <<"\t\t***************** Student Managment System ***************** " <<endl;
  cout <<"Plase Enter your Process you need to do !"<<endl;
  cout << "1 - Add Student"<<"\t\t"<<"2 - Remove Student"<<endl;
  cout << "3 - Edit Student"<<"\t"<<"4 - Show  Student"<<endl;
  cout <<"5 - Exit"<<endl;
  cin >>process ;

    switch(process)
    {
        case 1 :
            cout <<"process Add"<<endl;
            break;

        case 2 : 
            cout <<"process Remove"<<endl;
            break;

        
        case 3 : 
            cout <<"process Edit"<<endl;
            break;


        case 4 :
            cout <<"process show"<<endl;
            break;

        
        case 5 :
            cout <<"process Exit"<<endl;
            flag = 1 ; 
            break;
            
        default :
            cout << "Invalid Choose"<<endl;

    }

    
    if(flag ==1)
    {
        break;
    }


  }
  
}