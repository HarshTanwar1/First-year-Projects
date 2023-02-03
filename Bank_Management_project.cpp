//THIS IS A BANK MANAGEMENT PROJECT ,WHERE YOU ARE ABLE TO CREATE YOUR ACCOUNT ,DEPOSIT AND WIDHRAW MONEY . //


#include<bits/stdc++.h>
using namespace std;

class bank
{
    private: 
        char name[100];
        char add[100];
        char acc;
        int amount;
    public:
        void create_account();
        void deposit_amount();
        void widhraw_amount();
        void display_account();
};

void bank :: create_account()
{
    cout<<"\n\n------------------CREATE ACCOUNT------------------\n";
    cout<<"Enter the name of person :: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter the address of the person :: ";
    cin.ignore();
    cin.getline(add,100);
    cout<<"Enter which type of bank account you want to open (s/c) :: ";
    cin>>acc;
    cout<<"Enter the amount :: ";
    cin>>amount;
    cout<<"------------------SUCCESSFULLY OPENED------------------\n";
}


void bank :: deposit_amount()
{
    cout<<"\n\n------------------DEPOSIT AMOUNT ------------------\n";
    int balance ;
    cout<<"Enter the amount do you want to deposit :: ";
    cin>>balance;
    amount += balance ;
    cout<<"Your total bank amount :: "<<amount;
    cout<<"\n------------------SUCCESSFULLY DEPOSITED------------------\n";
}


void bank :: widhraw_amount()
{
    cout<<"\n\n------------------WIDHRAW AMOUNT ------------------\n";
    cout<<"Enter the amount which you want to widhraw :: ";
    float wid;
    cin>>wid;
    amount -= wid;
    cout<<"Your remaining bank amount :: "<<amount;
    cout<<"\n------------------SUCCESSFULLY WIDHRAW------------------\n";
}


void bank :: display_account()
{
    cout<<"\n\n------------------DISPLAY ACCOUNT------------------\n";
    cout<<"Account holder :: "<<name<<endl;
    cout<<"Address :: "<<add<<endl;
    cout<<"Account type :: "<<acc<<endl;
    cout<<"Amount :: "<<amount;
    cout<<"\n------------------SUCCESSFULLY DISPLAYED------------------\n";
}





int main()
{   char x;
    bank enquiry;

    do{ 
        int ch;
        cout<<"1) CREATE BANK ACCOUNT\n";
        cout<<"2) DEPOSIT AMOUNT IN ACCOUNT\n";
        cout<<"3) WIDHRAW AMOUNT IN ACCOUNT\n";
        cout<<"4) DISPLAY ACCOUNT DETAILS\n";
        cout<<"5) EXIT\n";
        cout<<"Enter your choice :: ";
        cin>>ch;
        switch(ch){
            case 1:
            enquiry.create_account();
            break;

            case 2:
            enquiry.deposit_amount();
            break;

            case 3:
            enquiry.widhraw_amount();
            break;

            case 4:
            enquiry.display_account();
            break;

            case 5:
            exit(1);
            break;

            default:
            cout<<"INVALID CHOICE\n";
            
        }
        cout<<"\nDo you want to do other operations yes(y)/no(n) :: ";
        cin>>x;
        if(x == 'n' || x == 'N')
        exit(0);
    }while(x == 'y' || x == 'Y');
    return 0;
}