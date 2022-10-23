#include<iostream>
using namespace std;
int main(){
    char startvalue;
    char choiceAgain;
    float onlineshopping(void);
    startlevel:
    //here using funtion to call..
    cout<<"Please press s to start shopping"<<endl;
    start:
    cin>>startvalue;
    if(startvalue=='s' || startvalue=='s'){
        float totalAmount=onlineshopping();
        cout<<"Total BillAmount is:- "<<totalAmount;
        shopAgain:
        cout<<" Do you want to shopping again, y or n"<<endl;
        cin>>choiceAgain;
        if(choiceAgain=='y' || choiceAgain=='Y'){
            goto startlevel;
        }
        else if(choiceAgain=='n' || choiceAgain=='N'){
            cout<<"Thanks for shopping"<<endl;
        }
        else{
            cout<<"You have entered wrong option, please type again"<<endl;
            goto shopAgain;
        }
    }
    else{
        cout<<"You have entered wrong option, please s"<<endl;
        goto start;
    }
}
float onlineshopping(){
    char choice;
    char item;
    int quantity;
    float billAmount=0;
    itemLevel:
    cout<<"****************welcome to online shopping***************"<<endl;
    cout<<"----------Please follow the instructions-----------"<<endl;
    cout<<"(1) please enter m to order mobile phones"<<endl;
    cout<<"(2) please enter d to order laptops"<<endl;
    cout<<"(3) please enter l to order desktops"<<endl;
    cout<<"(4) please enter s to order speakers"<<endl;
    cout<<"(5) please enter h to order headphone"<<endl;
    cin>>choice;
         //************Mobile************
    if(choice=='m' || choice== 'M'){
        mobileLevel:
        cout<<"Mobile details"<<endl;
        cout<<"(1) Apple => Price   : 70000"<<endl;
        cout<<"(2) Oppo => Price    : 30000"<<endl;
        cout<<"(3) Oneplus => Price : 45000"<<endl;
        cout<<"(4) Redmi => Price   : 25000"<<endl;
        cout<<"(5) Samsung => Price : 75000"<<endl;
        cout<<"(6) Realme => Price  : 25000"<<endl;
        cout<<"Please Enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*70000;
        }
        else if(item=='2'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*30000;

        }
        else if(item=='3'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*45000;

       }
       else if(item=='4'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*25000;
    
       }
       else if(item=='5'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*75000;

        }
        else if(item=='6'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*25000;
        }
        else{
           cout<<"You have entered wrong option, please  type again"<<endl;
           goto mobileLevel;
       } 
    }

             //************Desktop************
    else if(choice=='d' || choice== 'D'){
        DesktopLevel:
        cout<<"Desktop details"<<endl;
        cout<<"(1) Apple => Price   : 70000"<<endl;
        cout<<"(2) Oppo => Price    : 30000"<<endl;
        cout<<"(3) Oneplus => Price : 45000"<<endl;
        cout<<"(4) Redmi => Price   : 25000"<<endl;
        cout<<"(5) Samsung => Price : 75000"<<endl;
        cout<<"(6) Realme => Price  : 25000"<<endl;
        cout<<"Please Enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*70000;
        }
        else if(item=='2'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*30000;

        }
        else if(item=='3'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*45000;

       }
       else if(item=='4'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*25000;
    
       }
       else if(item=='5'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*75000;

        }
        else if(item=='6'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*25000;
        }
        else{
           cout<<"You have entered wrong option, please  type again"<<endl;
           goto DesktopLevel;
       } 
    }

             //************Laptop************
    else if(choice=='l' || choice== 'L'){
        laptopLevel:
        cout<<"Laptop details"<<endl;
        cout<<"(1) Apple => Price   : 70000"<<endl;
        cout<<"(2) Oppo => Price    : 30000"<<endl;
        cout<<"(3) Oneplus => Price : 45000"<<endl;
        cout<<"(4) Redmi => Price   : 25000"<<endl;
        cout<<"(5) Samsung => Price : 75000"<<endl;
        cout<<"(6) Realme => Price  : 25000"<<endl;
        cout<<"Please Enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*70000;
        }
        else if(item=='2'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*30000;

        }
        else if(item=='3'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*45000;

       }
       else if(item=='4'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*25000;
    
       }
       else if(item=='5'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*75000;

        }
        else if(item=='6'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*25000;
        }
        else{
           cout<<"You have entered wrong option, please  type again"<<endl;
           goto laptopLevel;
       } 
    }

             //************Speaker************
    else if(choice=='s' || choice== 'S'){
        speakerLevel:
        cout<<"Speaker details"<<endl;
        cout<<"(1) Apple => Price   : 70000"<<endl;
        cout<<"(2) Oppo => Price    : 30000"<<endl;
        cout<<"(3) Oneplus => Price : 45000"<<endl;
        cout<<"(4) Redmi => Price   : 25000"<<endl;
        cout<<"(5) Samsung => Price : 75000"<<endl;
        cout<<"(6) Realme => Price  : 25000"<<endl;
        cout<<"Please Enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*70000;
        }
        else if(item=='2'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*30000;

        }
        else if(item=='3'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*45000;

       }
       else if(item=='4'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*25000;
    
       }
       else if(item=='5'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*75000;

        }
        else if(item=='6'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*25000;
        }
        else{
           cout<<"You have entered wrong option, please  type again"<<endl;
           goto speakerLevel;
       } 
    }

             //************Headphone************
    else if(choice=='h' || choice== 'H'){
        headphoneLevel:
        cout<<"Headphone details"<<endl;
        cout<<"(1) Apple => Price   : 70000"<<endl;
        cout<<"(2) Oppo => Price    : 30000"<<endl;
        cout<<"(3) Oneplus => Price : 45000"<<endl;
        cout<<"(4) Redmi => Price   : 25000"<<endl;
        cout<<"(5) Samsung => Price : 75000"<<endl;
        cout<<"(6) Realme => Price  : 25000"<<endl;
        cout<<"Please Enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*70000;
        }
        else if(item=='2'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*30000;

        }
        else if(item=='3'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*45000;

       }
       else if(item=='4'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*25000;
    
       }
       else if(item=='5'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*75000;

        }
        else if(item=='6'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*25000;
        }
        else{
           cout<<"You have entered wrong option, please  type again"<<endl;
           goto headphoneLevel;
       } 
    }

    else{
        cout<<"You have entered wrong option, please  type again"<<endl;
           goto itemLevel;
    }
    return billAmount; 
}
           