#include<iostream>
#include <stdlib.h>
#include<conio.h>
using namespace std;
class data{
   public:
   string name;
   float balance;
   void aayush(){
      name = "Aayush Gupta";
      balance = 50000;
   }

};
class ATM{
   public:
   int pin,num,account,card,n;
   float amount;
     float balance = 5000;
    ATM(){
      cout<<"Choose a transaction "<<endl;
      cout<<"1. Money withdraw";
       cout<<"\n2. account statement";
        cout<<"\n3. Online banking";
        cout<<"\n4. EXIT \n";          
             cin>>num;
             system("CLS"); 
             switch(num){
case 1:
               cout<<"enter the pin ";
               cin>>pin;
               system("CLS");
        if(pin==1234) {cout<<"enter the amount ";
                  cin>>amount;
                  system("CLS");
                   if(amount>balance){
                cout<<"insufficient balance**\n";
                   }
        else if(amount<=balance){
               cout<<"Please wait while your process is being processed................ "<<endl;
               getch();
               cout<<"Transaction completed"<<endl;
                getch();
               cout<<"Remaining amount : "<<balance-amount<<endl;
               }
            }              
        else  cout<<"incorrect pin\n";
               getch();
                system("CLS");
        break;
case 2:
         cout<<"enter the pin ";
               cin>>pin;
               system("CLS");
        if(pin==1234){ cout<<"Please wait while your transaction is being processed  "<<endl;
               getch();
               cout<<"Balance : "<<balance<<endl;
               getch();
               system("CLS");
            }

        else cout<<"incorrect pin";
         getch();
        system("CLS");
         
        break;  
             
case 3:
         cout<<"Enter the pin ";
               cin>>pin;
               system("CLS");
        if(pin==1234){
        
            cout<<"\n1. Cash transfer ";
            cout<<"\n2. Atm/ Debit card block";
             cin>>num;
             system("CLS");
            switch(num){
    case 1:
                 cout<<"Enter the account number : \n";
                 cin>>account;
                 system("CLS");
                 cout<<"Enter the amount \n";
                 cin>>amount;
                 system("CLS");
                 cout<<"Enter pin \n";
                 cin>>pin;
                 system("CLS");
        if(pin==1234){
          if(amount>balance){
                         cout<<"Insufficent balance\n";
                         getch();
                         system("CLS");
                 }
          else if(amount<=balance)  {
                     cout<<"Please wait while your transaction is processed\n";
                     getch();
                     system("CLS");
                     cout<<"Completed"<<endl;
                     getch();
                     system("CLS");
                     cout<<"Remaining amount : "<<balance-amount<<endl;
                 }
                }
        else cout<<"incorrect pin ";
        break;
    case 2:
                 cout<<"Please enter your 12 digit card number \n";
                 cin>>card;
                 system("CLS");
                 cout<<"Type 1 for confirmation and 2 for cancellation \n";
                 cin>>n;
                 system("CLS");
        if(n==1){
                     cout<<"Please enter your pin\n";
                 cin>>pin;
                 system("CLS");
          if(pin==1234){
                     cout<<"Card blocked sucessfully\n";
                     
                 }
          else cout<<"incorrect pin\n";
                 getch();
                     system("CLS");
                 }
        else{
                     cout<<"Thank you";
                 }                
             }
            }
        else cout<<"incorrect pin"<<endl;
            getch();
            system("CLS");
case 4:
        exit(0);
             }
         cout<<"Thank you";
         }       
   };
int main(){
    
    cout<<"W E L C O M E  T O  A P N A  A T M\n"<<endl;
    
    ATM obj;
    ATM abj1;
    //obj.ATM();   
    return 0;
}