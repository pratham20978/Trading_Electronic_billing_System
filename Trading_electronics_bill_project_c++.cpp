#include<iostream>
#include<ctime>//show current time in terminal
using namespace std;


float shop(){
    shop:
      char choice;
      char product;
      int quantity;
      float bill=0;
      itemLevel:
          cout<<"**********WELCOME**********"<<endl;
          cout<<"__Please Follow The Instruction__"<<endl;
          cout<<"| 1) Please Enter 'R' to Order Refrigerator "<<endl;
          cout<<"| 2) Please Enter 'W' to Order Washing Machine "<<endl;
          cout<<"| 3) Please Enter 'T' to Order Television "<<endl;
          cout<<"| 4) Please Enter 'M' to Order Microwave "<<endl;
          cout<<"| 5) Please Enter 'A' to Order Air Conditioner "<<endl;
          cin>>choice;

          
          if(choice=='r' || choice=='R'||choice=='w' || choice=='W'||choice=='t' || choice=='T'||choice=='m' || choice=='M'||choice=='a' || choice=='A'){
             
            if(choice=='r' || choice=='R'){
                refrigerator: 
                cout<<"_____Refrigerator Details_____"<<endl;
                cout<<"| 1) Whirlpool => Price: 40000 |"<<endl;
                cout<<"| 2) Samsung   => Price: 25000 |"<<endl;
                cout<<"| 3) Haier     => Price: 20000 |"<<endl;
                cout<<"| 4) Voltas    => Price: 18000 |"<<endl;
                cout<<"| 5) Godrej    => Price: 30000 |"<<endl;
                cout<<"| 6) Panasonic => Price: 35000 |"<<endl;
                 
                cout<<"Please enter your choice"<<endl;
                cin>>product;
                if(product=='1'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;
                }
                else if(product=='2'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*25000;
                }
                else if(product=='3'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product=='4'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*18000;
                }
                else if(product=='5'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else if(product=='6'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*35000;
                }
                else{
                    cout<<"you have etered the wrong option ,Please try again"<<endl;
                    goto refrigerator;
                }



            }
           
             
            if(choice=='w' || choice=='W'){
                WashingMachine:
                cout<<"_____Washing Machine Details_____"<<endl;
                cout<<"| 1) Bosch     => Price: 40000 |"<<endl;
                cout<<"| 2) LG        => Price: 25000 |"<<endl;
                cout<<"| 3) IFB       => Price: 20000 |"<<endl;
                cout<<"| 4) Haier     => Price: 58000 |"<<endl;
                cout<<"| 5) Maytag    => Price: 30000 |"<<endl;
                cout<<"| 6) Samsung   => Price: 45000 |"<<endl;
                
               
                cout<<"Please enter your choice"<<endl;
                cin>>product;
                if(product=='1'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;
                }
                else if(product=='2'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*25000;
                }
                else if(product=='3'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product=='4'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*58000;
                }
                else if(product=='5'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else if(product=='6'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*45000;
                }
                else{
                    cout<<"you have etered the wrong option ,Please try again"<<endl;
                    goto WashingMachine;
                }



            }
          
            if(choice=='t' || choice=='T'){
                Television :
                cout<<"_____ Television  Details_____"<<endl;
                cout<<"| 1) Sony      => Price: 97000 |"<<endl;
                cout<<"| 2) Samsung   => Price: 75000 |"<<endl;
                cout<<"| 3) LG        => Price: 70000 |"<<endl;
                cout<<"| 4) TCL       => Price: 58000 |"<<endl;
                cout<<"| 5) Sharp     => Price: 80000 |"<<endl;
                cout<<"| 6) Panasonic => Price: 69000 |"<<endl;

                
                cout<<"Please enter your choice"<<endl;
                cin>>product;
                if(product=='1'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*97000;
                }
                else if(product=='2'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*75000;
                }
                else if(product=='3'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*70000;
                }
                else if(product=='4'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*58000;
                }
                else if(product=='5'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*80000;
                }
                else if(product=='6'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*69000;
                }
                else{
                    cout<<"you have etered the wrong option ,Please try again"<<endl;
                    goto Television;
                }


            }
            
            if(choice=='m' || choice=='M'){
                Microwave:
                cout<<"_____ Microwave  Details_____"<<endl;
                cout<<"| 1) LG        => Price: 40000 |"<<endl;
                cout<<"| 2) IFB       => Price: 35000 |"<<endl;
                cout<<"| 3) Whirlpool => Price: 30000 |"<<endl;
                cout<<"| 4) Panasonic => Price: 48000 |"<<endl;
                cout<<"| 5) Bajaj     => Price: 30000 |"<<endl;
                cout<<"| 6) Sumsung   => Price: 35000 |"<<endl;

               
                cout<<"Please enter your choice"<<endl;
                cin>>product;
                if(product=='1'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;
                }
                else if(product=='2'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*35000;
                }
                else if(product=='3'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else if(product=='4'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*48000;
                }
                else if(product=='5'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else if(product=='6'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*35000;
                }
                else{
                    cout<<"you have etered the wrong option ,Please try again"<<endl;
                    goto Microwave;
                }


            }
            
            if(choice=='a' || choice=='A'){
                AirConditioner:
                cout<<"_____Air Conditioner Details_____"<<endl;
                cout<<"| 1) Daikin    => Price: 14000 |"<<endl;
                cout<<"| 2) Voltas    => Price: 19000 |"<<endl;
                cout<<"| 3) Hitachi   => Price: 8000 |"<<endl;
                cout<<"| 4) O General => Price: 22000 |"<<endl;
                cout<<"| 5) Lloyd     => Price: 17000 |"<<endl;
                cout<<"| 6) Sumsung   => Price: 12000 |"<<endl;

              
                cout<<"Please enter your choice"<<endl;
                cin>>product;

                if(product=='1'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*14000;
                }
                else if(product=='2'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*19000;
                }
                else if(product=='3'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*8000;
                }
                else if(product=='4'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*22000;
                }
                else if(product=='5'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*17000;
                }
                else if(product=='6'){
                    cout<<"Please enter the quantity of the Product :"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*12000;
                }
                else{
                    cout<<"you have etered the wrong option ,Please try again"<<endl;
                    goto AirConditioner;
                }


            }




        }
        else{
            cout<<"you have entered the wrong option, please try again"<<endl;
            goto shop;
        }
        return bill;
}    
int main(){
    char start;
    float shop(void);
    char choice;

    startL://this is tag
       cout<<"Please Press H to start shoping for Home appliances"<<endl;
       start:
          cin>>start;
          if(start=='h'||start=='H'){
            float total=shop();
            time_t t=time(NULL);
            tm* tPtr=localtime(&t);//tm* this is struck type

            cout<<"Bill Date : ";
            cout<<tPtr->tm_mday<<"/";//tm_mday shows the day ranges from 1 to 31
            cout<<1+tPtr->tm_mon<<"/";//tm_mon shows the month since jan
            cout<<1900 + tPtr->tm_year<<endl;//tm_yeat shows it is since 1900
            cout<<"Bill time : "<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec)<<endl;
            cout<<"Total Bill Amount : "<<total<<endl;
            if(total>50000 && 100000){
                total=total-(0.05*total);
                cout<<"Total Discount : 5% "<<endl;
            }
            else if(total>100000 && 125000){
                total=total-(0.1*total);
                cout<<"Total Discount : 10% "<<endl;
            }
            else if(total>125000 && 150000){
                total=total-(0.25*total);
                cout<<"Total Discount : 25% "<<endl;
            }
            else if(total>150000){
                total=total-(0.5*total);
                cout<<"Total Discount : 50% "<<endl;
            }

            cout<<"Total Bill Amount : "<<total<<endl;
            Again:
              cout<<"Do You Want Shopping Again 'Y' or 'N' "<<endl;
              cin>>choice;
              if(choice=='y'|| choice=='Y'){
                goto startL; //goto call automaticaly start tag to start
              }
              else if(choice=='n'|| choice=='N'){
                cout<<"Thanks for Shopping "<<endl;
              }
              else{
                cout<<"You have entered wrong option,Please Press 'y' or 'n' "<<endl;
                goto Again;
              }
              
          }
          else{
            cout<<"You have entered wrong option,Please Press 'H' to start again "<<endl;
            goto start;
          }

    return 0;
}