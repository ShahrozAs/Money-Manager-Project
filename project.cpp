#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
struct money
{
	string name;
	double income, days, remaing;
	string category, date, desciption, type;
	char choise;
}e;

int main()
{
	money e;

	char ch;
	system("COLOR 02");
	do{
		cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl;
		cout << "\t\t\t\t\t01. CREATING PROFILE : " << endl;
		cout << "\t\t\t\t\t02. ENTER EXPENSES : " << endl;
		cout << "\t\t\t\t\t03. CHECKING BALANCE : " << endl;
		cout << "\t\t\t\t\t04. EXIT : " << endl;
		cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl;
		cout << "\n\t\t\t\t\tSelect Your Option (1-4) ";

		cin >> ch;
		if (ch == '1')
		{
			system("cls");
			ofstream iout("sample1.txt");
			cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl;
			cout << " \t\t\t\t\t     Creating your Profile: " << endl;
			cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl << endl;
		
			cin.ignore();
			cout << "\t\tPlease enter your name: ";
			getline(cin, e.name);
			iout << "\t\tUser name " + e.name<<endl;
		
			cout << "\t\tPlease Add your monthly income: ";
			cin >> e.income;
			iout << "\t\tBalance of " << e.name<<" is " << e.income<<" Rs \n";
			cout << "\t\tPlease enter your Income Category: ( Salary or loan ) :";
			cin >> e.category;
			iout << "\t\tIncome Category: " << e.category<<endl;
			cout << "\t\tPlease enter Date when you recive " << e.category << " :";
			cin >> e.date;
			iout <<"\t\t"<< e.category << " Recive date: " << e.date<<endl;
		      iout.close();
			cout << "\t\tPlease Add Description if you Want (Y/N): ";
			cin >> e.choise;
			if (e.choise == 'Y' || e.choise == 'y')
			{
				cout << "\t\tWrite a Description: ";
				cin >> e.desciption;
			}
			else if (e.choise == 'N' || e.choise == 'n')
			{
			}
			cout << "\t\tPlease enter Payment type: ( Bank or cash) :";
			cin >> e.type;
		
			system("cls");
			cout << endl << endl;
			cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl;
			cout << " \t\t\t\t   You have Successfully created your Profile: " << endl;
			cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl;
			cout << endl << "\t\t\t\t" << "  Welcome: " << e.name << endl << endl;

			
		}

			else if (ch == '2')
			{
				system("cls");
				cout << endl;
				

				cout << "\t\t\t\tPlease Enter number of days you want to save data: ";
				cin >> e.days;
				cout << endl;

				e.remaing = e.income;
				for (int i = 0; i < e.days; i++)
				{
					double food, medicine, drink, education, fuel, hotel, movies, pets, tips, other;
					
					cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl;
					cout << "\t\t\t\t\tNumber of Day : " << i + 1 << endl;
					cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl << endl << endl;
					cout << "\t\t\t\tPlease enter your Daily Expenses: " << endl << endl;
					cout << "\t\t\t\tFood : ";
					cin >> food;
					e.remaing -= food;


					cout << "\t\t\t\t\t\t\tMedicine : ";
					cin >> medicine;
					e.remaing -= medicine;

					cout << "\t\t\t\tDrinks : ";
					cin >> drink;
					e.remaing -= drink;

					cout << "\t\t\t\t\t\t\tEducation : ";
					cin >> education;
					e.remaing -= education;

					cout << "\t\t\t\tFuel : ";
					cin >> fuel;
					e.remaing -= fuel;

					cout << "\t\t\t\t\t\t\tHostel : ";
					cin >> hotel;
					e.remaing -= hotel;

					cout << "\t\t\t\tMovies : ";
					cin >> movies;
					e.remaing -= movies;

					cout << "\t\t\t\t\t\t\tPets : ";
					cin >> pets;
					e.remaing -= pets;

					cout << "\t\t\t\tTips: ";
					cin >> tips;
					e.remaing -= tips;

					cout << "\t\t\t\t\t\t\tOTHER : ";
					cin >> other;
					e.remaing -= other;

			
					cout << endl << endl;
					cout << "\t\t\t\t\tUSAGE OF: " << i + 1 << " Day is = " << food + medicine + drink + education + fuel + hotel + movies + pets + tips + other << endl;
					cout << endl << "\t\t\t\t\tREMANING BALANCE OF :" << i + 1 << " Day is = " << e.remaing << endl << endl;
					
				}
				ofstream hout("sample2.txt");
				cout << endl;
				cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl;
		
				cout << "\t\t\t\t\tRemaining Balance :" << e.remaing << endl;
				cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl;
			
				hout << "\t\t"<<e.name << " Your Remaining Balance is : " << e.remaing << " Rs\n\n\n";
				hout.close();

			}
			else if (ch == '3'){
				system("cls");
				cout << endl << endl;

			
				ifstream iin,hin;
				string output,output_balance;

				iin.open("sample1.txt");
				hin.open("sample2.txt");
				
				while (iin.eof() == 0)
				{
				
					getline(iin, output);
				
					cout << output << endl;
				
				}
			

				getline (hin, output_balance);
				cout << output_balance;
		
			
			}
				else if (ch == '4')
			{   system("cls");
				cout << endl << endl;
				cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl;
				cout << "\t\t\t\t\t\tThanks for coming:" << endl;
				cout << "\t\t\t\t" << setw(50) << setfill('*') << "*" << endl;
				break;
		     
			
		}

		cin.ignore();
		cin.get();
	} while (ch != '4');


	
	

	
	system("pause");
}