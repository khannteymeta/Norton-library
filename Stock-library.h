#ifndef _STOCK_H
#define _STOCK_H
#include "antheaderPlusPlus.h"
#include "antheaderInput.h"
#include<fstream>
#include <filesystem>
using namespace std;
//-------------
//class welcome
//-------------

		
void _welcome(){
		string  Username;
		string password;
		//password
		gotoxy(60,1);foreColor(3);cout<<"\3";
		gotoxy(17,6);foreColor(4);cout<<"\3";
		gotoxy(60,1);foreColor(4);cout<<"\3";
		gotoxy(13,10);foreColor(3);cout<<"\3";
		gotoxy(106,7);foreColor(9);cout<<"\3";
		gotoxy(26,20);foreColor(9);cout<<"\3";
		gotoxy(98,14);foreColor(6);cout<<"\3";
		gotoxy(100,24);foreColor(9);cout<<"\3";
		gotoxy(40,4); foreColor(3); cout<<"                                              .-') _  ";
		gotoxy(40,4); foreColor(4); cout<<"                                            ( OO ) )   ";
		gotoxy(40,5); foreColor(4); cout<<",--.      .-'),-----.   ,----.     ,-.-') ,--./ ,--==,'  ";
		gotoxy(40,6); foreColor(5); cout<<"|  |.-') ( OO'  .-.  ' '  .-.//-')  |  |OO)|   \\ |  |\\  ";
		gotoxy(40,7); foreColor(5); cout<<"|  | OO )//   |  | |  | |  |_( O- ) |  |  \\|    \\|  | )  ";
		gotoxy(40,8); foreColor(6); cout<<"|  |`-' |\\_) |  |\\|  | |  | .--, \\ |  |(_//|  .     |//  ";
		gotoxy(40,9); foreColor(6); cout<<"(|  '---.'  \\ |  | |  |(|  | '. (_//,|  |_.'|  |\\    |   ";
		gotoxy(40,10);foreColor(7); cout<<"|      |    `'  '-'  ' |  '--'  |(_|  |   |  | \\   |    ";
		gotoxy(40,11);foreColor(8); cout<<"`------'      `-----'   `------'   `--'   `--'  `--'   ";
			a:
			gotoxy(80,18);foreColor(3);cout<<" Password : ";
			DrawRectangle(79,17,30,1,3);
			DrawRectangle(39,17,30,1,3);
			gotoxy(40,18);foreColor(3);cout<<" Name : ";getline(cin,Username);fflush(stdin);cin.clear();
			if(Username!= "meta"){
				DrawRectangle(39,17,30,1,4);
				gotoxy(40,18);foreColor(4);cout<<"wrong Username               "<<endl;
				Sleep(1000);
				system("cls");
				
					gotoxy(60,1);foreColor(3);cout<<"\3";
					gotoxy(17,6);foreColor(4);cout<<"\3";
					gotoxy(60,1);foreColor(4);cout<<"\3";
					gotoxy(13,10);foreColor(3);cout<<"\3";
					gotoxy(106,7);foreColor(9);cout<<"\3";
					gotoxy(26,20);foreColor(9);cout<<"\3";
					gotoxy(98,14);foreColor(6);cout<<"\3";
					gotoxy(100,24);foreColor(9);cout<<"\3";
				
					gotoxy(40,4); foreColor(3); cout<<"                                              .-') _  ";
					gotoxy(40,4); foreColor(4); cout<<"                                            ( OO ) )   ";
					gotoxy(40,5); foreColor(4); cout<<",--.      .-'),-----.   ,----.     ,-.-') ,--./ ,--,'  ";
					gotoxy(40,6); foreColor(5); cout<<"|  |.-') ( OO'  .-.  ' '  .-.//-')  |  |OO)|   \\ |  |\\  ";
					gotoxy(40,7); foreColor(5); cout<<"|  | OO )//   |  | |  | |  |_( O- ) |  |  \\|    \\|  | )  ";
					gotoxy(40,8); foreColor(6); cout<<"|  |`-' |\\_) |  |\\|  | |  | .--, \\ |  |(_//|  .     |//  ";
					gotoxy(40,9); foreColor(6); cout<<"(|  '---.'  \\ |  | |  |(|  | '. (_//,|  |_.'|  |\\    |   ";
					gotoxy(40,10);foreColor(7); cout<<"|      |    `'  '-'  ' |  '--'  |(_|  |   |  | \\   |    ";
					gotoxy(40,11);foreColor(8); cout<<"`------'      `-----'   `------'   `--'   `--'  `--'   ";
				
				goto a;	
			}
			b:
			DrawRectangle(79,17,30,1,3);
			DrawRectangle(39,17,30,1,3);
			gotoxy(40,18);foreColor(3);cout<<" Name : meta";
			gotoxy(80,18);foreColor(3);cout<<" Password : ";hidePassword(password);

			if(password != "1111"){
				DrawRectangle(79,17,30,1,4);
			 	gotoxy(80,18);foreColor(4);cout<<"wrong password               ";
				Sleep(1000);
				system("cls");
					
					gotoxy(60,1);foreColor(3);cout<<"\3";
					gotoxy(17,6);foreColor(4);cout<<"\3";
					gotoxy(60,1);foreColor(4);cout<<"\3";
					gotoxy(13,10);foreColor(3);cout<<"\3";
					gotoxy(106,7);foreColor(9);cout<<"\3";
					gotoxy(26,20);foreColor(9);cout<<"\3";
					gotoxy(98,14);foreColor(6);cout<<"\3";
					gotoxy(100,24);foreColor(9);cout<<"\3";
				
					gotoxy(40,4); foreColor(3); cout<<"                                              .-') _  ";
					gotoxy(40,4); foreColor(4); cout<<"                                            ( OO ) )   ";
					gotoxy(40,5); foreColor(4); cout<<",--.      .-'),-----.   ,----.     ,-.-') ,--./ ,--,'  ";
					gotoxy(40,6); foreColor(5); cout<<"|  |.-') ( OO'  .-.  ' '  .-.//-')  |  |OO)|   \\ |  |\\  ";
					gotoxy(40,7); foreColor(5); cout<<"|  | OO )//   |  | |  | |  |_( O- ) |  |  \\|    \\|  | )  ";
					gotoxy(40,8); foreColor(6); cout<<"|  |`-' |\\_) |  |\\|  | |  | .--, \\ |  |(_//|  .     |//  ";
					gotoxy(40,9); foreColor(6); cout<<"(|  '---.'  \\ |  | |  |(|  | '. (_//,|  |_.'|  |\\    |   ";
					gotoxy(40,10);foreColor(7); cout<<"|      |    `'  '-'  ' |  '--'  |(_|  |   |  | \\   |    ";
					gotoxy(40,11);foreColor(8); cout<<"`------'      `-----'   `------'   `--'   `--'  `--'   ";
				
				goto b;
			}
			system("cls");
			//welcome
			gotoxy(57,1);foreColor(4);cout<<"\3";
			gotoxy(85,3);foreColor(4);cout<<"\3";
			gotoxy(22,5);foreColor(4);cout<<"     .->    (`-')  _                             <-. (`-')   (`-')  _    ";
			Sleep(100);
			gotoxy(22,6);foreColor(4);cout<<" (`(`-')/`) ( OO).-/  <-.    _             .->      \\(OO )_  ( OO).-/  ";
			Sleep(100);
			gotoxy(22,7);foreColor(4);cout<<",-`( OO).',(,------.,--. )   \\-,-----.(`-')----. ,--./  ,-.)(,------.   ";
			Sleep(100);
			gotoxy(22,8);foreColor(5);cout<<"|  |\\  |  | |  .---'|  (`-')  |  .--./( OO).-.  '|   `.'   | |  .---'   ";
			Sleep(100);
			gotoxy(22,9);foreColor(5);cout<<"|  | '.|  |(|  '--. |  |OO ) /_) (`-')( _) | |  ||  |'.'|  |(|  '--.   ";
			Sleep(100);
			gotoxy(22,10);foreColor(6);cout<<"|  |.'.|  | |  .--'(|  '__ | ||  |OO ) \\|  |)|  ||  |   |  | |  .--'   ";
			Sleep(100);
			gotoxy(22,11);foreColor(6);cout<<"|   ,'.   | |  `---.|     |'(_'  '--'\\  '  '-'  '|  |   |  | |  `---.  ";
			Sleep(100);
			gotoxy(22,12);foreColor(7);cout<<"`--'   '--' `------'`-----'    `-----'   `-----' `--'   `--' `------'  ";

			gotoxy(60,1);foreColor(3);cout<<"\3";
			gotoxy(17,6);foreColor(4);cout<<"\3";
			gotoxy(60,1);foreColor(4);cout<<"\3";
			gotoxy(13,10);foreColor(3);cout<<"\3";
			gotoxy(106,7);foreColor(9);cout<<"\3";
			gotoxy(26,20);foreColor(9);cout<<"\3";
			gotoxy(98,14);foreColor(6);cout<<"\3";
			gotoxy(100,24);foreColor(9);cout<<"\3";
			


			gotoxy(17,14);foreColor(3);cout<<"						         	      to Norton Library "; 
			gotoxy(40,20);foreColor(4);cout<<"\3"; 
			gotoxy(64,24);foreColor(3);cout<<"\3"; 
			DrawRectangle(21,15,82,1,3);
			foreColor(3);
			for(int j=0;j<20;j++){
				gotoxy(22+j,16);cout<<char(219);
				gotoxy(99,18);cout<<j+10<<"%";
				Sleep(30);
			}
			for(int j=0;j<20;j++){
				gotoxy(42+j,16);cout<<char(219);
				gotoxy(99,18);cout<<j+21<<"%";
				Sleep(70);
			}
			for(int j=0;j<10;j++){
				gotoxy(62+j,16);cout<<char(219);
				gotoxy(99,18);cout<<j+41<<"%";
				Sleep(60);
			}
			for(int j=0;j<20;j++){
				gotoxy(72+j,16);cout<<char(219);
				gotoxy(99,18);cout<<j+61<<"%";
				Sleep(10);
			}
			for(int j=0;j<20;j++){
				gotoxy(82+j,16);cout<<char(219);
				gotoxy(99,18);cout<<j+81<<"%";
				Sleep(20);
			}                                                           
}

//----------------------------
//-----class of product book
//---------------------------
class Stock{
	public:
		string namePro;
		double price;
		int qty;
		int code;
		double total(){
			return price*qty;
		}
		double isFileExist( const char* filename){
			ifstream infile(filename);
			return infile.good();
		}
	public:
		void _registerPro(){
			foreColor(3);gotoxy(75,5);cout<<"Infomation of Product";
			foreColor(3);gotoxy(65,7);cout<<"NAME  : ";
			foreColor(3);gotoxy(65,9);cout<<"CODE  : ";
			foreColor(3);gotoxy(65,11);cout<<"PRICE : ";
			foreColor(3);gotoxy(65,13);cout<<"QTY   : ";
			
			gotoxy(75,7);getline(cin,namePro);fflush(stdin);cin.clear();
			gotoxy(75,9);cin>>code;fflush(stdin);cin.clear();
			gotoxy(75,11);cin>>price;fflush(stdin);cin.clear();
			gotoxy(75,13);cin>>qty;fflush(stdin);cin.clear();
			
		}
		void _importQTY(){
			int tempQty;
			cout<<"\n\t--------ImportQty----------";
			cout<<"\n\t Import Quantity :";cin>>tempQty;fflush(stdin);cin.clear();
			qty += tempQty;
		}
		void ruler(){
			for(int i=0;i<60;i++){
				gotoxy(35+i,5);foreColor(3);cout<<char(196);
			}
		}
		static void _header(){
			for(int i=0;i<60;i++){
				gotoxy(35+i,5);foreColor(3);cout<<char(196);
			}
			cout<<left;
		
			gotoxy(35,4);
			foreColor(7);cout<<setw(20)<<"NAME";
			foreColor(7);cout<<setw(20)<<"CODE";
			foreColor(7);cout<<setw(15)<<"PRICE($)";
			foreColor(7);cout<<setw(15)<<"QTY";
			
			
		}
	
		void _display(){				
			cout<<left<<fixed<<setprecision(2);
			cout<<setw(20)<<namePro;
			cout<<setw(20)<<code<<"$";
			cout<<setw(15)<<price;
			cout<<setw(15)<<qty<<endl;
		}
	
		void _displayInvoice(){				
			cout<<left<<fixed<<setprecision(2);
			gotoxy(23,8);
			cout<<setw(20)<<namePro;
			cout<<setw(10)<<"";
			cout<<setw(15)<<"1"<<"$";
			cout<<setw(15)<<price<<"$";
			cout<<setw(14)<<price;
		}
		void search_edit(){

			gotoxy(12,3); foreColor(4); cout<<".--,  .--,     ";
			gotoxy(12,4); foreColor(4); cout<<"|\\  \\ |\\  \\    ";
			gotoxy(12,5); foreColor(4); cout<<"` \\  `` \\  `   ";
			gotoxy(12,6); foreColor(5); cout<<" \\ \\  \\ \\  \\  ";
			gotoxy(12,7); foreColor(5); cout<<"  , \\  \\, \\  \\ ";
			gotoxy(12,8); foreColor(5); cout<<"  / /` // /` / ";
			gotoxy(12,9); foreColor(6); cout<<" ` /  /` /  /  ";
			gotoxy(12,10); foreColor(6); cout<<"| .  /| .  /   ";
			gotoxy(12,11); foreColor(6); cout<<"./__/ ./__/    ";
               
               
			gotoxy(12,15); foreColor(4); cout<<".--,  .--,      ";
			gotoxy(12,16); foreColor(4); cout<<"|\\  \\ |\\  \\     ";
			gotoxy(12,17); foreColor(4); cout<<"` \\  `` \\  `   "; 
			gotoxy(12,18); foreColor(5); cout<<" \\ \\  \\ \\  \\    ";
			gotoxy(12,19); foreColor(5); cout<<"  , \\  \\, \\  \\  ";
			gotoxy(12,20); foreColor(5); cout<<"  / /` // /` /   ";	
			gotoxy(12,21); foreColor(6); cout<<" ` /  /` /  /  ";
			gotoxy(12,22); foreColor(6); cout<<"| .  /| .  /   ";
			gotoxy(12,23); foreColor(6); cout<<"./__/ ./__/    ";
			
			//----------------------------------------------------------------
   
			gotoxy(104,3); foreColor(4); cout<<"    ,--.  ,--. ";
			gotoxy(104,4); foreColor(4); cout<<"   /  /| /  /|  ";
			gotoxy(104,5); foreColor(4); cout<<"  '  / ''  / '  ";
			gotoxy(104,6); foreColor(5); cout<<" /  / //  / /   ";
			gotoxy(104,7); foreColor(5); cout<<"/  / ,/  / ,    ";
			gotoxy(104,8); foreColor(5); cout<<"\\ '\\ \\ '\\ \\    ";
			gotoxy(104,9); foreColor(6); cout<<" \\  \\ '\\  \\ '   ";
			gotoxy(104,10); foreColor(6); cout<<"  \\  . |\\  . |  ";
			gotoxy(104,11); foreColor(6); cout<<"   \\__\\. \\__\\.  ";
			
			
			gotoxy(104,15); foreColor(4); cout<<"    ,--.  ,--. ";
			gotoxy(104,16); foreColor(4); cout<<"   /  /| /  /|  ";
			gotoxy(104,17); foreColor(4); cout<<"  '  / ''  / '  ";
			gotoxy(104,18); foreColor(5); cout<<" /  / //  / /   ";
			gotoxy(104,19); foreColor(5); cout<<"/  / ,/  / ,    ";
			gotoxy(104,20); foreColor(5); cout<<"\\ '\\ \\ '\\ \\    ";
			gotoxy(104,21); foreColor(6); cout<<" \\  \\ '\\  \\ '   ";
			gotoxy(104,22); foreColor(6); cout<<"  \\  . |\\  . |  ";
			gotoxy(104,23); foreColor(6); cout<<"   \\__\\. \\__\\.  ";

		}
		void _updatePro(){
			gotoxy(60,1);foreColor(3);cout<<"\3";
			gotoxy(17,6);foreColor(4);cout<<"\3";
			gotoxy(60,1);foreColor(4);cout<<"\3";
			gotoxy(13,10);foreColor(3);cout<<"\3";
			gotoxy(106,7);foreColor(9);cout<<"\3";
			gotoxy(26,20);foreColor(9);cout<<"\3";
			gotoxy(98,14);foreColor(6);cout<<"\3";
			gotoxy(100,24);foreColor(9);cout<<"\3";
			
			gotoxy(37,4); foreColor(3); cout<<"               _ (`-.  _ .-') _     ('-.     .-') _     ('-.    ";
			gotoxy(37,5); foreColor(8); cout<<"              ( (OO  )( (  OO) )   ( OO ).-.(  OO) )  _(  OO)   ";
			gotoxy(37,6); foreColor(3); cout<<" ,--. ,--.   _.`     \\ \\     .'_   / . --. //     '._(,------.  ";
			gotoxy(37,7); foreColor(3); cout<<" |  | |  |  (__...--'' ,`'--..._)  | \\-.  \\ |'--...__)|  .---'  ";
			gotoxy(37,8); foreColor(3); cout<<" |  | | .-') |  /  | | |  |  \\  '.-'-'  |  |'--.  .--'|  |      ";
			gotoxy(40,9); foreColor(3); cout<<" |  |_|( OO )|  |_.' | |  |   ' | \\| |_.'  |   |  |  (|  '--.   ";
			gotoxy(37,10); foreColor(3); cout<<" |  | | `-' /|  .___.' |  |   / :  |  .-.  |   |  |   |  .--'   ";
			gotoxy(37,11); foreColor(3); cout<<"('  '-'(_.-' |  |      |  '--'  /  |  | |  |   |  |   |  `---.  ";
			gotoxy(37,12); foreColor(3); cout<<"  `-----'    `--'      `-------'   `--' `--'   `--'   `------'  ";
			
//			gotoxy(40,17); foreColor(5);cout<<"update code      : ";
			gotoxy(40,19); foreColor(5);cout<<"update namePro   : ";getline(cin,namePro);fflush(stdin);cin.clear();
			gotoxy(40,21); foreColor(5);cout<<"update price     : ";cin>>price;fflush(stdin);cin.clear();
			gotoxy(40,23); foreColor(5);cout<<"update qty       : ";cin>>qty;fflush(stdin);cin.clear();
			
			
		}
		void _wrong(){
			//delete and update
			gotoxy(68,8); foreColor(3); cout<<".-. . .-..----.  .----. .-. .-. .---.   ";
			Sleep(100);
			gotoxy(68,9); foreColor(5); cout<<"| |/ \\| || {}  }/  {}  \\|  `| |/   __}  ";
			Sleep(100);
			gotoxy(68,10); foreColor(7); cout<<"|  .'.  || .-. \\      /| |\\  |\\  {_ }  ";
			Sleep(100);
			gotoxy(68,11); foreColor(8); cout<<"`-'   `-'`-' `-' `----' `-' `-' `---'   ";
			
			Sleep(100);
			gotoxy(70,13); foreColor(3); cout<<" .---.  .----. .----. .----.  ";
			Sleep(100);
			gotoxy(70,14); foreColor(5); cout<<"/  ___}/  {}  \\| {}  \\| {_    ";
			Sleep(100);
			gotoxy(70,15); foreColor(7); cout<<"\\     }\\      /|     /| {__    ";
			Sleep(100);
			gotoxy(70,16); foreColor(8); cout<<" `---'  `----' `----' `----'    ";
          
		}
		void _invalid(){
			//search
			gotoxy(63,6); foreColor(4); cout<<" (        )                  (     (    (      ";
			gotoxy(63,7); foreColor(5); cout<<" )\\ )  ( /(           (      )\\ )  )\\ ) )\\ )   ";
			gotoxy(63,8); foreColor(5); cout<<"(()/(  )\\()) (   (    )\\    (()/( (()/((()/(   ";
			gotoxy(63,9); foreColor(6); cout<<" /(_))((_)\\  )\\  )\\((((_)(   /(_)) /(_))/(_))  ";
			gotoxy(63,10); foreColor(6); cout<<"(_))   _((_)((_)((_))\\ _ )\\ (_))  (_)) (_))_   ";
			gotoxy(63,11); foreColor(7); cout<<"|_ _| | \\| |\\ \\ / / (_)_\(_)| |   |_ _| |   \\  ";
			gotoxy(63,12); foreColor(7); cout<<" | |  | .` | \\ V /   / _ \\  | |__  | |  | |) | ";
			gotoxy(63,13); foreColor(8); cout<<"|___| |_|\\_|  \\_/   /_/ \\_\\ |____||___| |___/  ";
			
			
			gotoxy(72,15); foreColor(4); cout<<"          )  (            ";
			gotoxy(72,16); foreColor(5); cout<<"   (   ( /(  )\\ )         ";
			gotoxy(72,17); foreColor(5); cout<<"   )\\  )\\())(()/(   (     ";
			gotoxy(72,18); foreColor(6); cout<<" (((_)((_)\\  /(_))  )\\    ";
			gotoxy(72,19); foreColor(6); cout<<" )\\___  ((_)(_))_  ((_)   ";
			gotoxy(72,20); foreColor(7); cout<<"((/ __|/ _ \\ |   \\ | __|  ";
			gotoxy(72,21); foreColor(7); cout<<" | (__| (_) || |) || _|   ";
			gotoxy(72,22); foreColor(8); cout<<"  \\___|\\___/ |___/ |___|  ";
		}
		void _ANT(){
			gotoxy(60,1);foreColor(3);cout<<"\3";
			gotoxy(17,6);foreColor(4);cout<<"\3";
			gotoxy(60,1);foreColor(4);cout<<"\3";
			gotoxy(13,10);foreColor(3);cout<<"\3";
			gotoxy(106,7);foreColor(9);cout<<"\3";
			gotoxy(26,20);foreColor(9);cout<<"\3";
			gotoxy(98,14);foreColor(6);cout<<"\3";
			gotoxy(100,24);foreColor(9);cout<<"\3";
		    //view
			gotoxy(12,3); foreColor(4); cout<<"   ('-.        ";
			gotoxy(12,4); foreColor(4); cout<<"  ( OO ).-.    ";
			gotoxy(12,5); foreColor(5); cout<<"  / . --. /    ";
			gotoxy(12,6); foreColor(5); cout<<"  | \\-.  \\     ";
			gotoxy(12,7); foreColor(6); cout<<".-'-'  |  |    ";
			gotoxy(12,8); foreColor(6); cout<<" \\| |_.'  |    ";
			gotoxy(12,9); foreColor(7); cout<<"  |  .-.  |    ";
			gotoxy(12,10); foreColor(7); cout<<"  |  | |  |    ";
			gotoxy(12,11); foreColor(8); cout<<"  `--' `--'    ";

			gotoxy(12,12); foreColor(4); cout<<"     .-') _    ";
			gotoxy(12,13); foreColor(4); cout<<"    ( OO ) )   ";
			gotoxy(12,14); foreColor(5); cout<<",--./ ,--,'    ";
			gotoxy(12,15); foreColor(5); cout<<"|   \\ |  |\\    ";
			gotoxy(12,16); foreColor(6); cout<<"|    \\|  | )   ";
			gotoxy(12,17); foreColor(6); cout<<"|  .     |/    ";
			gotoxy(12,18); foreColor(7); cout<<"|  |\\    |     ";
			gotoxy(12,19); foreColor(7); cout<<"|  | \\   |     ";
			gotoxy(12,20); foreColor(8); cout<<"`--'  `--'     ";


			gotoxy(12,21); foreColor(4); cout<<" .-') _      ";
			gotoxy(12,22); foreColor(4); cout<<"(  OO) )     ";
			gotoxy(12,23); foreColor(5); cout<<"/     '._    ";
			gotoxy(12,24); foreColor(5); cout<<"|'--...__)   ";
			gotoxy(12,25); foreColor(6); cout<<"'--.  .--'   ";
			gotoxy(12,26); foreColor(6); cout<<"   |  |      ";
			gotoxy(12,27); foreColor(7); cout<<"   |  |      ";
			gotoxy(12,28); foreColor(7); cout<<"   |  |      ";
			gotoxy(12,29); foreColor(8); cout<<"   `--'      ";
			
			//-----------------------------------------------------------------------
			gotoxy(104,3); foreColor(4); cout<<"   ('-.        ";
			gotoxy(104,4); foreColor(4); cout<<"  ( OO ).-.    ";
			gotoxy(104,5); foreColor(5); cout<<"  / . --. /    ";
			gotoxy(104,6); foreColor(5); cout<<"  | \\-.  \\     ";
			gotoxy(104,7); foreColor(6); cout<<".-'-'  |  |    ";
			gotoxy(104,8); foreColor(6); cout<<" \\| |_.'  |    ";
			gotoxy(104,9); foreColor(7); cout<<"  |  .-.  |    ";
			gotoxy(104,10); foreColor(7); cout<<"  |  | |  |    ";
			gotoxy(104,11); foreColor(8); cout<<"  `--' `--'    ";

			gotoxy(104,12); foreColor(4); cout<<"     .-') _    ";
			gotoxy(104,13); foreColor(4); cout<<"    ( OO ) )   ";
			gotoxy(104,14); foreColor(5); cout<<",--./ ,--,'    ";
			gotoxy(104,15); foreColor(5); cout<<"|   \\ |  |\\    ";
			gotoxy(104,16); foreColor(6); cout<<"|    \\|  | )   ";
			gotoxy(104,17); foreColor(6); cout<<"|  .     |/    ";
			gotoxy(104,18); foreColor(7); cout<<"|  |\\    |     ";
			gotoxy(104,19); foreColor(7); cout<<"|  | \\   |     ";
			gotoxy(104,20); foreColor(8); cout<<"`--'  `--'     ";


			gotoxy(104,21); foreColor(4); cout<<" .-') _      ";
			gotoxy(104,22); foreColor(4); cout<<"(  OO) )     ";
			gotoxy(104,23); foreColor(5); cout<<"/     '._    ";
			gotoxy(104,24); foreColor(5); cout<<"|'--...__)   ";
			gotoxy(104,25); foreColor(6); cout<<"'--.  .--'   ";
			gotoxy(104,26); foreColor(6); cout<<"   |  |      ";
			gotoxy(104,27); foreColor(7); cout<<"   |  |      ";
			gotoxy(104,28); foreColor(7); cout<<"   |  |      ";
			gotoxy(104,29); foreColor(8); cout<<"   `--'      ";

		}

		
};
//----------------------
//start class of staff
//----------------------
class Staff{
	
	public:
		char nameStaff[20],possition[20];
		int id,age;
		char gender;
		int salary;
		char address[20];
		double isFileExist( const char* filename){
			ifstream infile(filename);
			return infile.good();
		}
	public:
		void _registerStaff(){
			gotoxy(63,5);foreColor(3);cout<<" Infomation of staff ";
			gotoxy(63,7);foreColor(3);cout<<" name      : ";
			gotoxy(63,9);foreColor(3);cout<<" id        : ";
			gotoxy(63,11);foreColor(3);cout<<" age       : ";
			gotoxy(63,13);foreColor(3);cout<<" sex       : ";
			gotoxy(63,15);foreColor(3);cout<<" possition : ";
			gotoxy(63,17);foreColor(3);cout<<" salary    : ";
			gotoxy(63,19);foreColor(3);cout<<" address   : ";
			
			gotoxy(76,7);foreColor(3);cin.get(nameStaff,20);fflush(stdin);cin.clear();
			gotoxy(76,9);foreColor(3);cin>>id;fflush(stdin);cin.clear();
			gotoxy(76,11);foreColor(3);cin>>age;fflush(stdin);cin.clear();
			gotoxy(76,13);foreColor(3);cin>>gender;fflush(stdin);cin.clear();
			gotoxy(76,15);foreColor(3);cin.get(possition,20);fflush(stdin);cin.clear();
			gotoxy(76,17);foreColor(3);cin>>salary;fflush(stdin);cin.clear();
			gotoxy(76,19);foreColor(3);cin.get(address,20);fflush(stdin);cin.clear();
			

		}
		void _updateStaff(){
			
			gotoxy(37,4); foreColor(3); cout<<"               _ (`-.  _ .-') _     ('-.     .-') _     ('-.    ";
			gotoxy(37,5); foreColor(8); cout<<"              ( (OO  )( (  OO) )   ( OO ).-.(  OO) )  _(  OO)   ";
			gotoxy(37,6); foreColor(3); cout<<" ,--. ,--.   _.`     \\ \\     .'_   / . --. //     '._(,------.  ";
			gotoxy(37,7); foreColor(3); cout<<" |  | |  |  (__...--'' ,`'--..._)  | \\-.  \\ |'--...__)|  .---'  ";
			gotoxy(37,8); foreColor(3); cout<<" |  | | .-') |  /  | | |  |  \\  '.-'-'  |  |'--.  .--'|  |      ";
			gotoxy(40,9); foreColor(3); cout<<" |  |_|( OO )|  |_.' | |  |   ' | \\| |_.'  |   |  |  (|  '--.   ";
			gotoxy(37,10); foreColor(3); cout<<" |  | | `-' /|  .___.' |  |   / :  |  .-.  |   |  |   |  .--'   ";
			gotoxy(37,11); foreColor(3); cout<<"('  '-'(_.-' |  |      |  '--'  /  |  | |  |   |  |   |  `---.  ";
			gotoxy(37,12); foreColor(3); cout<<"  `-----'    `--'      `-------'   `--' `--'   `--'   `------'  ";
			
			
			gotoxy(45,15);foreColor(4);cout<<" update name      : ";cin.get(nameStaff,20);fflush(stdin);cin.clear();
			gotoxy(45,17);foreColor(4);cout<<" update id        : ";cin>>id;fflush(stdin);cin.clear();
			gotoxy(45,19);foreColor(4);cout<<" update age       : ";cin>>age;fflush(stdin);cin.clear();
			gotoxy(45,21);foreColor(4);cout<<" update sex       : ";cin>>gender;fflush(stdin);cin.clear();
			gotoxy(45,23);foreColor(4);cout<<" update possition : ";cin>>possition;fflush(stdin);cin.clear();
			gotoxy(45,25);foreColor(4);cout<<" update salary    : ";cin>>salary;fflush(stdin);cin.clear();
			gotoxy(45,27);foreColor(4);cout<<" update address   : ";cin>>address;fflush(stdin);cin.clear();
		}
			
		static void _headerStaff(){
			for(int i=0;i<115;i++){
				gotoxy(5+i,5);foreColor(3);cout<<char(196);
			}
			cout<<left;
			gotoxy(5,4);
			foreColor(9);cout<<setw(20)<<"NAME";
			foreColor(9);cout<<setw(20)<<"ID";
			foreColor(9);cout<<setw(15)<<"AGE";
			foreColor(9);cout<<setw(15)<<"GENDER";
			foreColor(9);cout<<setw(15)<<"POSSITION";
			foreColor(9);cout<<setw(20)<<"SALARY";
			foreColor(9);cout<<setw(20)<<"ADDRESS";
			
			  
		}
		void _displayStaff(){
			
			cout<<left<<fixed<<setprecision(2);
//			gotoxy(5,7);
			cout<<setw(20)<<nameStaff;
			cout<<setw(20)<<id;
			cout<<setw(15)<<age;
			cout<<setw(15)<<gender;
			cout<<setw(15)<<possition;
			cout<<setw(20)<<salary;
			cout<<setw(20)<<address;
			
//			for(int i=0;i<113;i++){
//			gotoxy(10+i,3);foreColor(3);cout<<char(196);
//			}
		}
	
};
//-------------------------
//start class of Book store
//-------------------------
class Bookstore{
	public:
		char yourName[20];;
		char nameBook[20];
		int idBook;
		float priceBook;
		float price;
		int qty,n;
		int code;
		double total;
		double dis;
	public:
		double Discount(){
			if(total>20){
				dis = total*0.02;
			}
			else{
				foreColor(20);
				gotoxy(36,21);cout<<"No Discount \3";
			}
			return total;
		}
		double isFileExist( const char* filename){
			ifstream infile(filename);
			return infile.good();
		}
	public:
		void _BuyBook(){
			gotoxy(35,26);cout<<"Input your name              : ";cin.get(yourName,20);fflush(stdin);cin.clear();
		}
		void InvoiceDefault(){
			drawRec(18,1,40,27,"");
			gotoxy(20,6);cout<<"";
			gotoxy(23,3);foreColor(3);cout<<"Name : Khann Teymeta "<<endl;       // yourName;
			
			for(int i=0;i<67;i++){
				gotoxy(23+i,5);cout<<char(196);
			}
			for(int i=0;i<67;i++){
				gotoxy(23+i,7);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,9);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,11);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,13);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,15);cout<<char(196);
			}	
			gotoxy(23,8);foreColor(4);cout<<"you can do it";
			gotoxy(50,8);foreColor(4);cout<<"1";
			gotoxy(70,8);foreColor(4);cout<<"3.00"<<" $";
			gotoxy(84,8);foreColor(4);cout<<"3.00"<<" $";
			
			gotoxy(23,10);foreColor(4);cout<<"Follow your heart";
			gotoxy(50,10);foreColor(4);cout<<"2";
			gotoxy(70,10);foreColor(4);cout<<"4.00"<<" $";
			gotoxy(84,10);foreColor(4);cout<<"8.00"<<" $";
			
			gotoxy(23,12);foreColor(4);cout<<"keep going";
			gotoxy(50,12);foreColor(4);cout<<"1";
			gotoxy(70,12);foreColor(4);cout<<"5.00"<<" $";
			gotoxy(84,12);foreColor(4);cout<<"5.00"<<" $";
			
			gotoxy(23,14);foreColor(4);cout<<"Ikigai";
			gotoxy(50,14);foreColor(4);cout<<"1";
			gotoxy(70,14);foreColor(4);cout<<"5.00"<<" $";
			gotoxy(84,14);foreColor(4);cout<<"5.00"<<" $";
			
			gotoxy(23,16);foreColor(4);cout<<"Sleeping well";
			gotoxy(50,16);foreColor(4);cout<<"1";
			gotoxy(70,16);foreColor(4);cout<<"5.00"<<" $";
			gotoxy(84,16);foreColor(4);cout<<"5.00"<<" $";
			
			gotoxy(23,6);foreColor(3);cout<<"Discription";
			gotoxy(50,6);foreColor(3);cout<<"Quantity";
			gotoxy(30,6);foreColor(3);cout<<"code";
			gotoxy(70,6);foreColor(3);cout<<"Price";
			gotoxy(84,6);foreColor(3);cout<<"Amount";
			
			gotoxy(60,18);foreColor(3);cout<<"Discount 20%";
			gotoxy(84,18);foreColor(3);cout<<"5.20"<<" $";
			
			gotoxy(60,20);foreColor(3);cout<<"SubTotal without Tax";
			gotoxy(84,20);foreColor(3);cout<<"26.00"<<" $";
			
			for(int i=0;i<32;i++){
				gotoxy(59+i,21);cout<<char(196);
			}
			gotoxy(60,23);foreColor(3);cout<<"Amount Paid";
			gotoxy(84,23);foreColor(3);cout<<"0.00"<<" $";
			
			gotoxy(60,25);foreColor(3);cout<<"Amount Due(USD)";
			gotoxy(84,25);foreColor(3);cout<<"20.80"<<" $";
					
			gotoxy(27,25);foreColor(10);cout<<"Term & Conditions";
			gotoxy(23,26);foreColor(10);cout<<"20% Discount for buy 3 books \3";
		}
		
		void Invoice(){
			drawRec(18,1,40,27,"");
			gotoxy(20,6);cout<<"";
			gotoxy(23,3);foreColor(3);cout<<"Name :  "<<yourName<<endl;       // yourName;
			
			for(int i=0;i<67;i++){
				gotoxy(23+i,5);cout<<char(196);
			}
			for(int i=0;i<67;i++){
				gotoxy(23+i,7);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,9);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,11);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,13);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,15);cout<<char(196);
			}
			

			gotoxy(23,6);foreColor(3);cout<<"Discription";
			gotoxy(43,6);foreColor(3);cout<<"code";
			gotoxy(53,6);foreColor(3);cout<<"Quantity";
			gotoxy(68,6);foreColor(3);cout<<"Price";
			gotoxy(84,6);foreColor(3);cout<<"Amount";
		}
		void InvoiceDiscount(){
			drawRec(18,1,40,27,"");
			gotoxy(20,6);cout<<"";
			gotoxy(23,3);foreColor(3);cout<<"Name :  "<<yourName<<endl;       // yourName;
			
			for(int i=0;i<67;i++){
				gotoxy(23+i,5);cout<<char(196);
			}
			for(int i=0;i<67;i++){
				gotoxy(23+i,7);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,9);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,11);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,13);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,15);cout<<char(196);
			}
			
			gotoxy(23,6);foreColor(3);cout<<"Discription";
			gotoxy(43,6);foreColor(3);cout<<"code";
			gotoxy(53,6);foreColor(3);cout<<"Quantity";
			gotoxy(68,6);foreColor(3);cout<<"Price";
			gotoxy(84,6);foreColor(3);cout<<"Amount";
					
		}
		void _headerBook(){
			cout<<left<<setprecision(2);
			gotoxy(23,6);
			foreColor(3);cout<<setw(20)<<"Discription";
			foreColor(3);cout<<setw(10)<<"code";
			foreColor(3);cout<<setw(15)<<"Quantity";
			foreColor(3);cout<<setw(15)<<"Price";
			foreColor(3);cout<<setw(14)<<"Amount";
			
			drawRec(18,1,40,27,"");
			gotoxy(20,6);cout<<"";
			gotoxy(23,3);foreColor(3);cout<<"Name :  "<<yourName<<endl;       // yourName;
			
			for(int i=0;i<67;i++){
				gotoxy(23+i,5);cout<<char(196);
			}
			for(int i=0;i<67;i++){
				gotoxy(23+i,7);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,9);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,11);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,13);cout<<char(196);
			}
			for(int i=0;i<57;i++){
				gotoxy(23+i,15);cout<<char(196);
			}
		}

		void empty(){
			
			gotoxy(20,6); foreColor(4); cout<<" .----------------.  .----------------.  .----------------.  .----------------.  .----------------.   ";
			gotoxy(20,7); foreColor(4); cout<<"| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |   ";
			gotoxy(20,8); foreColor(4); cout<<"| |  _________   | || | ____    ____ | || |   ______     | || |  _________   | || |  ____  ____  | |   ";
			gotoxy(20,9); foreColor(4); cout<<"| | |_   ___  |  | || ||_   \\  /   _|| || |  |_   __ \\   | || | |  _   _  |  | || | |_  _||_  _| | |   ";
			gotoxy(20,10); foreColor(4); cout<<"| |   | |_  \\_|  | || |  |   \\/   |  | || |    | |__) |  | || | |_/ | | \\_|  | || |   \\ \\  / /   | |  ";
			gotoxy(20,11); foreColor(4); cout<<"| |   |  _|  _   | || |  | |\\  /| |  | || |    |  ___/   | || |     | |      | || |    \\ \\/ /    | |   ";
			gotoxy(20,12); foreColor(4); cout<<"| |  _| |___/ |  | || | _| |_\\/_| |_ | || |   _| |_      | || |    _| |_     | || |    _|  |_    | |   ";
			gotoxy(20,13); foreColor(4); cout<<"| | |_________|  | || ||_____||_____|| || |  |_____|     | || |   |_____|    | || |   |______|   | |   ";
			gotoxy(20,14); foreColor(4); cout<<"| |              | || |              | || |              | || |              | || |              | |   ";
			gotoxy(20,15); foreColor(4); cout<<"| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |   ";
			gotoxy(20,16); foreColor(4); cout<<" '----------------'  '----------------'  '----------------'  '----------------'  '----------------'   ";

		}
		
};

void _Norton(){
	gotoxy(70,6); foreColor(3); cout<<"     .-') _         \3    ";
	gotoxy(70,7); foreColor(3); cout<<"    ( OO ) )             ";
	gotoxy(70,8); foreColor(3); cout<<",--./ ,--,'     ,--. ,--.     ";
	gotoxy(70,9); foreColor(3); cout<<"|   \\ |  |\\     |  | |  |      ";
	gotoxy(70,10); foreColor(3); cout<<"|    \\|  | )    |  | | .-')     ";
	gotoxy(70,11); foreColor(3); cout<<"|  .     |/     |  |_|( OO )     ";
	gotoxy(70,12); foreColor(3); cout<<"|  |\\    |      |  | | `-' /     ";
	gotoxy(70,13); foreColor(3); cout<<"|  | \\   |     ('  '-'(_.-'     ";
	gotoxy(70,14); foreColor(3); cout<<"`--'  `--'       `-----'                \3";
			
			
	gotoxy(64,16); foreColor(3); cout<<".-.   .-..----. .----.   .--.  .----..-.  .-.      ";
	gotoxy(64,17); foreColor(3); cout<<"| |   | || {}  }| {}  } / {} \\ | {}  }\\ \\/ /  ";
	gotoxy(64,18); foreColor(3); cout<<"| `--.| || {}  }| .-. \\/  /\\  \\| .-. \\ }  {   ";
	gotoxy(64,19); foreColor(3); cout<<"`----'`-'`----' `-' `-'`-'  `-'`-' `-' `--'   ";                                                       
}
void Not_found(){
	
	gotoxy(10,3); foreColor(8); cout<<" ________ .-./`)   .---.       .-''-.          .-./`)    .-'''-.         ,---.   .--.    ,-----.  ,---------.   ";
	gotoxy(10,4); foreColor(3); cout<<"|        |\\ .-.')  | ,_|     .'_ _   \\         \\ .-.')  / _     \\        |    \\  |  |  .'  .-,  '.\\          \\  ";
	gotoxy(10,5); foreColor(4); cout<<"|   .----'/ `-' \\,-./  )    / ( ` )   '        / `-' \\ (`' )/`--'        |  ,  \\ |  | / ,-.|  \\ _ \\`--.  ,---'  ";
	gotoxy(10,6); foreColor(5); cout<<"|  _|____  `-'``\\  '_ '`) . (_ o _)  |         `-'``(_ o _).           |  |\\_ \\|  |;  \\  '_ /  | :  |   \\     ";
	gotoxy(10,7); foreColor(6); cout<<"|_( )_   | .---.  > (_)  ) |  (_,_)___|         .---.  (_,_). '.         |  _( )_\\  ||  _`,/ \\ _/  |  :_ _:    ";
	gotoxy(10,8); foreColor(7); cout<<"(_ o._)__| |   | (  .  .-' '  \\   .---.         |   | .---.  \\  :        | (_ o _)  |: (  '\\_/ \\   ;  (_I_)    ";
	gotoxy(10,9); foreColor(8); cout<<"|(_,_)     |   |  `-'`-'|___\\  `-'    /         |   | \\    `-'  |        |  (_,_)\\  | \\ `/  \\  ) /  (_(=)_)   ";
	gotoxy(10,10); foreColor(4); cout<<"|   |      |   |   |        \\       /          |   | \\ \\       /         |  |    |  |  '. \\_/``.'    (_I_)    ";
	gotoxy(10,11); foreColor(8); cout<<"'---'      '---'   `--------` `'-..-'           '---'   `-...-'          '--'    '--'    '-----'      '---'    ";
	                                                                                                               
	
	gotoxy(30,16); foreColor(8); cout<<" ________     ,-----.      ___    _ ,---.   .--. ______      ";
	gotoxy(30,17); foreColor(3); cout<<"|        |  .'  .-,  '.  .'   |  | ||    \\  |  ||    _ `''.  ";
	gotoxy(30,18); foreColor(4); cout<<"|   .----' / ,-.|  \\ _ \\ |   .'  | ||  ,  \\ |  || _ | ) _  \\  ";
	gotoxy(30,19); foreColor(5); cout<<"|  _|____ ;  \\  '_ /  | :.'  '_  | ||  |\\_ \\|  ||( ''_'  ) |  ";
	gotoxy(30,20); foreColor(6); cout<<"|_( )_   ||  _`,/ \\ _/  |'   ( \\.-.||  _( )_\\  || . (_) `. |  ";
	gotoxy(30,21); foreColor(7); cout<<"(_ o._)__|: (  '\\_/ \\   ;' (`. _` /|| (_ o _)  ||(_    ._) '  ";
	gotoxy(30,22); foreColor(8); cout<<"|(_,_)     \\ `/  \\  ) / | (_ (_) _)|  (_,_)\\  ||  (_.\\.' /   ";
	gotoxy(30,23); foreColor(4); cout<<"|   |       '. \\_/``.'   \\ /  . \\ /|  |    |  ||       .'   ";
	gotoxy(30,24); foreColor(8); cout<<"'---'         '-----'      ``-'`-'' '--'    '--''-----'`     ";
                                                    
}
void Empty(){

	gotoxy(15,5); foreColor(8); cout<<" .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  ";
	gotoxy(15,6); foreColor(4); cout<<"| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. | ";
	gotoxy(15,7); foreColor(4); cout<<"| |  _________   | || | ____    ____ | || |   ______     | || |  _________   | || |  ____  ____  | | ";
	gotoxy(15,8); foreColor(5); cout<<"| | |_   ___  |  | || ||_   \\  /   _|| || |  |_   __ \\   | || | |  _   _  |  | || | |_  _||_  _| | | ";
	gotoxy(15,9); foreColor(5); cout<<"| |   | |_  \\_|  | || |  |   \\/   |  | || |    | |__) |  | || | |_/ | | \\_|  | || |   \\ \\  / /   | | ";
	gotoxy(15,10); foreColor(6); cout<<"| |   |  _|  _   | || |  | |\\  /| |  | || |    |  ___/   | || |     | |      | || |    \\ \\/ /    | | ";
	gotoxy(15,11); foreColor(6); cout<<"| |  _| |___/ |  | || | _| |_\\/_| |_ | || |   _| |_      | || |    _| |_     | || |    _|  |_    | | ";
	gotoxy(15,12); foreColor(7); cout<<"| | |_________|  | || ||_____||_____|| || |  |_____|     | || |   |_____|    | || |   |______|   | | ";
	gotoxy(15,13); foreColor(7); cout<<"| |              | || |              | || |              | || |              | || |              | | ";
	gotoxy(15,14); foreColor(8); cout<<"| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' | ";
	gotoxy(15,15); foreColor(8); cout<<" '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  ";
	
	
	gotoxy(25,18); foreColor(8); cout<<".----------------.  .----------------.  .----------------.  .----------------.   ";
	gotoxy(25,19); foreColor(4); cout<<"| .--------------. || .--------------. || .--------------. || .--------------. |  ";
	gotoxy(25,20); foreColor(4); cout<<"| |     ______   | || |     ____     | || |  ________    | || |  _________   | | ";
	gotoxy(25,21); foreColor(5); cout<<"| |   .' ___  |  | || |   .'    `.   | || | |_   ___ `.  | || | |_   ___  |  | | ";
	gotoxy(25,22); foreColor(5); cout<<"| |  / .'   \\_|  | || |  /  .--.  \\  | || |   | |   `. \\ | || |   | |_  \\_|  | | ";
	gotoxy(25,23); foreColor(6); cout<<"| |  | |         | || |  | |    | |  | || |   | |    | | | || |   |  _|  _   | | ";
	gotoxy(25,24); foreColor(6); cout<<"| |  \\ `.___.'\\  | || |  \\  `--'  /  | || |  _| |___.' / | || |  _| |___/ |  | | ";
	gotoxy(25,25); foreColor(7); cout<<"| |   `._____.'  | || |   `.____.'   | || | |________.'  | || | |_________|  | | ";
	gotoxy(25,26); foreColor(7); cout<<"| |              | || |              | || |              | || |              | | ";
	gotoxy(25,27); foreColor(8); cout<<"| '--------------' || '--------------' || '--------------' || '--------------' | ";
	gotoxy(25,28); foreColor(8); cout<<" '----------------'  '----------------'  '----------------'  '----------------'  ";
                                                                        
}
void success(){
	
	gotoxy(35,4); foreColor(8); cout<<" _(`-')    (`-')  _         (`-')  _(`-')      (`-')  _  ";
	gotoxy(35,5); foreColor(8); cout<<"( (OO ).-> ( OO).-/  <-.    ( OO).-/( OO).->   ( OO).-/   ";
	gotoxy(35,6); foreColor(4); cout<<" \\    .'_ (,------.,--. )  (,------./    '._  (,------.   ";
	gotoxy(35,7); foreColor(4); cout<<" '`'-..__) |  .---'|  (`-') |  .---'|'--...__) |  .---'   ";
	gotoxy(35,8); foreColor(8); cout<<" |  |  ' |(|  '--. |  |OO )(|  '--. `--.  .--'(|  '--.    ";
	gotoxy(35,9); foreColor(5); cout<<" |  |  / : |  .--'(|  '__ | |  .--'    |  |    |  .--'    ";
	gotoxy(35,10); foreColor(5); cout<<" |  '-'  / |  `---.|     |' |  `---.   |  |    |  `---.  ";
	gotoxy(35,11); foreColor(6); cout<<" `------'  `------'`-----'  `------'   `--'    `------'  ";


	gotoxy(35,13); foreColor(8); cout<<"  .-')                                       ('-.    .-')     .-')    ";
	gotoxy(35,14); foreColor(8); cout<<" ( OO ).                                   _(  OO)  ( OO ).  ( OO ).   ";
	gotoxy(35,15); foreColor(4); cout<<"(_)---\\_) ,--. ,--.     .-----.   .-----. (,------.(_)---\\_)(_)---\\_)  ";
	gotoxy(35,16); foreColor(4); cout<<"/    _ |  |  | |  |    '  .--./  '  .--./  |  .---'/    _ | /    _ |   ";
	gotoxy(35,17); foreColor(4); cout<<"\\  :` `.  |  | | .-')  |  |('-.  |  |('-.  |  |    \\  :` `. \\  :` `.    ";
	gotoxy(35,18); foreColor(8); cout<<" '..`''.) |  |_|( OO )/_) |OO  )/_) |OO  )(|  '--.  '..`''.) '..`''.)   ";
	gotoxy(35,19); foreColor(5); cout<<".-._)   \\ |  | | `-' /||  |`-'| ||  |`-'|  |  .--' .-._)   \\.-._)   \\  ";
	gotoxy(35,20); foreColor(5); cout<<"\\       /('  '-'(_.-'(_'  '--'\\(_'  '--'\\  |  `---.\\       /\\       /  ";
	gotoxy(35,21); foreColor(6); cout<<" `-----'   `-----'      `-----'   `-----'  `------' `-----'  `-----'   ";

}
void outStock(){
		gotoxy(60,1);foreColor(3);cout<<"\3";
		gotoxy(17,6);foreColor(4);cout<<"\3";
		gotoxy(60,1);foreColor(4);cout<<"\3";
		gotoxy(13,10);foreColor(3);cout<<"\3";
		gotoxy(106,7);foreColor(9);cout<<"\3";
		gotoxy(26,20);foreColor(9);cout<<"\3";
		gotoxy(98,14);foreColor(6);cout<<"\3";
		gotoxy(100,24);foreColor(9);cout<<"\3";
		
		gotoxy(40,3); foreColor(8); cout<<" (                                                              ";
		gotoxy(40,4); foreColor(8); cout<<" )\\ )                 (     (                                )  ";
		gotoxy(40,5); foreColor(8); cout<<"(()/(              (  )\\ )  )\\ )  (       (     (         ( /(  ";
		gotoxy(40,6); foreColor(8); cout<<" /(_)) (     (    ))\(()/( (()/(  )\\   (  )\\   ))\\  (     )\\()) ";
		gotoxy(40,7); foreColor(7); cout<<"(_))   )\\ )  )\\  /((_)/(_)) /(_))((_)  )\\((_) /((_) )\\ ) (_))/  ";
		gotoxy(40,8); foreColor(3); cout<<"|_ _| _(_/( ((_)(_))((_) _|(_) _| (_) ((_)(_)(_))  _(_/( | |_   ";
		gotoxy(40,9); foreColor(3); cout<<" | | | ' \\))(_-<| || ||  _| |  _| | |/ _| | |/ -_)| ' \\))|  _|  ";
		gotoxy(40,10); foreColor(3); cout<<"|___||_||_| /__/ \\_,_||_|   |_|   |_|\\__| |_|\\___||_||_|  \\__|  ";
                                                                
           
		gotoxy(60,12); foreColor(8); cout<<"      (      ";
		gotoxy(60,13); foreColor(8); cout<<"      )\\ )  ";
		gotoxy(60,14); foreColor(8); cout<<"  (  (()/(  ";
		gotoxy(60,15); foreColor(7); cout<<"  )\\  /(_)) "; 
		gotoxy(60,16); foreColor(3); cout<<" ((_)(_) _| ";
		gotoxy(60,16); foreColor(3); cout<<"/ _ \\ |  _| ";
		gotoxy(60,17); foreColor(3); cout<<"\\___/ |_|   ";
          
		                       
		gotoxy(55,19); foreColor(8); cout<<"        )              )  ";
		gotoxy(55,20); foreColor(8); cout<<"     ( /(           ( /(  ";
		gotoxy(55,21); foreColor(8); cout<<" (   )\\()) (    (   )\\())  ";
		gotoxy(55,22); foreColor(7); cout<<" )\\ (_))/  )\\   )\\ ((_)\\  ";
		gotoxy(55,23); foreColor(3); cout<<"((_)| |_  ((_) ((_)| |(_) ";
		gotoxy(55,24); foreColor(3); cout<<"(_-<|  _|/ _ \\/ _| | / /  ";
		gotoxy(55,25); foreColor(3); cout<<"/__/ \\__|\\___/\\__| |_\\_\\         \3";
                          

}

Stock st , stCheck;
fstream filestock;
Staff sta ,staCheck;
fstream filestaff;

Bookstore book;
fstream filebook;

bool isBarDoublicate(int bar){
	filestock.open("stock.bin", ios::in | ios::binary);
	while(filestock.eof() != true){
		filestock.read((char*)&stCheck, sizeof(stCheck));
		if(stCheck.code== bar){
			filestock.close();
			return true;
		}
	}
	filestock.close();
	return false;
}
void RegisterProduct(){
	foreColor(4);gotoxy(75,5);cout<<"Infomation of Product";
	st._registerPro();
	if(st.isFileExist("stock.bin")){
		if(!isBarDoublicate(st.code)){
			filestock.open("stock.bin", ios::out | ios::app |  ios::binary);
			filestock.write((char*)&st,sizeof(st));
			filestock.close();
		}
		else{
			gotoxy(70,27);foreColor(4);cout<<"sorry, code already taken \3";
			getch();
		}
	}
	else{
		filestock.open("stock.bin", ios::out | ios::app | ios::binary);
		filestock.write((char*)&st,sizeof(st));
		filestock.close();
	}
}
void ViewAllProduct(){
	filestock.open("stock.bin", ios::in  | ios::binary);
//	int n= filesystem::file_size("stock.bin")/sizeof(st);
	filestock.read((char*)&st,sizeof(st));

	if(filestock.fail()){
		Not_found();

	}
	if(filestock.good()){
	
		filestock.read((char*)&st,sizeof(st));
		int i=0;
		while(filestock.eof() !=true){
			st._ANT();
			Stock::_header();
			gotoxy(35,6+i);foreColor(3);
				st._display();
				gotoxy(49,19+(i+=1));
				i++;             //incease

				filestock.read((char*)&st,sizeof(st));
		}
	}
	filestock.close();
}


void ImportQty(){

	ofstream fileQty;
	filestock.open("stock.bin", ios::in | ios::binary);
	fileQty.open("stockBackup.bin", ios::binary );
	if(filestock.fail()){
		cout<<"\n\tFile not Found";
		return ;
	} 
	if(filestock.good()){
		int searchBar;
		bool isFound=false;
		cout<<"\n\tEnter barcode to import ";cin>>searchBar;fflush(stdin);cin.clear();
		filestock.read((char*)&st,sizeof(st));
		while(filestock.eof() != true){
			if(searchBar == st.code){
				st._importQTY();
				fileQty.write((char*)&st,sizeof(st));
				isFound=true;
			}
			if(searchBar != st.code){
				fileQty.write((char*)&st,sizeof(st));
			}
			filestock.read((char*)&st,sizeof(st));
		}
		if(isFound == true){
			cout<<"\n\tImport successful .";
		}
		if(isFound == false){
			cout<<"\n\tWrong barcode .";
		}
	}
	filestock.close();
	fileQty.close();
	remove("stock");
	rename("stockBackup","stock");
}
void SearchProduct(){
	filestock.open("stock.bin", ios::in | ios::binary);
	if(filestock.fail()){
		system("cls");
		Empty();
	}
	if(filestock.good()){
		int searchBar;
		bool isFound=false;

		gotoxy(70,27);foreColor(7);cout<<"Enter barcode for search : ";cin>>searchBar;fflush(stdin);cin.clear();
		filestock.read((char*)&st,sizeof(st));
		int i=0;
		
		while(filestock.eof() != true){
			if(searchBar == st.code){
				system("cls");
				st.search_edit();
				Stock::_header();
				gotoxy(35,6+i);foreColor(3);
	
				st._display();
				i+=2;
				isFound =true;
			}
			filestock.read((char*)&st,sizeof(st));
		}
		if(isFound== false){
			st._invalid();
			
		}
	}
	filestock.close();
}
void UpdateProduct(){
	filestock.open("stock.bin" , ios::out | ios::in |  ios::binary);
	if(filestock.fail()){
		system("cls");
		Not_found();
		return ;	
	}
	if(filestock.good()){
		int Up_Bar;
		bool isUpdated = false;
		gotoxy(70,27);foreColor(7);cout<<"Enter barcode for Update :";cin>>Up_Bar;fflush(stdin);cin.clear();
		filestock.read((char*)&st,sizeof(st));
		while(filestock.eof() != true){
			if(Up_Bar == st.code){
				system("cls");
				gotoxy(40,17); foreColor(5);cout<<"update code      : "<<Up_Bar;
				st._updatePro();
//				getch();
				int ls = filestock.tellg();
				filestock.seekg(ls -sizeof(st));
				filestock.write((char*)&st,sizeof(st));
				isUpdated = true;
			}
			filestock.read((char*)&st,sizeof(st));
		}
		if(isUpdated == false){
			st._wrong();
		}
	}
	filestock.close();
}
void DeleteProduct(){
	ofstream fileTemp;
	filestock.open("stock.bin" ,ios::out | ios::in | ios::binary);
	fileTemp.open("stockDelete.bin",ios::out | ios::binary);
	if(filestock.fail()){
		system("cls");
		Not_found();
	}
	if(filestock.good()){
		int De_Bar;
		bool isDeleted = false;
		gotoxy(70,27);foreColor(7);cout<<"Enter Code for Delete : ";cin>>De_Bar;fflush(stdin);cin.clear();
		filestock.read((char*)&st,sizeof(st));
		while(filestock.eof() != true){
			if(De_Bar == st.code){
				cls();
				success();
				isDeleted = true;
			}
			
			else if (De_Bar != st.code){
				fileTemp.write((char*)&st,sizeof(st));
			}
			filestock.read((char*)&st,sizeof(st));
		}
		if(isDeleted == false){
			st._wrong();
		}
	}
	filestock.close();
	fileTemp.close();
	remove("stock.bin");
	rename("stockDelete.bin","stock.bin");
}

bool isBarDublicate(int bar){
	filestaff.open("staff.bin", ios::in | ios::binary);
	while(filestock.eof() != true){
		filestaff.read((char*)&staCheck,sizeof(staCheck));
		if(staCheck.id == bar){
			filestaff.close();
			return true;
		}
	}
	filestaff.close();
	return false;
}
void RegisterStaff(){
	sta._registerStaff();
	if(sta.isFileExist("staff.bin")){
		if(!isBarDoublicate(sta.id)){
			filestaff.open("staff.bin", ios::out | ios::app | ios::binary);
			filestaff.write((char*)&sta,sizeof(sta));
			filestaff.close();
		}
		else{
			gotoxy(70,27);foreColor(4);cout<<"Id already taken \3";
			getch();
		}
	}
	else{
		filestaff.open("staff.bin", ios::out | ios::app | ios::binary);
		filestaff.write((char*)&sta,sizeof(sta));
		filestaff.close();
	}
			
}
void ViewAllStaff(){
	filestaff.open("staff.bin", ios::in | ios::binary);
	filestaff.read((char*)&sta,sizeof(sta));
	if(filestaff.fail()){
		system("cls");
		Not_found();
	}
	if(filestaff.good()){
		filestaff.read((char*)&sta,sizeof(sta));
		int i=0;
		while(filestaff.eof() !=true){
//			_ANT();
			Staff::_headerStaff();
			gotoxy(5,8+i);foreColor(3);
				sta._displayStaff();
				gotoxy(19,2+(i+=1));
				i+=2;

			filestaff.read((char*)&sta,sizeof(sta));
		}
	}
	filestaff.close();
}
void SearchStaff(){
	filestaff.open("staff.bin",ios::in | ios::binary);
	if(!filestaff){
		cls();
		Empty();

		return ;
	}
	if(filestaff.good()){
		int searchBar;
		bool isFound=false;
		gotoxy(70,27);foreColor(7);cout<<"Enter id to search staff : ";cin>>searchBar;fflush(stdin);cin.clear();
		filestaff.read((char*)&sta,sizeof(sta));
		int i=0;
		while(filestaff.eof() != true){
			if(searchBar == sta.id){
				system("cls");
				Staff::_headerStaff();
				gotoxy(5,8+i);foreColor(3);
				sta._displayStaff();
				gotoxy(19,2+(i+=1));
				i+=2;
				isFound =true;
			}
			filestaff.read((char*)&sta,sizeof(sta));
		}
		if(isFound == false){
			st._wrong();
			
		}
	}
	filestaff.close();
}
void UpdateStaff(){
	filestaff.open("staff.bin",ios::in | ios::out | ios::binary );
	if(filestaff.fail()){
		cls();
		Not_found();

		return ;
	}
	if(filestaff.good()){
		int searchBar;
		bool isUpdated = false;
		gotoxy(70,27);foreColor(7);cout<<"Enter id for update staff : ";cin>>searchBar;fflush(stdin);cin.clear();
		filestaff.read((char*)&sta,sizeof(sta));
		while(filestaff.eof() != true){
			if(searchBar == sta.id){
				system("cls");
				sta._updateStaff();
				int ls = filestaff.tellg();
				filestaff.seekg(ls -sizeof(sta));
				filestaff.write((char*)&sta,sizeof(sta));
				isUpdated = true;
			}
			filestaff.read((char*)&sta,sizeof(sta));
		}
		if(isUpdated == false){
			st._wrong();

		}
	}
	filestaff.close();
}
void DeleteStaff(){
	ofstream fileTemp;
	filestaff.open("staff.bin",ios::out |  ios::in | ios::binary);
	fileTemp.open("staffDelete.bin",ios::out |  ios::binary);
	if(filestaff.fail()){
		cls();
		Not_found();
	} 
	if(filestaff.good()){
		int searchBar;
		bool isDeleted = false;
		gotoxy(70,27);foreColor(4);cout<<"Enter id to delete staff : ";cin>>searchBar;fflush(stdin);cin.clear();
		filestaff.read((char*)&sta,sizeof(sta));
		while(filestaff.eof() != true){
			if(searchBar == sta.id){
				cls();
				success();
				isDeleted =true;
			}
			else if (searchBar != sta.id){
				fileTemp.write((char*)&sta,sizeof(sta));
			}
			filestaff.read((char*)&sta,sizeof(sta));
		}
		if(isDeleted == false){
			st._wrong();

		}
	}
	filestaff.close();
	fileTemp.close();
	remove("staff.bin");
	rename("staffDelete.bin","staff.bin");
}

void ViewStock(){
	filestock.open("stock.bin", ios::in  | ios::binary);

	filestock.read((char*)&st,sizeof(st));

	if(filestock.fail()){
		cls();
		Not_found();
		
	}
	if(filestock.good()){
		
		filestock.read((char*)&st,sizeof(st));
		int i=0;
		while(filestock.eof() !=true){
			st._ANT();
			Stock::_header();
			gotoxy(35,6+i);foreColor(3);
				st._display();
				gotoxy(49,19+(i+=1));
				i++;
//				st.ruler();
				filestock.read((char*)&st,sizeof(st));
		}
	}
	filestock.close();
}
void InvoiceBook(){
	cls();
	drawRec(18,1,40,27,"");
	gotoxy(20,6);cout<<"";
	gotoxy(23,3);foreColor(3);cout<<"Name : Khann Teymeta "<<endl;       // yourName;
	
	for(int i=0;i<67;i++){
		gotoxy(23+i,5);cout<<char(196);
	}
	for(int i=0;i<67;i++){
		gotoxy(23+i,7);cout<<char(196);
	}
	for(int i=0;i<57;i++){
		gotoxy(23+i,9);cout<<char(196);
	}
	for(int i=0;i<57;i++){
		gotoxy(23+i,11);cout<<char(196);
	}
	for(int i=0;i<57;i++){
		gotoxy(23+i,13);cout<<char(196);
	}
	for(int i=0;i<57;i++){
		gotoxy(23+i,15);cout<<char(196);
	}	
	gotoxy(23,8);foreColor(4);cout<<"you can do it";
	gotoxy(50,8);foreColor(4);cout<<"1";
	gotoxy(70,8);foreColor(4);cout<<"3.00"<<" $";
	gotoxy(84,8);foreColor(4);cout<<"3.00"<<" $";
	
	gotoxy(23,10);foreColor(4);cout<<"Follow your heart";
	gotoxy(50,10);foreColor(4);cout<<"2";
	gotoxy(70,10);foreColor(4);cout<<"4.00"<<" $";
	gotoxy(84,10);foreColor(4);cout<<"8.00"<<" $";
	
	gotoxy(23,12);foreColor(4);cout<<"keep going";
	gotoxy(50,12);foreColor(4);cout<<"1";
	gotoxy(70,12);foreColor(4);cout<<"5.00"<<" $";
	gotoxy(84,12);foreColor(4);cout<<"5.00"<<" $";
	
	gotoxy(23,14);foreColor(4);cout<<"Ikigai";
	gotoxy(50,14);foreColor(4);cout<<"1";
	gotoxy(70,14);foreColor(4);cout<<"5.00"<<" $";
	gotoxy(84,14);foreColor(4);cout<<"5.00"<<" $";
	
	gotoxy(23,16);foreColor(4);cout<<"Sleeping well";
	gotoxy(50,16);foreColor(4);cout<<"1";
	gotoxy(70,16);foreColor(4);cout<<"5.00"<<" $";
	gotoxy(84,16);foreColor(4);cout<<"5.00"<<" $";
	
	gotoxy(23,6);foreColor(3);cout<<"Discription";
	gotoxy(50,6);foreColor(3);cout<<"Quantity";
	gotoxy(30,6);foreColor(3);cout<<"code";
	gotoxy(70,6);foreColor(3);cout<<"Price";
	gotoxy(84,6);foreColor(3);cout<<"Amount";
	
	gotoxy(60,18);foreColor(3);cout<<"Discount 20%";
	gotoxy(84,18);foreColor(3);cout<<"5.20"<<" $";
	
	gotoxy(60,20);foreColor(3);cout<<"SubTotal without Tax";
	gotoxy(84,20);foreColor(3);cout<<"26.00"<<" $";
	
	for(int i=0;i<32;i++){
		gotoxy(59+i,21);cout<<char(196);
	}
	gotoxy(60,23);foreColor(3);cout<<"Amount Paid";
	gotoxy(84,23);foreColor(3);cout<<"0.00"<<" $";
	
	gotoxy(60,25);foreColor(3);cout<<"Amount Due(USD)";
	gotoxy(84,25);foreColor(3);cout<<"20.80"<<" $";
			
	gotoxy(27,25);foreColor(10);cout<<"Term & Conditions";
	gotoxy(23,26);foreColor(10);cout<<"20% Discount for buy 3 books \3";
		
		

}
bool BuyBook(){
	int codeSale, qtySale;
	bool isFound = false;
	string yourName;
	book._BuyBook();
	
	gotoxy(35,28);cout<<"Enter code to buy            : ";cin>>codeSale;
	fflush(stdin);cin.clear();
	filestock.open("stock.bin", ios::in  | ios::out | ios::binary);
	if(filestock.fail()){
		Not_found();
	}
	if(filestock.good()){
		filestock.read((char*)&st,sizeof(st));
		int i=0;
		while(filestock.eof() !=true){
			if(codeSale == st.code){
				isFound = true;
				break;
			}
			filestock.read((char*)&st,sizeof(st));
		}
	}
	if (isFound == false){
		gotoxy(35,30);foreColor(4);cout<<"Invalid barcode \3                     ";
		return false;
		
	}
	filestock.close();
	int qtySold = 0;

	gotoxy(35,30);cout<<"Enter qty to buy             : ";cin>>qtySale;
	fflush(stdin);cin.clear();
	filestock.open("stock.bin", ios::in  | ios::out | ios::binary);
	
	if(filestock.fail()){
		Not_found();
		filestock.close();
		return false;
	}
	if(filestock.good()){
		filestock.read((char*)&st,sizeof(st));
		while(filestock.eof() != true){
			if(codeSale == st.code){
				if(st.qty >= qtySale){
					qtySold = qtySale;
					st.qty -= qtySold;
					
					int ls = filestock.tellg();
					filestock.seekg(ls - sizeof(st));
					filestock.write((char*)&st,sizeof(st));
					filestock.close();
//					InvoiceBook();
					cls();
					//dak invoice
					if (qtySold <3 ){
						book.Invoice();
						cout<<left<<fixed<<setprecision(2);
						gotoxy(23,8);
						cout<<setw(20)<<st.namePro;
						cout<<setw(10)<<st.code;
						cout<<setw(15)<<qtySale<<"$";
						cout<<setw(15)<<st.price<<"$";
						cout<<setw(14)<<st.price * qtySale;
						
						//------no discount----------//
						gotoxy(60,18);foreColor(3);cout<<"Discount 0%";
						gotoxy(84,18);foreColor(3);cout<<"0.00"<<" $";
						
						gotoxy(60,20);foreColor(3);cout<<"SubTotal without Tax";
						gotoxy(84,20);foreColor(3);cout<<st.price * qtySale<<" $";
						
						for(int i=0;i<32;i++){
							gotoxy(59+i,21);cout<<char(196);
						}
						gotoxy(60,23);foreColor(3);cout<<"Amount Paid";
						gotoxy(84,23);foreColor(3);cout<<"0.00"<<" $";
						
						gotoxy(60,25);foreColor(3);cout<<"Amount Due(USD)";
						gotoxy(84,25);foreColor(3);cout<<st.price * qtySale<<" $";
								
						gotoxy(27,25);foreColor(10);cout<<"Term & Conditions";
						gotoxy(23,26);foreColor(10);cout<<"20% Discount for buy 3 books \3";
					}
					else{
						book.InvoiceDiscount();
						cout<<left<<fixed<<setprecision(2);
						gotoxy(23,8);
						cout<<setw(20)<<st.namePro;
						cout<<setw(10)<<st.code;
						cout<<setw(15)<<qtySale<<"$";
						cout<<setw(15)<<st.price<<"$";
						cout<<setw(14)<<st.price * qtySale;
						
						//---------Discount------------//
						gotoxy(60,18);foreColor(3);cout<<"Discount 20%";
						gotoxy(84,18);foreColor(3);cout<<((st.price * st.qty )*0.2)<<" $";
						
						gotoxy(60,20);foreColor(3);cout<<"SubTotal without Tax";
						gotoxy(84,20);foreColor(3);cout<<st.price * qtySale<<" $";
						
						for(int i=0;i<32;i++){
							gotoxy(59+i,21);cout<<char(196);
						}
						gotoxy(60,23);foreColor(3);cout<<"Amount Paid";
						gotoxy(84,23);foreColor(3);cout<<"0.00"<<" $";
						
						gotoxy(60,25);foreColor(3);cout<<"Amount Due(USD)";
						gotoxy(84,25);foreColor(3);cout<<(st.price * qtySale)-((st.price * qtySale )*0.2) <<" $";
								
						gotoxy(27,25);foreColor(10);cout<<"Term & Conditions";
						gotoxy(23,26);foreColor(10);cout<<"20% Discount for buy 3 books \3";						
				
					}
					
					return true;
				}
				else {
					cls();
					outStock();

				}
				break;
			}
			filestock.read((char*)&st,sizeof(st));
		}
		
	}
	
	filestock.close();
	return false;

}

#endif