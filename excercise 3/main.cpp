//
//  main.cpp
//  excercise 3
//
//  Created by MARTIN on 14/10/2021.
//

#include <iostream>
using namespace std;
  
//function prototype
void menu();
double meter_to_foot(double meter);
double foot_to_meter(double foot);

//menu function
void menu()
{
    
    
    cout<<"choose any of the options"<<endl;
    
    cout<<"option 1 convert meter to foot"<<endl;
    
    cout<<"option 2 convert foot to meter"<<endl;
    
}

//function to convert meter to foot
double meter_to_foot(double meter)
{
    //declaration of local variables
    int num = 0;
    double result=0;
    
    //prompt user to enter the digit in meter
    cout<<"enter digit in meter here: "<<endl;
    cin>>num;
    
    result=num/0.35; //algorithm to compute meter to foot
    
    cout<<"result is "<<result;//displays result on the screen
   
    
    return 0;
    
}//end of function


//function to convert foot to meter
double foot_to_meter(double foot)
{
    //declare local variables
    double answer;
    int num;
    
    //prompt user to enter number in foot
    cout<<"enter digit in foot here: "<<endl;
    cin>>num;
    
    answer = 0.305*foot;//algorithm to compute foot to meter
    
    cout<<"result is "<<answer;//displays te answer to the console
    
    return 0;

}//end of function


//main function
int main()
{
    //declare local variables
   int Num=0;
   int Num1=0;
   int option = 0;
   
    //call of menu function
    menu();
    {
        cin>>option; //user input
    
   
        //if condition
   if(option==1)
   {
       meter_to_foot(Num);//call of function to convert meter to foot
   }
   
   
   if(option==2)

   {
        foot_to_meter(Num1);//call of function to convert foot to meter
   }
   
     
    }
    
    return 0;
}// end of main program
