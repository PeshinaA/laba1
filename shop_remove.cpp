#include "shop_struct.h"

int rremove(char * name, cosmetic mass[], int size){

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
	int i;
	
	ifstream f(name);
	if (!f.is_open()){
		cout<<"Cannot open file."<<endl;
		return 1;
	}

	int rm_i, k = 0;
	for(i = 0; i < size; i++){
		if ((type == mass[i].type) && (color == mass[i].color) && (price == mass[i].price) && (place == mass[i].place)){
			rm_i = i;
			k++;
		}
	}
	if(k != 0){
		ofstream newf(name, ios::trunc);
		if (!newf.is_open()){
			cout<<"Cannot open file."<<endl;
			return 1;
		}
		
		for(i = rm_i; i < size; i++){
			mass[i] = mass[i+1];
		}
		size--;
		for(i = 0; i < size; i++){
			newf<<mass[i];
		}
		newf.close();
	
		cout<<" Product removed."<<endl;
	}else
		cout<<" Product not found."<<endl;
	menu(name, mass, size);
}
