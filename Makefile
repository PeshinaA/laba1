all: shop

shop: main.o functions.o find.o remove.o edit.o
	g++ edit.o find.o remove.o functions.o main.o -o shop

functions.o: shop_functions.cpp
	g++ shop_functions.cpp -c -o functions.o

main.o: shop_main.cpp
	g++ shop_main.cpp -c -o main.o

find.o: shop_find.cpp
	g++ shop_find.cpp -c -o find.o

remove.o: shop_remove.cpp
	g++ shop_remove.cpp -c -o remove.o

edit.o: shop_edit.cpp
	g++ shop_edit.cpp -c -o edit.o
