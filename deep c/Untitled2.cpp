//*****************************************************************************************
//                           HEADER FILES USED IN PROJECT
//*****************************************************************************************

	#include <iostream>
	#include <iomanip>
	#include <ctime>
	#include <fstream>
	#include <string>
	#include <cstdlib>
	#include<process.h>
	#include<dos.h>
	using namespace std;
	 
//***************************************************************************************
//                               CLASSES USED IN PROGRAM
//***************************************************************************************
	
	
//***************************************************************************************
//                             PARENT CLASS
//***************************************************************************************
	
	
	class Bank 
	{
	public:
	    double startBalance;
	    string COKAccountHolders;
	    double limit;
	
	  
	};
	 
	 
//************************************************************************************
//                          CHILD CLASS ( 1 ) 
//************************************************************************************
    
    
	class ATMAccountHolders:public Bank
	    {
	    string accountHolders;
	    string accountHoldersAddress, branch;
	    int accountNumber;
	    double startBalance;
	    double accountBalance;
	    double accountInterest;
	    double amount;
	    int count;
	 
	    public:
	    //void Display_accountBalance();
	    void deposit();
	    void withdraw();
        void details();
	    void payBills();
	    void accountExit();
	    void interest();
	     
	    ATMAccountHolders()  // Constructor
	    {
	    accountNumber = 5678;
	    accountHolders = "Junaid Ahmed";
	    accountHoldersAddress = "DHA Phase 6, Lahore";
	    startBalance = 60000.00;
	    accountBalance = 20000.00;
	    branch  = "Pakistan";
	    amount = 20000;                
	    }
	    };
//************************************************************************************************
//                      FUNCTIONS DEFINITIONS OUTSIDE THE CLASS
//************************************************************************************************   
	    void ATMAccountHolders::interest()
	     {
	    system("cls");    // to clear screen
	       
	        cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ATM ACCOUNT INTEREST PAYMENT\n\n";
	       cout<<"\tThe Interest is calculate over the last SIX months on the average account balance\n";
	       cout<<"\n\t\tInterest Rate payable is 10% per year."<<endl;
	       cout<<"\t\tView the accumulated interest "<<endl;
	        
	        
	         
	        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ATM ACCOUNT INTEREST PAYMENT ";
	         
	        cout<<"\n\n\tThe Name of the Account Holder is : "<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is : "<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is : "<<branch<<"\n\n";
	        cout<<"\tAccount number : "<<accountNumber<<"\n\n";
	        
	        cout<<"***************************************************************************************\n\n";
	        
	        cout<<"\tStarting account balance : $"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance : $"<<accountBalance<<"\n\n";
	        accountInterest=accountBalance+(accountBalance*1.050);
	        cout<<"\tPresent available balance + interest for 6 months : $"<<accountInterest<<"\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");
	        }
	//==================================================================================================     
	    
	 
	//==================================================================================================
	    void ATMAccountHolders::deposit()
	    {
	         system("cls");
	        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ATM ACCOUNT DEPOSIT SYSTEM ";
	         
	        cout<<"\n\n\tThe Name of the Account Holder is : "<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is : "<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is : "<<branch<<"\n\n";
	        cout<<"\tAccount number : "<<accountNumber<<"\n\n";
	        cout<<"\n\n";
	        cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";
	        cout<<"\tEnter the Amount to be Deposited $";
	             
	            double amount;
	            cin>>amount;
	        accountBalance=startBalance+amount ;
	        cout<<"\n\tYour new available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"\n\t\t\tTHANK YOU!\n\n"<<endl;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");
	    }
	//==================================================================================================
	    void ATMAccountHolders::withdraw()//Withdrawal Transactions
	    {
	         system("cls");
	        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ATM ACCOUNT WTHDRAWAL \n\n";
	         
	        cout<<"\n\nThe Name of the Account Holder is :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\n\n";
	        cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";
	        cout<<"\tEnter the Amount to be Withdrawn $";
	             
	            double amount;
	            cin>>amount;
//***********************************************************************************************
//                                  CONDITIONAL SATATEMENTS
//***********************************************************************************************
	     
	            if(amount>accountBalance||amount>9000)//Limit set at $9000 maximum after paying bills
	            {
	        system("cls");
	        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ATM ACCOUNT WITHDRAWAL \n\n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"*****************************************************************************************\n\n";
	        cout<<"\n\tInsufficient Available Balance in your account.\n\n"<<endl;
	        cout<<"\t\t\tSorry !!\n"<<endl;
	        system("PAUSE");
	            }
            else
	            {
	                double b;
	                accountBalance=startBalance-amount ;
	    system("cls");
	        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ATM ACCOUNT WTHDRAWAL \n\n";
	        cout<<"\n\nThe Name of the Account Holder is :"<<accountHolders<<"\n\n";
        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"****************************************************************************************\n\n";
	        cout<<"Your new available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");               
	           }
	     
	    }
	//==================================================================================================
	    void ATMAccountHolders::payBills()
	    {
	        system("cls");
	           
	 
	        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ATM BILLS PAYMENT SYSTEM \n";
	         
	        cout<<"\n\nThe Name of the Account Holder is :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        
	        cout<<"***********************************************************************************\n\n";
	        
	        cout<<"Pay Electric Company electricity bill of $2000.00 now?\n\n";
	        cout<<"\t\tPress 1 for Yes OR Press 0 for No\n\n";
	         
	        int r;
	         
	        cin>>r;
	        
//*****************************************************************************************************
//                               IF STATEMENTS
//*****************************************************************************************************

	        if(r=1)
	        {accountBalance=startBalance-2000;
	        system("cls");
	        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ATM BILLS PAYMENT SYSTEM \n";
	        cout<<"\n\tYour electricity bill of $2000.00 has been paid.\n\n";
	        cout<<"\tYour account new Available Balanced Amount is $"<<accountBalance<<endl ;
	        
	        cout<<"\n***************************************************************************************\n\n";
	        
	        cout<<"Press any key to Return to the Main Menu\n\n";
	       }
	       if(r=0)
	       {
	       cout<<"\n===========================ATM BILLS PAYMENT SYSTEM==========================\n\n";
	        cout<<"\n\n\tExiting Bill Payment System. Thank you!.\n\n";    
	        cout<<"====================++THANK YOU++============================\n\n";     
	       }
	        system("PAUSE");   
	    };
	     
	//==================================================================================================
	void ATMAccountHolders::details()
	    {
	        system("cls");
	           
	 
	        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tATM ACCOUNT DETAILS \n\n";
	        cout<<"\n\nThe Name of the Account Holder is :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"*******************************************************************************************\n\n";
	        cout<<"*******************************************************************************************\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");   
	    }
	 
	//==================================================================================================     
	 
     void ATMAccountHolders::accountExit()
	    {
	        system("cls");
	           
	 
	        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tATM ACCOUNT EXIT \n\n";
	        cout<<"\n\n\t\t        THANK YOU \n\n";
	        cout<<"\n\t\t FOR BANKING WITH US \n\n\n";
	        cout<<"*********************************************************************************************\n\n";
	        system("PAUSE");
	        exit(1);   
	    }
	     
	     
//=============================================================================================================     
	
//************************************************************************************************************
//                              CHILD CLASS ( 2 )
//************************************************************************************************************
	 
	class Limits:public Bank
	      {
	      public:
	             void SetLimit(double NewLimit)
	             {}
	       
	             double Getlimit()
	             {}
	       
	      };   
		  
		        
//*************************************************************************************************************
//                          MAIN FUNCTION OF PROGRAM  
//*************************************************************************************************************
	   
	   
	   
	    int main()
	    {
	    int e;
	    ATMAccountHolders p;    // Object of Child class ( 1 )
	     
	    system ("Color 1f");     // It shows DARK BLUE color window screen
	    cout<<"\n\n\n";
	    
	    cout<<"***************************************************************************************************";
	    cout<<"\n";
	    cout<<setw(42)<<" ==> WELCOME TO ATM \n"<<endl;
	    
	    cout<<"***************************************************************************************************";
        cout<<"\n\t\t\t--------------------"<<endl;
    
		
	        //Prompt to show today's date
	       cout << "\n\n\t\t\t Date : ";
	       cout<<__DATE__<<"\n";
	       cout << "\n\n\t\t\t Time : ";
	       cout<<__TIME__<<endl;
	       
	
	      //Give space for the function of date and time
	        cout<<"\t\t\t--------------------\n"<<endl;
	        cout<<"\n**************************************************************************************\n\n";
	//==================================================================================================     
	         
	      cout<<"\tPress 1 and Then Press Enter to Access Your Account Via Pin Number\n\n";
	      cout<<"\t\t\t\t\t or \n\n";
	      cout<<"\tPress 0 and press Enter to get Help.\n\n";
	         
	      int access;
	      cin>>access;
	      switch(access)
	      {
	      case 1://pin to access account
	      system("cls");
		  int i, pin;
	       
	      cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ATM ACCOUNT ACCESS \n\n";
	      cout<<"\n\nEnter Your Acc Pin Access Number! [Only one attempt is allowed]\n\n"<<endl;
	      cout<<"*****************************************************************************************\n\n";               
	      cin>>pin;
	       
	      system("cls");
	       
	      if(pin==1234)
	       
	      {
	      system("cls"); 
	       
	      do
	        {
	      system("cls");  
	cout<<"\n\n\n\n";
	
	
	cout<<"**********************************************************************************************\n";     
	cout <<setw(64)<< "==> ATM Main Menu Screen \n" << endl;
	cout << "\t\t\t\t|*    Enter [1] To  Deposit Cash            *|" << endl;
	cout << "\t\t\t\t|*    Enter [2] To Withdraw Cash            *|" << endl;
	cout << "\t\t\t\t|*    Enter [3] To Balance Inquiry          *|" << endl;
	cout << "\t\t\t\t|*    Enter [4] To Pay Bills                *|" << endl;
	cout << "\t\t\t\t|*    Enter [5] to Pay Account Interest     *|" << endl;
	cout << "\t\t\t\t|*    Enter [0] to Exit ATM                 *|" << endl;
	cout << "\n\t\t\t      PLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";
	cout<<"**********************************************************************************************\n\n";


//********************************************************************************************************
//                      SWITCH STATEMENTS
//********************************************************************************************************

	         
	        cin>>e;
	        switch(e)
	        {
	            case 1:
	                p.deposit();
	                break;
	            case 2:
	                p.withdraw();
	                break;
	            case 3:
	                p.details();
	                break;
	            case 4:
	                p.payBills();
	                break;
	            case 5:
	                p.interest();
	                break;
	            case 0:
	                p.accountExit();
	                break;
	        default:cout<<"Please Enter the Correct Number Choice"<<endl;
	        }
	    }while(e!=0);    
	 
	      break;                                    
	      }
	                
	      else             // if pin that we have entered is not 12345
	      {
	      system("cls");
	     cout<<"\n\n\n\n";
	cout<<"\tYou have entered wrong pin \n\n";
	cout<<"\tPlease enter the correct pin to access your accout \n\n";
	cout<<"\t\t\t\tTHANK YOU!!\n\n";
	cout<<"**********************************************************************************************\n\n";
	               
	      system("PAUSE");
	      exit (1);
	      }
	//======================================================================================================    
	       
	       
	    case 0://pin to get help
	    system("cls");
	    cout<<"\n\n\n\n";
	      cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ATM ACCOUNT STATUS \n\n";
	                    cout<<"\tYou must have the correct pin number to access this acount. See your\n\n";
	                    cout<<"\t  bank representative for assistance during bank opening hours\n\n";
	                    cout<<"\t\tThanks for, your choice today!!\n\n";
	      cout<<"***************************************************************************************\n\n";
	      system ("PAUSE");
	      exit(1);      
	      break;   
	//======================================================================================================        
	    }
	     
	system("PAUSE");
	return 0;
	 
	};

//***********************************************************************************************************
//                                END OF PROJECT
//***********************************************************************************************************
