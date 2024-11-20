#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainMenu();
class Management{
    public:
    Management(){
        mainMenu();
    }
};
class Details{
    public:
    static string name,gender;
    int phoneNo,age;
    string add;
    static int cId;
    char arr[100];
    void information(){
        cout<<"\nEnter the customer ID:";
        cin>>cId;
        cout<<"\nEnter the name : ";
        cin>>name;
        cout<<"\nEnter the age : ";
        cin>>age;
        cout<<"\n Address : ";
        cin>>add;
        cout<<"\n Gender : ";
        cin>>gender;
        cout<<"Your Details are saved with us\n"<<endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;
class registration
{
    public:
    static int choice;
    int choice1,back;
    static float charges;
    void flights(){
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
        for(int a=0;a<6;a++){
            cout<<(a+1)<<".flight to "<<flightN[a]<<endl;
        }
        cout<<"\nWelcome to the Airlines!"<<endl;
        cout<<"Press the number of the country of which you wnat to book the flight: ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"_Welcome to Dubai Emirates_\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.Dub-498 "<<endl;
                cout<<"\t08-01-2024 6:00AM 10hrs. Rs.14000"<<endl;
                cout<<"2.Dub-573 "<<endl;
                cout<<"\t08-01-2024 6:00pm 12hrs. Rs.12000"<<endl;
                cout<<"3.Dub-973 "<<endl;
                cout<<"\t11-01-2024 2:00pm 10hrs. Rs.19000"<<endl;
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                if(choice1==1){
                    charges=14000;
                    cout<<"\n You have succesfully booked the flight DUB-498"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                else if(choice1==2){
                    charges=12000;
                    cout<<"\n You have succesfully booked the flight DUB-573"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                 else if(choice1==3){
                    charges=19000;
                    cout<<"\n You have succesfully booked the flight DUB-973"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }else{
                    cout<<"Invalid input,shifting to the previous menu "<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu :"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }else{
                mainMenu();
            }
        }
        case 2:{
             cout<<"_Welcome to Canadian Airlines_\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.CA-198 "<<endl;
                cout<<"\t09-01-2024 3:00PM 24hrs. Rs.65000"<<endl;
                cout<<"2.CA-286 "<<endl;
                cout<<"\t10-01-2024 12:00pm 22hrs. Rs.78000"<<endl;
                cout<<"3.CA-837 "<<endl;
                cout<<"\t11-01-2024 2:00pm 27hrs. Rs.97000"<<endl;
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                if(choice1==1){
                    charges=65000;
                    cout<<"\n You have succesfully booked the flight CA-198"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                else if(choice1==2){
                    charges=78000;
                    cout<<"\n You have succesfully booked the flight CA-286"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                 else if(choice1==3){
                    charges=97000;
                    cout<<"\n You have succesfully booked the flight CA-837"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }else{
                    cout<<"Invalid input,shifting to the previous menu "<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu :"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }else{
                mainMenu();
            }
        }
        case 3:{
             cout<<"_Welcome to Uk airlines_\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.UK-453 "<<endl;
                cout<<"\t09-01-2024 6:00AM 18hrs. Rs.24000"<<endl;
                cout<<"2.UK-456 "<<endl;
                cout<<"\t09-01-2024 11:00pm 16hrs. Rs.32000"<<endl;
                cout<<"3.UK-655 "<<endl;
                cout<<"\t10-01-2024 2:00pm 12hrs. Rs.46000"<<endl;
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                if(choice1==1){
                    charges=24000;
                    cout<<"\n You have succesfully booked the flight UK-453"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                else if(choice1==2){
                    charges=32000;
                    cout<<"\n You have succesfully booked the flight UK-456"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                 else if(choice1==3){
                    charges=46000;
                    cout<<"\n You have succesfully booked the flight UK-655"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }else{
                    cout<<"Invalid input,shifting to the previous menu "<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu :"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }else{
                mainMenu();
            }
        }
        case 4:{
             cout<<"_Welcome to US Airlines_\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.US-143 "<<endl;
                cout<<"\t08-01-2024 1:00AM 36hrs. Rs.68000"<<endl;
                cout<<"2.US-005 "<<endl;
                cout<<"\t08-01-2024 7:00pm 32hrs. Rs.82000"<<endl;
                cout<<"3.US-284 "<<endl;
                cout<<"\t10-01-2024 12:00pm 28hrs. Rs.110000"<<endl;
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                if(choice1==1){
                    charges=68000;
                    cout<<"\n You have succesfully booked the flight US-143"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                else if(choice1==2){
                    charges=82000;
                    cout<<"\n You have succesfully booked the flight US-005"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                 else if(choice1==3){
                    charges=110000;
                    cout<<"\n You have succesfully booked the flight US-284"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }else{
                    cout<<"Invalid input,shifting to the previous menu "<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu :"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }else{
                mainMenu();
            }
        }
        case 5:{
             cout<<"_Welcome to Australian Airlines_\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.As-839 "<<endl;
                cout<<"\t08-01-2024 4:00AM 10hrs. Rs.32000"<<endl;
                cout<<"2.As-657 "<<endl;
                cout<<"\t09-01-2024 5:00pm 8hrs. Rs.63000"<<endl;
                cout<<"3.AS-252 "<<endl;
                cout<<"\t10-01-2024 3:00pm 15hrs. Rs.42000"<<endl;
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                if(choice1==1){
                    charges=32000;
                    cout<<"\n You have succesfully booked the flight As-839"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                else if(choice1==2){
                    charges=63000;
                    cout<<"\n You have succesfully booked the flight As-657"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                 else if(choice1==3){
                    charges=42000;
                    cout<<"\n You have succesfully booked the flight AS-252"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }else{
                    cout<<"Invalid input,shifting to the previous menu "<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu :"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }else{
                mainMenu();
            }
        }
        case 6:{
            cout<<"_Welcome to European Airlines_\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.EU-333 "<<endl;
                cout<<"\t08-01-2024 7:00AM 8hrs. Rs.65000"<<endl;
                cout<<"2.EU-747 "<<endl;
                cout<<"\t09-01-2024 5:00pm 10hrs. Rs.53000"<<endl;
                cout<<"3.EU-380 "<<endl;
                cout<<"\t10-01-2024 8:00pm 5hrs. Rs.89000"<<endl;
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                if(choice1==1){
                    charges=65000;
                    cout<<"\n You have succesfully booked the flight EU-333"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                else if(choice1==2){
                    charges=53000;
                    cout<<"\n You have succesfully booked the flight EU-747"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }
                 else if(choice1==3){
                    charges=89000;
                    cout<<"\n You have succesfully booked the flight EU-380"<<endl;
                    cout<<"You can go back to menu and take the ticket "<<endl;
                }else{
                    cout<<"Invalid input,shifting to the previous menu "<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu :"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }else{
                mainMenu();
            }
        }
        default:{
            cout<<"Invalid input,shifiting you to the main menu! "<<endl;
            mainMenu();
            break;
            }
        }
    }
};


float registration::charges;
int registration::choice;
class ticket: public registration,Details{
    public:
    void Bill(){
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"_OPP Airlines"<<endl;
            outf<<"Ticket"<<endl;
            outf<<"_"<<endl;
            outf<<"Customer ID: "<<Details::cId<<endl;
            outf<<"Customer Name: "<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;
            if(registration::choice==1){
                destination="Dubai";
            }else if(registration::choice==2){
                destination="Canada";
            }else if(registration::choice==3){
                destination="UK";
            }else if(registration::choice==4){
                destination="USA";
            }else if(registration::choice==5){
                destination="Australia";
            }else if(registration::choice==6){
                destination="Europe";
            }
            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost :\t\t"<<registration::charges<<endl;
        }
        outf.close();
    }
    void dispBill(){
        ifstream ifs("records.txt");{
            if(!ifs){
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof()){
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};

void mainMenu(){
    int lchoice,schoice,back;
    cout<<"\t             OPP Airlines       \n"<<endl;
    cout<<"\t__Main Menu"<<endl;
    cout<<"\t_"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\t\t Press 1 to add the Customer Details   \t|"<<endl;
    cout<<"\t\t Press 2 for Flight Registration         \t|"<<endl;
    cout<<"\t\t Press 3 for Ticket and chargers         \t|"<<endl;
    cout<<"\t\t Pess 4 To exit                          \t|"<<endl;
    cout<<"\t_"<<endl;
    cout<<"Enter the choice : ";
    cin>>lchoice;
    Details d;
    registration r;
    ticket t;
    switch(lchoice){
        case 1:{
            cout<<"_Customers\n"<<endl;
            d.information();
            cout<<"press any key to go back mainMenu ";
            cin>>back;
            if(back==1){
                mainMenu();
            }else{
                mainMenu();
            }
            break;
        }
            case 2: {
                cout<<"_Book a flight using this system\n"<<endl;
                r.flights();
                break;
            }
            case 3:{
            cout<<"get your ticket\n"<<endl;
            t.Bill();
            cout<<"Your ticket is printed,you can collect is \n"<<endl;
            cout<<"Press 1 to display your ticket ";
            cin>>back;
            if(back==1){
                t.dispBill();
                cout<<"Press any key to go back to main menu: ";
                cin>>back;
                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
            }else{
                mainMenu();
            }
            break;
            }
            case 4:{
                cout<<"\n\n\t__Thank-you_"<<endl;
                break;
            }
            default:{
                cout<<"Invalid input,Please try again!\n"<<endl;
                mainMenu();
                break;
            }
    }
};



int main(){
    Management Mobj;
    return 0;
}