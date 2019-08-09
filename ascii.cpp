#include <iostream>
#include <cstdio>
#include <stdio.h>


/* 

jorge Eduardo Suchite Martinez
carnet 15293
7/08/2019
programa que sirve para convertir decimal a octa char y medio funcional el hexa
*/

using namespace std;

void convert(int, int);

//definiendo variables para crear las funciones 
int decoctal(int list);
int decexa(int list);

int main()
{
// loop para sacar los numeros requeridos en el laboratorio

// aplicacion del tablero del tipo de numero y caracter ASCII


	cout << "DECIMAL  HEXA  OCTA CHAR \n";
	cout << "------------------------- \n";
	int r = 1;
	int list= 31;
	while (list < 122){
	list += r;
	
	 

	

// la palabra reservada char indica que tipo de valor ASCII tiene al momento de obtener el numero de la variable list


	cout<<"\n"<<  list<<"        "<< decexa(list) <<"     "<<  decoctal(list) <<"  "<< (char)list;
	}
	return 0;

}


// funciones para convertir las cosas papu 


int decoctal(int list)
{
// decimal a octal


	int pas, i =1 , octalnum =0;
	while (list !=0)
	{	

	pas = list % 8;
	list /= 8;
	octalnum += pas*i;
	i*=10;
	}
	return octalnum;
}

int decexa(int list)
{


// decimal a hexa 

	int pas12, i =1, hexanum=0;
	while(list != 0)
	{
	
	pas12 = list %16;
	if(pas12 <10){
	hexanum = pas12 +48;} 
	
	else{
		hexanum = pas12 + 55;
		}
	list = pas12;
	list = list / 16;
}	
	return hexanum;
}