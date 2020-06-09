#include "shop_struct.h"

ostream &operator<<(ostream &out, const cosmetic &c){
	out<<"Type: "<<c.type<<endl;
	out<<"Color: "<<c.color<<endl;
	out<<"Place: "<<c.place<<endl;
	out<<"Price: "<<c.price<<endl;
	out<<"-------------------------"<<endl;
	return out;
}
istream &operator>>(istream &in, cosmetic &c){
	cout<<"Type: ";
	in>>c.type;
	cout<<"Color: ";	
	in>>c.color;
	cout<<"Place: ";
	in>>c.place;
	cout<<"Price: ";
	in>>c.price;
	cout<<"-------------------------"<<endl;	
	return in;
}

int main(int argc, char* argv[]){
	if(argc < 2){
		cout<<"Error. Enter file name."<<endl;
		return 1;
	}
	cout<<" Welcome to the cosmetic shop!"<<endl;

	char *name = argv[1];
	int size = 0;

	cosmetic * mass = new cosmetic[size];

	menu(name, mass, size);

	return 0;
}
