#include "Stock-library.h"
using namespace std;
void stockFunc();
void staffFunc();
void bookStoreFunc();
void bookFunc();
void backgroundFunc();
void _welcome();
void back();
	
int main() {
	system("MODE CON COLS=135  LINES=33");
	SetConsoleTitle("Library");
//	_welcome();
	system("cls");
	back();
	return 0;
}
void back(){
	int option;
    static int j = 0;
    
    gotoxy(10,2);foreColor(3);cout<<"Norton university";
	gotoxy(10,31);foreColor(3);cout<<"Create by : Khann Teymeta";
	for(int i=0;i<110;i++){
		gotoxy(9+i,3);foreColor(3);cout<<char(196);
	}
	for(int i=0;i<110;i++){
		gotoxy(9+i,30);foreColor(3);cout<<char(196);
	}
    again:
    do {
	    DrawRectangle(30,5,60,22,3);
		DrawRectangle(29,6,62,20,8);
		DrawRectangle(28,6,64,20,3);
		gotoxy(30,9);for(int i=0;i<60;i++){
			cout<<char(196);
		}
		foreColor(2);drawRec(35,10,25,2,"");
		foreColor(4);drawRec(35,13,25,2,"");
		foreColor(5);drawRec(35,16,25,2,"");
		foreColor(6);drawRec(35,19,25,2,"");
		foreColor(7);drawRec(35,22,25,2,"");
    	
		gotoxy(50,8);foreColor(7);cout<<"\3 NORTON LIBRARY \3";
        gotoxy(40,11);cout<<"Book Management ";
        gotoxy(40,14);cout<<"Staff Management";
        gotoxy(40,17);cout<<"Book store";
        gotoxy(40,20);cout<<"Background";
        gotoxy(40,23);cout<<"Exit";
        gotoxy(40,25);cout<<"USE ARROW KEY UP AND DOWN ...";
        
        if (j == 0) {
            foreColor(5);
            gotoxy(40,11);cout<<"Book Management ";
        }
        if (j == 1) {
            foreColor(5);
            gotoxy(40,14);cout<<"Staff Management";
        }
        if (j == 2) {
            foreColor(5);
            gotoxy(40,17);cout<<"Book store";
        }
        if ( j == 3){
        	foreColor(5);
        	gotoxy(40,20);cout<<"Background";
		}
		if ( j == 4){
			foreColor(5);
			gotoxy(40, 23);cout<<"Exit";
		}
        option = getch();
        switch (option) {
            case 80: j++; if (j > 4) j = 0; break;
            case 72: j--; if (j < 0) j = 4; break;
        }
    }while (option != 13);
    switch (j) {
        case 0:
            cls();
    		stockFunc();
         
            break;
        case 1:
            cls();
            staffFunc();
         	
            break;
        case 2:
            cls();
            bookFunc();
            
            break;
        case 3:
        	cls();
            backgroundFunc();
            break;
        case 4:
        	cls();
        	exit(0);
        default:
        	exit(0);
    }
}
//-----------------------
//---Function of stock---
//----------------------
void stockFunc(){
	int option;
	static int j=0;
	main:
	do{	
		gotoxy(10,2);foreColor(3);cout<<"Norton university";
		gotoxy(10,31);foreColor(3);cout<<"Create by : Khann Teymeta";
		for(int i=0;i<110;i++){
			gotoxy(9+i,3);foreColor(3);cout<<char(196);
		}
		for(int i=0;i<110;i++){
			gotoxy(9+i,30);foreColor(3);cout<<char(196);
		}
	
		foreColor(8);drawRec(9,4,55,25,"");
		foreColor(7);drawRec(10,4,24,25,"");
		foreColor(8);drawRec(11,4,23,25,"");
	
		foreColor(7);drawRec(14,5,20,2,"");
		foreColor(8);drawRec(14,8,20,2,"");
		foreColor(3);drawRec(14,11,20,2,"");
		foreColor(4);drawRec(14,14,20,2,"");
		foreColor(5);drawRec(14,17,20,2,"");
		foreColor(6);drawRec(14,20,20,2,"");
		foreColor(7);drawRec(14,23,20,2,"");
	
		gotoxy(16,6); cout<<" PRODUCT MANAGEMENT SYSTEM";
		gotoxy(16,9); cout<<" 1. Register of product ";
		gotoxy(16,12);cout<<" 2. View all of product   ";
		gotoxy(16,15);cout<<" 3. Search   of product  ";
		gotoxy(16,18);cout<<" 4. Update   of product ";
		gotoxy(16,21);cout<<" 5. Delete   of product ";
		gotoxy(16,24);cout<<" 6. Back to Menu ";
		gotoxy(16,27);cout<<" USE ARROW KEY UP AND DOWN ... :";
		
		if(j == 0){
			foreColor(5);
			gotoxy(16,9); cout<<" 1. Register of product "<<endl;
		}
		if(j== 1){
			foreColor(5);
			gotoxy(16,12);cout<<" 2. View all of product   "<<endl;
		}
		if(j==2){
			foreColor(5);
			gotoxy(16,15);cout<<" 3. Search   of product  "<<endl;
		}
		if(j==3){
			foreColor(5);
			gotoxy(16,18);cout<<" 4. Update   of product "<<endl;
		}
		if(j==4){
			foreColor(5);
			gotoxy(16,21);cout<<" 5. Delete   of product "<<endl;
		}
		if(j==5){
			foreColor(5);
			gotoxy(16,24);cout<<" 6. Back to Menu"<<endl;
		}
		option = getch();
        switch (option) {
            case 80: j++; if (j > 5) j = 0; break;
            case 72: j--; if (j < 0) j = 5; break;
        }

        gotoxy(10,2);foreColor(3);cout<<"Norton university";
		gotoxy(10,31);foreColor(3);cout<<"Create by : Khann Teymeta";
		for(int i=0;i<110;i++){
			gotoxy(9+i,3);foreColor(3);cout<<char(196);
		}
		for(int i=0;i<110;i++){
			gotoxy(9+i,30);foreColor(3);cout<<char(196);
		}
		foreColor(8);drawRec(9,4,55,25,"");
		foreColor(7);drawRec(10,4,24,25,"");
		foreColor(8);drawRec(11,4,23,25,"");
	
		foreColor(7);drawRec(14,5,20,2,"");
		foreColor(8);drawRec(14,8,20,2,"");
		foreColor(3);drawRec(14,11,20,2,"");
		foreColor(4);drawRec(14,14,20,2,"");
		foreColor(5);drawRec(14,17,20,2,"");
		foreColor(6);drawRec(14,20,20,2,"");
		foreColor(7);drawRec(14,23,20,2,"");
	
		gotoxy(16,6); cout<<" PRODUCT MANAGEMENT SYSTEM";
		gotoxy(16,9); cout<<" 1. Register of product ";
		gotoxy(16,12);cout<<" 2. View all of product   ";
		gotoxy(16,15);cout<<" 3. Search   of product  ";
		gotoxy(16,18);cout<<" 4. Update   of product ";
		gotoxy(16,21);cout<<" 5. Delete   of product ";
		gotoxy(16,24);cout<<" 6. Back to Menu ";
		gotoxy(16,27);cout<<" USE ARROW KEY UP AND DOWN ... :";
		
		if(j == 0){
			foreColor(5);
			gotoxy(16,9); cout<<" 1. Register of product "<<endl;
		}
		if(j== 1){
			foreColor(5);
			gotoxy(16,12);cout<<" 2. View all of product   "<<endl;
		}
		if(j==2){
			foreColor(5);
			gotoxy(16,15);cout<<" 3. Search   of product  "<<endl;
		}
		if(j==3){
			foreColor(5);
			gotoxy(16,18);cout<<" 4. Update   of product "<<endl;
		}
		if(j==4){
			foreColor(5);
			gotoxy(16,21);cout<<" 5. Delete   of product "<<endl;
		}
		if(j==5){
			foreColor(5);
			gotoxy(16,24);cout<<" 6. Back to Menu"<<endl;
		}
		option = getch();
        switch (option) {
            case 80: j++; if (j > 5) j = 0; break;
            case 72: j--; if (j < 0) j = 5; break;
        }
        
	}while(option !=13 );
		switch(j){
			
			case 0:{
				
				RegisterProduct();
//				getch();
				system("cls");
				goto main;
				break;
			}
			case 1:{
				system("cls");
				ViewAllProduct();
				getch();
				system("cls");
				goto main;
				break;
			}
			case 2:{
				SearchProduct();
	        	getch();
				system("cls");
				goto main;
				break;
			}
			case 3:{
				
				UpdateProduct();
				getch();
				system("cls");
				goto main;
				break;
			}
			case 4:{
				
				DeleteProduct();
				getch();
				system("cls");
				goto main;
				break;
			}
			case 5:{
				system("cls");
				back();
				break;
			}	
		}
}

//---------------------------
//-------Function of stock---
//---------------------------

void staffFunc(){
	int option;
	static int j=0;
	main:
	do{
		gotoxy(10,2);foreColor(3);cout<<"Norton university";
		gotoxy(10,31);foreColor(3);cout<<"Create by : Khann Teymeta";
		for(int i=0;i<110;i++){
			gotoxy(9+i,3);foreColor(3);cout<<char(196);
		}
		for(int i=0;i<110;i++){
			gotoxy(9+i,30);foreColor(3);cout<<char(196);
		}
		foreColor(8); drawRec(10,5,20,2,"");
		foreColor(9); drawRec(10,8,20,2,"");
		foreColor(2); drawRec(10,11,20,2,"");
		foreColor(3); drawRec(10,14,20,2,"");
		foreColor(4); drawRec(10,17,20,2,"");
		foreColor(6); drawRec(10,20,20,2,"");
		foreColor(3); drawRec(10,23,20,2,"");
//		drawRec(10,26,15,2,"");
		
		gotoxy(13,6); foreColor(7);cout<<" STAFF MANAGEMENT SYSTEM";
		gotoxy(13,9); foreColor(7);cout<<" 1. Register of staff ";
		gotoxy(13,12);foreColor(7);cout<<" 2. View all of staff   ";
		gotoxy(13,15);foreColor(7);cout<<" 3. Search   of staff  ";
		gotoxy(13,18);foreColor(7);cout<<" 4. Update   of staff ";
		gotoxy(13,21);foreColor(7);cout<<" 5. Delete   of staff ";
		gotoxy(13,24);foreColor(7);cout<<" 6. Back to Menu ";
		gotoxy(11,27);foreColor(7);cout<<" USE ARROW KEY UP AND DOWN ...";
		
		if(j == 0){
			foreColor(5);
			gotoxy(13,9); cout<<" 1. Register of staff ";
		}
		if(j == 1){
			foreColor(5);
			gotoxy(13,12);cout<<" 2. View all of staff   ";
		}
		if(j == 2){
			foreColor(5);
			gotoxy(13,15);cout<<" 3. Search   of staff  ";
		}
		if(j == 3){
			foreColor(5);
			gotoxy(13,18);cout<<" 4. Update   of staff ";
		}
		if(j == 4){
			foreColor(5);
			gotoxy(13,21);cout<<" 5. Delete   of staff ";
		}
		if(j == 5){
			foreColor(5);
			gotoxy(13,24);cout<<" 6. Back to Menu";
		}
		option = getch();
        switch (option) {
            case 80: j++; if (j > 5) j = 0; break;
            case 72: j--; if (j < 0) j = 5; break;
        }
	}while(option !=13);
				
		switch(j){
			case 0:{					
				RegisterStaff();
				getch();
				system("cls");
				goto main;
				break;
			}
			case 1:{
				system("cls");
				ViewAllStaff();
				getch();
				system("cls");
				goto main;
				break;
			}
			case 2:{
				
				SearchStaff();
				getch();
				system("cls");
				goto main;
				break;
			}
			case 3:{
				UpdateStaff();
				getch();
				system("cls");
				goto main;
				break;
			}
			case 4:{
				DeleteStaff();
				getch();
				system("cls");
				goto main;
				break;
			}
			case 5:{
				system("cls");
				back();
				break;
			}

		}
					
   
}
//----------------------------------
//--------Function of book store----
//----------------------------------
void bookFunc(){
	int option;
	static int j=0;
	main:
	do{
		st._ANT();
	
		foreColor(8);drawRec(42,8,20,2,"");
		foreColor(8);drawRec(42,11,20,2,"");
		foreColor(8);drawRec(42,14,20,2,"");	
		foreColor(8);drawRec(42,17,20,2,"");	

		gotoxy(57,9);foreColor(7);cout<<"BOOK STORE ";
		gotoxy(57,12);foreColor(7);cout<<"BUY BOOK  ";
		gotoxy(57,15);foreColor(7);cout<<"INVOICE   ";
		gotoxy(57,18);foreColor(7);cout<<"Back to menu";
	
		gotoxy(45,20);foreColor(7);cout<<" USE ARROW KEY UP AND DOWN ...";
		
		
		gotoxy(10,1);foreColor(3);cout<<"Norton university";
		gotoxy(10,31);foreColor(3);cout<<"Create by : Khann Teymeta";
		for(int i=0;i<110;i++){
			gotoxy(9+i,2);foreColor(3);cout<<char(196);
		}
		for(int i=0;i<110;i++){
			gotoxy(9+i,30);foreColor(3);cout<<char(196);
		}
		
		if(j == 0){
			foreColor(5);
			gotoxy(57,9);cout<<"BOOK STORE  ";
		}
		if(j == 1){
			foreColor(5);
			gotoxy(57,12);cout<<"BUY BOOK  ";
			
		}
		if(j == 2){
			foreColor(5);
			gotoxy(57,15);cout<<"INVOICE    ";
		}
		if(j == 3){
			foreColor(5);
			gotoxy(57,18);cout<<"Back to menu";
		}
		

	
		option = getch();
        switch (option) {
            case 80: j++; if (j > 3) j = 0; break;
            case 72: j--; if (j < 0) j = 3; break;
        }
	}while(option !=13);
	switch(j){
		case 0:{
			system("cls");
			ViewStock();
			getch();
			system("cls");
			goto main;
			break;
		}
		case 1:{
			system("cls");
			ViewStock();
			BuyBook();
			getch();
			system("cls");
			goto main;
			break;
		}
	
		case 2:{
			system("cls");
			InvoiceBook();
			getch();
			system("cls");
			goto main;
			break;
		}
		case 3:{
			system("cls");
			back();
			break;
		}
	
	}
}

//----------------------------------
//----------Function of backgroud---
//----------------------------------

void backgroundFunc(){
	for(int i=0;i<60;i++){
		for(int j=0;j<20;j++){
			gotoxy(35+i,8+j);foreColor(3);cout<<char(219);
		}
	}
	DrawRectangle(35,7,60,19,3);
	delay(1000);
	DrawRectangle(36,8,58,17,3);
	delay(1000);
	DrawRectangle(38,9,54,16,3);
	
	
	gotoxy(60,1);foreColor(3);cout<<"\3";
	gotoxy(17,6);foreColor(4);cout<<"\3";
	gotoxy(60,1);foreColor(4);cout<<"\3";
	gotoxy(13,10);foreColor(3);cout<<"\3";
	gotoxy(106,7);foreColor(9);cout<<"\3";
	gotoxy(26,20);foreColor(9);cout<<"\3";
	gotoxy(98,14);foreColor(6);cout<<"\3";
	gotoxy(100,24);foreColor(9);cout<<"\3";

	gotoxy(44,2);foreColor(7);cout<<"  __   ____   __   _  _  ____    _  _  ____  ";
	gotoxy(44,3);foreColor(7);cout<<" / _\\ (  _ \\ /  \\ / )( \\(_  _)  ( \\/ )(  __) ";
	gotoxy(44,4);foreColor(7);cout<<"/    \\ ) _ ((  O )) \\/ (  )(    / \\/ \\ ) _)  ";
	gotoxy(44,5);foreColor(8);cout<<"\\_/\\_/(____/ \\__/ \\____/ (__)   \\_)(_/(____)  ";
	gotoxy(80,7);foreColor(3);cout<<" \3";
	gotoxy(50,7);foreColor(3);cout<<"\3 ";
	gotoxy(82,8);foreColor(3);cout<<" \3";
	gotoxy(48,8);foreColor(3);cout<<"\3 ";
	gotoxy(84,9);foreColor(3);cout<<" \3";
	gotoxy(46,9);foreColor(3);cout<<"\3 ";
	gotoxy(50,28);foreColor(3);cout<<"\3 ";


	gotoxy(53,11);foreColor(177);cout<<"My name is Khann Teymeta";
	gotoxy(42,13);foreColor(177);cout<<"\4 I study at Norton University";
	gotoxy(42,15);foreColor(177);cout<<"\4 I want to be Web developer\3";
	gotoxy(42,17);foreColor(177);cout<<"\4 I am interesting with content creator...\5 ";
	gotoxy(42,19);foreColor(177);cout<<"\4 I am from Battambang provine";
	gotoxy(42,21);foreColor(177);cout<<"    (Preah Monyvong High School) ";
	gotoxy(50,29);
	getch();


}

