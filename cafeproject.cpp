#include<iostream>
#include<conio.h>
#include<iomanip>     // for setw() and setfill() functions
#include<windows.h>  // for sleep() function
#include<fstream>   // Library for file handling

using namespace std;

class Login{
private:
    string User_Name;
    string Password;
public:

        void Set_User_Name() {
        do{
            cout << "\n\n\n\n\n\t\t\t\tUSER NAME : ";
            cin >> User_Name;
                if (User_Name == "ikramnabi59") {
                	break;
                }
                else{
                	cout<<" \t \t INVALID USERNAME! TRY AGAIN "<<endl;
				}
                system("pause>0");
            system("CLS");
        }while(1<2);
        }
    void Get_User_Name(){
    cout<<"\t\t\t\t USER NAME : "<<User_Name<<endl;
    } void Set_Password() {
do{
     char word;
     Password = "";
     cout << "\n\t\t\t\t PASSWORD SHOULD BE OF 7 LETTERS " << endl;
     cout<<"\t\t\t\tPASSWORD : ";
     for (int i = 1; i <= 7; i++) {
         word = getch();
         cout << "*";
         Password += word;
     }
    if (Password == "22sw059") {
    	break;
    }
    else{
    	cout<<" INVALID PASSWORD! TRY AGAIN "<<endl;
	}
    system("pause>0");
    system("CLS");
}while(1<2);

 }
    void Get_Password(){
        cout << "\n\t\t watch password y/n ";
        char input;
        input = getch();
        if (input == 'y' || input == 'Y') {
            cout<<"\n\t\t PASSWORD = "<<Password<<endl;
        }      
    }

};


// Class for menu items
class Menu{
	public:
		
		// Arrays to store menu items and their prices
	string Fast_Foods[5]={"BURGERS" , "ROLLS" , "FRIES" , "BEVERAGES" , "ROASTEDCHICKEN" };
	string Burgers[4]={"ZINGER BURGER" , "CHICKEN BURGER" , "SPECIAL ZINGER BURGER" , "CHEESE CHICKEN BURGER" };
    int Burgers_Price[4]={300 , 200 , 400 , 350};
	string Rolls[4]={"MAYO ROLL" , "CHICKEN ROLL" , "CHATNI ROLL" , "ZINGERROLL" };
	int Rolls_Price[4]={180 , 150 , 140 , 220};
	string Fries[4]={"MAYO FRIES" , "MASALA FRIES" , "SPECIAL FRIES" , "PIZZA FRIES"};
	int Fries_Price[4]={ 170 , 120 , 160 , 320};
	string Beverages[4]={"SOFTDRINK" , "CHAI" , "COFEE" , "MINERALWATER"};
	int Beverages_Price[4]={60 , 70 , 100 , 80};
	string Roasted_Chicken[4]={"CHICKEN BROAST" , "CHICKEN WINGS" , "6 PCS CHICKEN NUGGETS" , "CHICKEN PIECE"};
	int Chicken_Price[4]={370 , 220 , 250 , 190};
		// WHOLE  MENU  ITEM IN A ARRAY  TO PLACE ORDER EASILY
	long Menu_Item[20]={300 , 200 , 400 , 350 , 180 , 150 , 140 , 220 , 170 , 120 , 160 , 320 , 60 , 70 , 100 , 80 , 370 , 220 , 250 , 190};
	

	public:
		// function to display burgers menu
	    void Display_Burgers(){
	    	cout<<"\n \n *************************"<<Fast_Foods[0]<<"****************************"<<endl;
	    	cout<<endl;
		
	   for(int i=0;i<4;i++){
           // Loop through array and display each menu item
	   	cout<<i+1<<". "<<Burgers[i]<<setw(15)<<setfill('-')<<"PRICE: "<<Burgers_Price[i]<<endl;
	        }
	   }
	   // function to display rolls menu
	    void Display_Rolls(){
	    	cout<<endl;
	    		cout<<"*************************"<<Fast_Foods[1]<<"****************************"<<endl;
	    	cout<<endl;
	    	for(int i=0;i<4;i++){
                // Loop through array and display each menu item
	     cout<<i+5<<". "<<Rolls[i]<<setw(15)<<setfill('-')<<"PRICE: "<<Rolls_Price[i]<<endl;
	}
}
	// function to display fries menu
	    void Display_Fries(){
	    		cout<<endl;
	    		cout<<"*************************"<<Fast_Foods[2]<<"****************************"<<endl;
	    	cout<<endl;
	   for(int i=0;i<4;i++){
           // Loop through array and display each menu item
	   	cout<<i+9<<". "<<setw(7)<<Fries[i]<<setw(15)<<setfill('-')<<"PRICE: "<<Fries_Price[i]<<endl;
	        }
	   }
// function to display beverages menu
	    void Display_Beverages(){
	    		cout<<endl;
	    		cout<<"*************************"<<Fast_Foods[3]<<"****************************"<<endl;
	    	cout<<endl;
	    	for(int i=0;i<4;i++){
                // Loop through array and display each menu item
	   	cout<<i+13<<". "<<Beverages[i]<<setw(17)<<setfill('-')<<"PRICE: "<<Beverages_Price[i]<<endl;
	   }
}
    // function to display roasteed chicken menu
	    void Display_Roasted_Chicken(){
	    		cout<<endl;
	    		cout<<"*************************"<<Fast_Foods[4]<<"****************************"<<endl;
	    	cout<<endl;
	    	for(int i=0;i<4;i++){
                // Loop through array and display each menu item
	   	cout<<i+17<<". "<<Roasted_Chicken[i]<<setw(17)<<setfill('-')<<"PRICE: "<<Chicken_Price[i]<<endl;
	   }
	}
	   
};     // class ends

// Define the Order class, which inherits from the Menu class
class Order:public Menu{

public:
    // Declare member variables for the order, quantity and item name
		int Order;
	int Quantity;
    string Item_Name="0";

public:
    // Define a function to set the order based on user input
		void Set_Order(int Give_Order){
			Order=Give_Order;
        // Use a switch statement to set the item name based on the order number
			switch(Order){
				case 1:
				Item_Name=Burgers[0];
				break;
				case 2:
				Item_Name=Burgers[1];
				break;
				case 3:
				Item_Name=Burgers[2];
				break;
				case 4:
				Item_Name=Burgers[3];
				break;
				case 5:
				Item_Name=Rolls[0];
				break;
				case 6:
				Item_Name=Rolls[1];
				break;
				case 7:
				Item_Name=Rolls[2];
				break;
				case 8:
				Item_Name=Rolls[3];
				break;
				case 9:
				Item_Name=Fries[0];
				break;
				case 10:
				Item_Name=Fries[1];
				break;
				case 11:
				Item_Name=Fries[2];
				break;
				case 12:
				Item_Name=Fries[3];
				break;
				case 13:
				Item_Name=Beverages[0];
				break;
				case 14:
				Item_Name=Beverages[1];
				break;
				case 15:
				Item_Name=Beverages[2];
				break;
				case 16:
				Item_Name=Beverages[3];
				break;
				case 17:
				Item_Name=Roasted_Chicken[0];
				break;
				case 18:
				Item_Name=Roasted_Chicken[1];
				break;
				case 19:
				Item_Name=Roasted_Chicken[2];
				break;
				case 20:
				Item_Name=Roasted_Chicken[3];
				break;
				default:
                    // Display an apologize message if the order is not valid
				cout<<" \t \t \t SORRY SIR! THIS IS NOT AVILABLE. TRY FOR ANOTHER !"<<endl;
					break;
				}
		}

    // Define a function to display the order to the user
		void Get_Order(){
			cout<<" \t \t \t YOUR ORDER IS : "<<Item_Name<<endl;
		}
    // Define a function to set the quantity based on user input
		void Set_Quantity(int Give_Quantity){
			cout<<" \t \t\t ENTER QUANTITY OF YOUR FOOD : ";
			Quantity=Give_Quantity;
		}
    // Define a function to display the quantity to the user
		void Get_Quantity(int Get_Quantity){
			cout<<" \t \t \t QUANTITY : "<<Get_Quantity<<endl;
		}		
};   // inherit class order ends

// The Billing class inherits from the Order class, which in turn inherits from the Menu class.
class Billing:public Order{

	private:
    // The Price variable will store the price of the selected menu item.
	int Price=0;

	public:
    // The Set_Price method takes in the user's menu item selection and assigns the corresponding price.
		void Set_Price(int Give_Price ){
			Price=Give_Price-1;
			if(Price>=0 || Price<=3)
			{
			Price=Menu_Item[Price];
		          }
			else if(Price>=4 || Price<=7)  // if the menu item is a burger,
			{
			Price=Menu_Item[Price];       // set the price to the corresponding value in the Menu_Item array.
		            }
		 else if(Price>=8 || Price<=11)    // if the menu item is a roll,
		 {
			Price=Menu_Item[Price];
			}
			else if(Price>=12 || Price<=15)     // if the menu item is fries,
			{
			Price=Menu_Item[Price];
		}
		 else if(Price>=16 || Price<=19)   // if the menu item is roasted chicken,
		 {
			Price=Menu_Item[Price];
		}
}
// The Get_Price method displays the price of the selected menu item.
		void Get_Price(){
			cout<<" \t \t \t PRICE IS :"<<Price<<endl;
		}
// The Total_Price method takes in the quantity of the selected menu item and calculates the total bill.
		void Total_Price(int Get_Quantity  ){
			Quantity=Get_Quantity;     // The quantity of the menu item is assigned to the Quantity variable.
			cout<<" \t \t \t  YOUR TOTAL BILL IS : "<<Price*Quantity<<endl;
		}

};   // inherit class Billing ends


int main() {
 int Press;
    system("color  5f");  // set console color
    cout<<" \n\n  \t\t\t\t\t\t\t ******* CAFE ORDERING SYSTEM ******** "<<endl;
    const char symbol = '_';

    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t LOADING..."<< endl;
    for (int i = 0; i <= 100; ++i) {
        cout <<symbol;
        Sleep(1);
        }
        system("cls");        // clear the screen
    system("color 1f");
    Login Admin_Login;    cout<<"\n\n\n\n\n\n \t \t *********** PLEASE LOGIN YOUR SYSTEM *********"<<endl;
    cout<<" \t \t _____________________________________________________________\n\n\n"<<endl;
    Admin_Login.Set_User_Name();
    Admin_Login.Set_Password();
       system("CLS");
       system("color  1f");
    Admin_Login.Get_User_Name();
    Admin_Login.Get_Password();
   cout<<"\n \t \t \t______________  LOGIN SUCCESSFULLY ! \n\n "<<endl;
   Sleep(1000);
    system("CLS");
      do {
system("color 1f");
        Menu Cafe_Menu;
         cout<< "\t\t\t *********  WELCOME TO HABIBI CAFE    ***** \t\t\t PRESS 4 TO BACK  "<<endl;
          for (int i=1;i<100;i++) {
              cout<<"_";
              Sleep(1); // wait for a short time
          }
        cout << endl;
        cout<<endl;
        cout << "\n\t\t\t ********* WHAT WOULD YOU LIKE TO EAT! *********** " << endl;
         
        cout << endl;
        Sleep(10);
        cout << endl;
        cout << " \n\n\t\t\t ********** WE DEAL WITH GOOD QUALITY FAST_FOODS *********** \n";
        cout << endl;
        system("color 0e");
        Sleep(1000);
        Cafe_Menu.Display_Burgers();
        Sleep(1000);
		Cafe_Menu.Display_Rolls();
		system("color 0e");
		Sleep(1000);
        Cafe_Menu.Display_Fries();
        system("color 0e");
        Sleep(1000);
        Cafe_Menu.Display_Beverages();
        Sleep(1000);
        Cafe_Menu.Display_Roasted_Chicken();
        system("color 0e");
        Sleep(1000);
        cout << endl;
          for (int i=1;i<100;i++) {
              cout<<"_";
              Sleep(1); // wait for a short time
          }
        cout << "\n\n\n\t ****************** PRESS ENTER TO ORDER *******************" << endl;
        char ch;
        int Input_Order;
        int Input_Quantity;
        string Word;
        ch = getch();
        Order Users_Order;
        Billing User_Bill;
        if (ch == '\r') {      // if user presses enter key
            do {
                cout << endl;
                cout << "\n\n\t  *************************** ORDER PLEASE! ***************************" << endl;
                for (int i=1;i<100;i++) {
                    cout<<"_";
                    Sleep(1); // wait for a short time
                }
                cout << endl;
                cout<<"\n\n\n";
                cout << " \t \t \t PLACE YOUR ORDER BY PRESSING THE CORRESPONDING KEY : ";
                cin >> Input_Order;
                if (Input_Order == 21 || Input_Order > 21){          // if user inputs an invalid order number

                    cout<<" WRONG INPUT! TRY AGAIN "<<endl;
                 goto  First;
             }
             
                Users_Order.Set_Order(Input_Order);
                Users_Order.Set_Quantity(Input_Quantity);
                cin >> Input_Quantity;
                User_Bill.Set_Price(Input_Quantity);
                cout << endl;
                system("CLS");
                cout<<endl;
                system("color 1f");
                cout << "\n\n\n\t\t\t ********* THANK YOU SIR! *********" << endl;
                for (int i=1;i<100;i++) {
                    cout<<"_";
                    Sleep(1); // wait for a short time
                }
                cout << endl;
                cout<<endl;
                cout<<endl;
                Users_Order.Get_Order();
                Users_Order.Get_Quantity(Input_Quantity);
                User_Bill.Get_Price();
                User_Bill.Total_Price(Input_Quantity);
                cout << endl;
                cout << "\n\t\t\t DO YOU WANT TO GIVE ANOTHER ORDER ! (Yes/No)" << endl;
                cin >> Word;
                 if (Word == "No" || Word == "no" || Word == "NO") {
                    break;
                }
            } while (Word == "yes" || Word == "Yes" || Word == "YES");
            system("CLS");
            system("color 1f");
           }
            else {
            cout << " ***** WRONG INPUT!*****" << endl;
            cout << endl;
        }

        First:
        cout << " \t \t \t \t\t\t PRESS 4 TO BACK OR 5 TO EXIT " << endl;
        system("pause>0");
        cin >> Press;
        if(Press==5){
        	system("CLS");
        	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t PROGRAM ENDING..... "<<endl;
            for (int i=1;i<100;i++) {
                cout<<"_";
                Sleep(1); // wait for a short time
            }
            exit(0);
            system("CLS");
        }
    } while (Press == 4);

    return 0;
}
