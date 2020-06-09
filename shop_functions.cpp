#include "shop_struct.h"

void menu(char * name, cosmetic mass[], int size){

	cout<<"  What do you want to do?"<<endl;
	cout<<"[1] Add product."<<endl;
	cout<<"[2] Print all products."<<endl;
	cout<<"[3] Remove product."<<endl;
	cout<<"[4] Find product."<<endl;
	cout<<"[5] Edit product."<<endl;
	cout<<"[6] Clear file."<<endl;
	cout<<"[7] Exit."<<endl;
	cout<<" >Enter the number: ";
	
	int number;
	cin>>number;
	switch(number){
		case 1:
			add(name, mass, size);
			break;
		case 2:
			pprint(name, mass, size);
			break;
		case 3:
			rremove(name, mass, size);
			break;
		case 4:
			find(name, mass, size);
			break;
		case 5:
			edit(name, mass, size);
			break;
		case 6:
			clear(name, mass, size);
			menu(name, mass, size);
			break;
		case 7:
			clear(name, mass, size);
			delete [] mass;
			cout<<"  Goodbye."<<endl;
			exit(0);

		default:
			cout<<"  Please, enter the number for 1 to 7."<<endl;
			break;
	}
}

void clear(char * name, cosmetic mass[], int size){
	ofstream f(name, ios_base::trunc);
	f.close();
}

int add(char * name, cosmetic mass[], int size){
	cout<<"  How many(>0): ";
	int n;
	cin>>n;
	if(n < 1){
		cout<<"  Please, enter the number > 0."<<endl;
		cout<<"  How many(>0): ";
		cin>>n;
	}

	cosmetic *new_mass = new cosmetic[size+n];
	for(int i = 0; i < size; i++){
		new_mass[i] = mass[i];
	}
	delete[] mass;
	mass = new_mass;
	size += n;

	cout<<"   Please enter information."<<endl;
	
	for(int i = (size - n); i < size; i++){
		cin>>mass[i];
	}

	ofstream f(name, ios_base::app);
	if (!f.is_open()){
		cout<<"Cannot open file."<<endl;
		return 1;
	}
	for(int i = (size - n); i < size; i++){
		f<<mass[i];
	}

	f.close();
	cout<<"  Product added."<<endl;
	menu(name, mass, size);
}

int pprint(char * name, cosmetic mass[], int size){

	for(int i = 0; i<size; i++){
		cout<<mass[i];
	}

	menu(name, mass, size);
}
