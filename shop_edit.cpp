#include "shop_struct.h"

int edit(char * name, cosmetic mass[], int size){
	int n;
	string s;
	int p;
	
	cout<<" >Enter product: "<<endl;
	string type, color;
	int price, place;
	cout<<"Type: ";
	cin>>type;
	cout<<"Color: ";
	cin>>color;
	cout<<"Place: ";
	cin>>place;
	cout<<"Price: ";
	cin>>price;

	int rm_i, k = 0;
	for(int i = 0; i < size; i++){
		if ((type == mass[i].type) && (color == mass[i].color) && (price == mass[i].price) && (place == mass[i].place)){
			rm_i = i;
			k++;
		}
	}

	if(k != 0){

		cout<<"[1]Edit full."<<endl;
		cout<<"[2]Edit type."<<endl;
		cout<<"[3]Edit color"<<endl;
		cout<<"[4]Edit place."<<endl;
		cout<<"[5]Edit price."<<endl;
		cout<<" >Enter the number: ";
		cin>>n;

		if (n == 1){
			cin>>mass[rm_i];
		}else if (n == 2){
			cout<<" >Enter type: ";
			cin>>mass[rm_i].type;
		}else if (n == 3){
			cout<<" >Enter color: ";	
			cin>>mass[rm_i].color;	
		}else if (n == 4){
			cout<<" >Enter place: ";
			cin>>mass[rm_i].place;
		}else if (n == 5){
			cout<<" >Enter price: ";
			cin>>mass[rm_i].price;
		}else{		
			cout<<"  Please, enter a number from 1 to 5."<<endl;
			cin>>n;	
		}
	
		ofstream newf(name, ios::trunc);
		if (!newf.is_open()){
			cout<<"Cannot open file."<<endl;
			return 1;
		}
		
		for(int i = 0; i < size; i++){
			newf<<mass[i];
		}
		newf.close();
	
		cout<<" Product edit."<<endl;
	}else
		cout<<" Product not found."<<endl;
	menu(name, mass, size);
}
