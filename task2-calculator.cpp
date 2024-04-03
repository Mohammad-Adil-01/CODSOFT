#include<iostream>
#include<string>
using namespace std ;
    void input(void){
         float number1 , number2 ; 
         char operation ; 
         int num ;
    cout<<"\n\t\t\tENTER HOW MANY TIME TO PERFORM A CALCULATION : "; 
    cin>>num;
for(int i = 1 ; i<=num;i++){ 
    cout<<"\n\t-----------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\t\t\t\tCALCULATOR - FOR SIMPLE CALCULATION"<<endl;
    cout<<"\n\tENTER THE FIRST NUMBER : ";
    cin>>number1;
    cout<< "\n\tWHICH OPERATOR TO PERFORM (--- ('+') , ('-') , ('*') , ('/') ---) : " ;
    cin>>operation; 
    cout<<"\n\tENTER THE SECOND NUMBER : ";
    cin>>number2; 
    switch (operation)
    {
    case '+' :   
                cout<<"\n\tADDITION OF TWO NUMBER IS :"<< number1 + number2 <<endl ;
                 cout<<"\n \n \n "<<endl;
        break;
    case '-' :   
                cout<<"\n\tSUBSTRACTION OF TWO NUMBER IS :"<<number1 - number2 <<endl;
                cout<<"\n \n \n "<<endl;
        break;
    case '*' :   
                cout<<"\n\tMULTIPLICATION OF TWO NUMBER IS :"<<number1 * number2 <<endl;
                cout<<"\n \n \n "<<endl;
        break;
    case '/' :  
                cout<<"\n\tDIVISION OF TWO NUMBER IS :"<< number1 / number2 <<endl;
                cout<<"\n \n \n "<<endl;
        break;
   default:
                cout<<"\n\tOOPs - INVALID OPERATOR :- "<<endl;
                cout<<"\n\t PLEASE ENTER CORRECT OPERATOR :- "<<endl;
                cout<<"\n \n \n "<<endl; 
        break;
    }
}
}
int main(){ 
             input();       
             return 0 ;
      }