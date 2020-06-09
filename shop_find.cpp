#include "shop_struct.h"

int find(char * name, cosmetic mass[], int size){
	int n;
	string s;
	int p;
	int k = 0;
	cout<<"[1]Find by type."<<endl;
	cout<<"[2]Find by color"<<endl;
	cout<<"[3]Find by place."<<endl;
	cout<<"[4]Find by price."<<endl;
	cout<<" >Enter the number: ";
	cin>>n;
	
	if (n == 1){
		cout<<"\n >Enter type: ";
		cin>>s;
		for(int i =0; i<size+1; i++){
			if (s==mass[i].type) {
				k++;
				cout<<mass[i];
			}
		}
		if (k == 0)
			cout<<"  No products found."<<endl;
	}else if (n == 2){
		cout<<"\n >Enter color: ";
		cin>>s;
		for(int i =0; i < size; i++){
			if (s==mass[i].color) {
				k++;
				cout<<mass[i];
			}
		}
		if (k == 0)
			cout<<"  No products found."<<endl;
	}else if (n == 4){
		cout<<"\n >Enter price: ";
		cin>>p;
		for(int i =0; i < size; i++){
			if (p == mass[i].price) {
				k++;
				cout<<mass[i];
			}
		}
		if (k == 0)
			cout<<"  No products found."<<endl;
	}else if (n == 3){
		cout<<"\n >Enter place: ";
		cin>>p;
		for(int i =0; i < size; i++){
			if (p == mass[i].place) {
				k++;
				cout<<mass[i];
			}
		}
		if (k == 0)
			cout<<"  No products found."<<endl;
	}else {
		cout<<"  Please, enter a number from 1 to 4."<<endl;
		cin>>n;
	}
	menu(name, mass, size);
}
