#include <iostream>
#include <fstream>
#include <string>
#include <new>
#include <cstdlib>
using namespace std;
class cosmetic{
public:
	int place;
	int price;
	string type;
	string color;
	friend ostream &operator<<(ostream &out, const cosmetic &obj);
	friend istream &operator>>(istream &in, cosmetic &obj);
};

void menu(char * name, cosmetic mass[], int size);
int add(char * name, cosmetic mass[], int size);
int pprint(char * name, cosmetic mass[], int size);
void clear(char * name, cosmetic mass[], int size);
int rremove(char * name, cosmetic mass[], int size);
int find(char * name, cosmetic mass[], int size);
int edit(char * name, cosmetic mass[], int size);

