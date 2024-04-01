#include<iostream> 
#include<conio.h>
#include<time.h>
using namespace std ; 
 void guess(void){ 
 cout<<"**********************"<<endl<<"\n\n";
 cout<<"-------------Welcome To The Game : Guess Number -----------------"<<endl;
cout<<"\n\tI have Selected One Number Between 1 to 10 Guess It "<<endl; 
cout<<"\n\t\t------You have 3 Chance To Guess-------"<<endl;
cout<<"\n\t\t\t---- All The Best ----"<<endl; 
cout<<"\n\n************************"<<endl; 
srand(time(0));
 int num = (rand ()%10)  +1;
 int input ;  
 int chance = 3 ;  
 for(int i = 1 ; i <= 3 ; i++){ 
 cout<<"Enter The Guessed Number : "; 
 cin>>input;
 cout<<"\n";   
      if(input==num){     
      cout<<"Congratulation :- You Have Guessed Right Number "<<endl; 
      break;
      }
      else{ 
          if(input>num){ 
          cout<<"OOPs Wrong Answer "<<endl; 
          cout<<"\nHINT : To high Number Guessed :- Try Again "<<endl;  
          chance--; 
          cout<<"Remaining Chance : "<<chance<<endl<<"\n\n"; 
          
          }
          else if(input < num){ 
          cout<<"OOPs Wrong Answer "<<endl; 
          cout<<"HINT : To Small number Guessed :- Try Again "<<endl;  
          chance--; 
          cout<<"Remaining Chance : "<<chance<<endl<<"\n\n"; 
           if(chance==0){ 
 cout<<"\n\t--------Game Over-------- "<<endl; 

  }
          
    }
      }
 
         }
 } 
int main()
{
	guess(); 
    return 0 ; 
}