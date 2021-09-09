#include <iostream>
#include <math.h>
#include <cstring>
#include <stdlib.h>
#include <conio.h>
#include<windows.h>
#include<string.h>
using namespace std;
	void gotoxy(int ejeX, int ejeY){
		cout<<"\nINSTRUCCIONES: "<<endl;
		cout<<"Presione 'w' si desea moverse hacia arriba"<<endl;
		cout<<"Presione 's' si desea moverse hacia abajo"<<endl;
		cout<<"Presione 'a' si desea moverse hacia la izquierda"<<endl;
		cout<<"Presione 'd' si desea moverse hacia la derecha"<<endl;
		cout<<"Presione 'm' para desplegar el menu\n\n\n\n\n\n\n\n\n\n"<<endl;
	HANDLE  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = ejeX;
	dwPos.Y = ejeY;
	SetConsoleCursorPosition(hcon, dwPos);	
}

char option;
int x =10, y = 10;
main (){
int Menu;
cout <<" ***** SELECCIONE UN PROGRAMA ***** "<<endl;
cout <<"\n1.  CAJERO AUTOMATICO (SIMULADOR)"<<endl;
cout <<"2.  CALCULADORA DE HIPOTENUSA"<<endl;
cout <<"3.  CONVERSOR DE NUMEROS (ARABIGOS A ROMANOS)"<<endl;
cout <<"4.  CONVERSOR DE NUMEROS (DECIMALES A BINARIOS)"<<endl;
cout <<"5.  CONVERSOR DE NUMEROS (DECIMALES A HEXADECIMALES)"<<endl;
cout <<"6.  CONVERSOR DE NUMEROS (ENTEROS A LETRAS)"<<endl;
cout <<"7.  CONVERSOR DE NUMEROS (ENTEROS CON DECIMALES A LETRAS)"<<endl;
cout <<"8.  CONVERSOR DE UNIDADES"<<endl;
cout <<"9.  DETERMINAR SI UN NUMERO ES PAR O IMPAR"<<endl;
cout <<"10. FIGURAS GEOMETRICAS BASICAS"<<endl;
cout <<"11. MOVER UN PUNTO POR LA PANTALLA"<<endl;
cout <<"12. MULTIPLICACION MANUAL (FORMA GRAFICA)"<<endl;
cout <<"13. PALINDROMOS (PALABRAS Y NUMEROS)"<<endl;
cout <<"14. SUMA, RESTA, MULTIPLICACION Y DIVISION DE DOS NUMEROS"<<endl;
cout <<"15. TABLA DE MULTIPLICAR (DEL NUMERO QUE DESEE)"<<endl;
cout <<"16. TABLAS DE MULTIPLICAR DEL 1 - 10"<<endl;
cout <<"17. CALCULAR LA FACTORIAL DE UN NUMERO"<<endl;
cout <<"18. MATRIZ TRANSPUESTA 3x3"<<endl;
cout <<"19. SUMA DE DOS MATRICES 3x3"<<endl;
cout <<"20. SERIE FIBONACCI"<<endl;
cout <<"\nIngrese un numero: ";
cin>>Menu;
switch (Menu){
	case 1: cout <<"\n1.  CAJERO AUTOMATICO (SIMULADOR)"<<endl;
	string card, name;
	int operation, deposit, balance, newbalance, withdraw, salir1;
	string code = "";
	balance = 75235;
	char star;
	cout<<"---------- CAJERO 5B ----------\n\n"<<endl;
	cout<<"Ingrese su nombre: "; cin>>name;
	cout<<"Digite su numero de tarjeta: "; cin>>card;
	cout<<"Digite su codigo de seguridad: "; 
	star = _getch ();
	while (star != 13){
		code.push_back(star);
		cout<<'*';
		star = _getch();
	}
	cout<<"\n\n----- Bienvenido "<<name<<" -----"<<endl;
	cout<<name<<" tu saldo actual es de: Q. "<<balance<<".00\n\n"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; 
	cin>>operation;
	
		switch(operation){
		case 1: cout<<"\nCuanto dinero desea ingresar en cuenta: "; 
				cin>>deposit;
				
				newbalance = balance + deposit;
				cout<<"\nDinero en cuenta: "<<newbalance<<"\n"; break;
		case 2: cout<<"\nCuanto dinero desea retirar: "; 
				cin>>withdraw;
				if(withdraw > balance){
					cout<<"No cuenta con esa cantidad";
				}
				else{
					newbalance = balance - withdraw;
					cout<<"\nSu nuevo saldo en la cuenta es de: "<<newbalance<<"\n"; break;
				} 
		case 3: break;
		dafault: cout<<"Se equivoco de opcion de menu";break;
	}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir1;
	if (salir1== 1){
	return main();
	}
	else {
	return 0;
	}
	break;}
	switch (Menu){
	case 2: cout <<"\n2.  CALCULADORA DE HIPOTENUSA"<<endl;
	int opuesto, adyacente, hipotenusa, salir2;
	cout<<"Digite valor para cateto opuesto: ";
	cin>>opuesto;
	cout<<"Digite valor para cateto adyacente: ";
	cin>>adyacente;
	hipotenusa = sqrt((opuesto * opuesto) + (adyacente * adyacente));
	cout<<"La Hipotenusa es: "<<hipotenusa<<endl;
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir2;
	if (salir2== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	case 3: cout <<"\n3.  CONVERSOR DE NUMEROS (ARABIGOS A ROMANOS)"<<endl;
	int arabigo, unidades, decenas, centenas, millar, salir3;
	cout<<"Los numeros arabigos modernos son los siguientes: 1, 2, 3, 4, 5, 6, 7, 8, 9 y 0"<<endl;
	cout<<"Ingrese cantidad en numero arabigo: ";
	cin>>arabigo;
	unidades = arabigo%10; arabigo/= 10;
	decenas = arabigo%10; arabigo/= 10;
	centenas = arabigo%10; arabigo/= 10;
	millar = arabigo%10; arabigo/= 10;
		switch(millar){
			case 1: cout<<"M"; break;
			case 2: cout<<"MM"; break;
			case 3: cout<<"MMM"; break;
		}
		switch(centenas){
			case 1: cout<<"C"; break;
			case 2: cout<<"CC"; break;
			case 3: cout<<"CCC"; break;
			case 4: cout<<"CD"; break;
			case 5: cout<<"D"; break;
			case 6: cout<<"DC"; break;
			case 7: cout<<"DCC"; break;
			case 8: cout<<"DCCC";	break;
			case 9: cout<<"CM"; break;
		}
				switch(decenas){
			case 1: cout<<"X"; break;
			case 2: cout<<"XX"; break;
			case 3: cout<<"XXX"; break;
			case 4: cout<<"XL"; break;
			case 5: cout<<"L"; break;
			case 6: cout<<"LX"; break;
			case 7: cout<<"LXX"; break;
			case 8: cout<<"LXXX";break;
			case 9: cout<<"XC"; break;
		}
				switch(unidades){
			case 1: cout<<"I"; break;
			case 2: cout<<"II"; break;
			case 3: cout<<"III"; break;
			case 4: cout<<"IV"; break;
			case 5: cout<<"V"; break;
			case 6: cout<<"VI"; break;
			case 7: cout<<"VII"; break;
			case 8: cout<<"VIII";break;
			case 9: cout<<"IX"; break;
		}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir3;
	if (salir3== 1){
	return main();
	}
	else {
	return 0;
	}	
	break;
	
	case 4: cout <<"4.  CONVERSOR DE NUMEROS (DECIMALES A BINARIOS)"<<endl;
	int decimal, salir4;
	short binario[8];
	cout<<"Ingrese numero decimal a convertir: ";
	cin>>decimal;
	for (int i = 0; i < 8; i++){
		binario[i] = decimal % 2;
		decimal /= 2;	}
	cout<<"El numero en binario es: "<<endl;
	for (int i = 7 ; i >= 0; i--){
		cout<<binario[i];	}
	cout<<endl;
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir4;
	if (salir4== 1){
	return main();
	}
	else {
	return 0;
	}	
	break;
	
	case 5: cout <<"5.  CONVERSOR DE NUMEROS (DECIMALES A HEXADECIMALES)"<<endl;
		int hexadecimal[20];
	int numdec, residuo, resultado, i, salir5;
	cout<<"Introduce numero decimal a convertir: ";
	cin>>numdec;
	do {
		residuo = numdec % 16;
		resultado = numdec / 16;
		hexadecimal[i] = residuo;
		numdec = resultado;
		i++;
	}while (resultado > 15);
	hexadecimal[i] = resultado;
	cout<<"El equivalente en hexadecimal es: ";
for (int j = i; j >= 0; j--){
	switch (hexadecimal[j]){
	case 10: cout<<"A"; break;
	case 11: cout<<"B"; break;
	case 12: cout<<"C"; break;
	case 13: cout<<"D"; break;
	case 14: cout<<"E"; break;
	case 15: cout<<"F"; break;
	default: cout << hexadecimal[j];}}
    cout<<endl;
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir5;
	if (salir5== 1){
	return main();
	}
	else {
	return 0;
	}	
	break;
	
	case 6: cout <<"6.  CONVERSOR DE NUMEROS (ENTEROS A LETRAS)"<<endl;
	int a, salir6;
	cout<<"Ingrese cantidad en numeros: ";
	cin>>a;
if((a<1)||(a>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else    {
        if(a>=900)   {cout<<"NOVECIENTOS " ;a=a-900;}
       else if(a>=800)   {cout<<"OCHOCIENTOS " ;a=a-800;}
       else if(a>=700)   {cout<<"SETECIENTOS " ;a=a-700;}
       else if(a>=600)   {cout<<"SEISCIENTOS " ;a=a-600;}
       else if(a>=500)   {cout<<"QUINIENTOS "  ;a=a-500;}
       else if(a>=400)   {cout<<"CUATROCIENTOS "   ;a=a-400;}
       else if(a>=300)   {cout<<"TRESCIENTOS " ;a=a-300;}
       else if(a>=200)   {cout<<"DOSCIENTOS "  ;a=a-200;}
       else if(a>100)    {cout<<"CIENTO "  ;a=a-100;}
       else if(a==100)  {cout<<"CIEN"     ;a=a-100;}
        if(a>90) {cout<<"NOVENTA Y "   ;a=a-90; }
            if(a==90)   {cout<<"NOVENTA"  ;a=a-90; }  
            if(a>80) {cout<<"OCHENTA Y "   ;a=a-80; }
            if(a==80)   {cout<<"OCHENTA"  ;a=a-80; }
            if(a>70) {cout<<"SETENTA Y "   ;a=a-70; }
            if(a==70)   {cout<<"SETENTA"  ;a=a-70; }
            if(a>60) {cout<<"SESENTA Y "   ;a=a-60; }
            if(a==60)   {cout<<"SESENTA"  ;a=a-60; }
            if(a>50) {cout<<"CINCUENTA Y " ;a=a-50; }
            if(a==50)   {cout<<"CINCUENTA"    ;a=a-50; }
            if(a>40) {cout<<"CUARENTA Y "  ;a=a-40; }
            if(a==40)   {cout<<"CUARENTA" ;a=a-40; }
            if(a>30) {cout<<"TREINTA Y "   ;a=a-30; }
            if(a==30)   {cout<<"TREINTA"  ;a=a-30; }
            if(a>20) {cout<<"VEINTI"       ;a=a-20; }
            if(a==20)   {cout<<"VEINTE"       ;a=a-20; }
        if(a>=16)    {cout<<"DIECI"        ;a=a-10; }
       else if(a==15)   {cout<<"QUINCE"       ;a=a-15; }
       else if(a==14)   {cout<<"CATORCE"  ;a=a-14; }
       else if(a==13)   {cout<<"TRECE"        ;a=a-13; } 
       else if(a==12)   {cout<<"DOCE"     ;a=a-12; }
       else if(a==11)   {cout<<"ONCE"     ;a=a-11; }
       else if(a==10)   {cout<<"DIEZ"     ;a=a-10; }      
        if(a==9)    {cout<<"NUEVE"        ;a=a-9;  }
        if(a==8)    {cout<<"OCHO"     ;a=a-8;  }
        if(a==7)    {cout<<"SIETE"        ;a=a-7;  }
            if(a==6)    {cout<<"SEIS"     ;a=a-6;  }
       else if(a==5)    {cout<<"CINCO"        ;a=a-5;  }
       else if(a==4)    {cout<<"CUATRO"       ;a=a-4;  }
       else if(a==3)    {cout<<"TRES"     ;a=a-3;  }
       else if(a==2)    {cout<<"DOS"      ;a=a-2;  }
       else if(a==1)    {cout<<"UNO"      ;a=a-1;  }
       }
    cout<<endl;
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir6;
	if (salir6== 1){
	return main();
	}
	else {
	return 0;
	}	
	break;
	
	case 7: cout <<"7.  CONVERSOR DE NUMEROS (ENTEROS CON DECIMALES A LETRAS)"<<endl;
	int b, decimaaal;
	int salir7;
	cout<<"Ingrese cantidad en numeros enteros: "; cin>>b;
	cout<<"ingrese cantidad en numeros decimales: ";cin>>decimaaal;
	
	cout<<"\n"<<b<<"."<<decimaaal<<endl;
	if((b<1)||(b>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else    {
        if(b>= 900)   {cout<<"NOVECIENTOS " ;b=b-900;}
       else if(b>=800)   {cout<<"OCHOCIENTOS " ;b=b-800;}
       else if(b>=700)   {cout<<"SETECIENTOS " ;b=b-700;}
       else if(b>=600)   {cout<<"SEISCIENTOS " ;b=b-600;}
       else if(b>=500)   {cout<<"QUINIENTOS "  ;b=b-500;}
       else if(b>=400)   {cout<<"CUATROCIENTOS "   ;b=b-400;}
       else if(b>=300)   {cout<<"TRESCIENTOS " ;b=b-300;}
       else if(b>=200)   {cout<<"DOSCIENTOS "  ;b=b-200;}
       else if(b>100)    {cout<<"CIENTO "  ;b=b-100;}
       else if(b==100)  {cout<<"CIEN "     ;b=b-100;}
        if(b>90) {cout<<"NOVENTA Y "   ;b=b-90; }
            if(b==90)   {cout<<"NOVENTA "  ;b=b-90; }  
            if(b>80) {cout<<"OCHENTA Y "   ;b=b-80; }
            if(b==80)   {cout<<"OCHENTA "  ;b=b-80; }
            if(b>70) {cout<<"SETENTA Y "   ;b=b-70; }
            if(b==70)   {cout<<"SETENTA "  ;b=b-70; }
            if(b>60) {cout<<"SESENTA Y "   ;b=b-60; }
            if(b==60)   {cout<<"SESENTA "  ;b=b-60; }
            if(b>50) {cout<<"CINCUENTA Y " ;b=b-50; }
            if(b==50)   {cout<<"CINCUENTA "    ;b=b-50; }
            if(b>40) {cout<<"CUARENTA Y "  ;b=b-40; }
            if(b==40)   {cout<<"CUARENTA " ;b=b-40; }
            if(b>30) {cout<<"TREINTA Y "   ;b=b-30; }
            if(b==30)   {cout<<"TREINTA "  ;b=b-30; }
            if(b>20) {cout<<"VEINTI"       ;b=b-20; }
            if(b==20)   {cout<<"VEINTE "       ;b=b-20; }
        if(b>=16)    {cout<<"DIECI"        ;b=b-10; }
       else if(b==15)   {cout<<"QUINCE "       ;b=b-15; }
       else if(b==14)   {cout<<"CATORCE "  ;b=b-14; }
       else if(b==13)   {cout<<"TRECE "        ;b=b-13; } 
       else if(b==12)   {cout<<"DOCE "     ;b=b-12; }
       else if(b==11)   {cout<<"ONCE "     ;b=b-11; }
       else if(b==10)   {cout<<"DIEZ "     ;b=b-10; }      
        if(b==9)    {cout<<"NUEVE "        ;b=b-9;  }
        if(b==8)    {cout<<"OCHO "     ;b=b-8;  }
        if(b==7)    {cout<<"SIETE "        ;b=b-7;  }
            if(b==6)    {cout<<"SEIS "     ;b=b-6;  }
       else if(b==5)    {cout<<"CINCO "        ;b=b-5;  }
       else if(b==4)    {cout<<"CUATRO "       ;b=b-4;  }
       else if(b==3)    {cout<<"TRES "     ;b=b-3;  }
       else if(b==2)    {cout<<"DOS "      ;b=b-2;  }
       else if(b==1)    {cout<<"UNO "      ;b=b-1;  }
        if(decimaaal>90) {cout<<"PUNTO NOVENTA Y "   ;decimaaal=decimaaal-90; }
            if(decimaaal==90)   {cout<<"PUNTO NOVENTA "  ;decimaaal=decimaaal-90; }  
            if(decimaaal>80) {cout<<"PUNTO OCHENTA Y "   ;decimaaal=decimaaal-80; }
            if(decimaaal==80)   {cout<<"PUNTO OCHENTA "  ;decimaaal=decimaaal-80; }
            if(decimaaal>70) {cout<<"PUNTO SETENTA Y "   ;decimaaal=decimaaal-70; }
            if(decimaaal==70)   {cout<<"PUNTO SETENTA "  ;decimaaal=decimaaal-70; }
            if(decimaaal>60) {cout<<"PUNTO SESENTA Y "   ;decimaaal=decimaaal-60; }
            if(decimaaal==60)   {cout<<"PUNTO SESENTA "  ;decimaaal=decimaaal-60; }
            if(decimaaal>50) {cout<<"PUNTO CINCUENTA Y " ;decimaaal=decimaaal-50; }
            if(decimaaal==50)   {cout<<"PUNTO CINCUENTA "    ;decimaaal=decimaaal-50; }
            if(decimaaal>40) {cout<<"PUNTO CUARENTA Y "  ;decimaaal=decimaaal-40; }
            if(decimaaal==40)   {cout<<"PUNTO CUARENTA " ;decimaaal=decimaaal-40; }
            if(decimaaal>30) {cout<<"PUNTO TREINTA Y "   ;decimaaal=decimaaal-30; }
            if(decimaaal==30)   {cout<<"PUNTO TREINTA "  ;decimaaal=decimaaal-30; }
            if(decimaaal>20) {cout<<"PUNTO VEINTI"       ;decimaaal=decimaaal-20; }
            if(decimaaal==20)   {cout<<"PUNTO VEINTE "       ;decimaaal=decimaaal-20; }
        if(decimaaal>=16)    {cout<<"PUNTO DIECI"        ;decimaaal=decimaaal-10; }
       else if(decimaaal==15)   {cout<<"PUNTO QUINCE "       ;decimaaal=decimaaal-15; }
       else if(decimaaal==14)   {cout<<"PUNTO CATORCE "  ;decimaaal=decimaaal-14; }
       else if(decimaaal==13)   {cout<<"PUNTO TRECE "        ;decimaaal=decimaaal-13; } 
       else if(decimaaal==12)   {cout<<"PUNTO DOCE "     ;decimaaal=decimaaal-12; }
       else if(decimaaal==11)   {cout<<"PUNTO ONCE "     ;decimaaal=decimaaal-11; }
       else if(decimaaal==10)   {cout<<"PUNTO DIEZ "     ;decimaaal=decimaaal-10; }      
        if(decimaaal== 9)    {cout<<"PUNTO NUEVE "        ;decimaaal=decimaaal-9;  }
        if(decimaaal== 8)    {cout<<"PUNTO OCHO "     ;decimaaal=decimaaal-8;  }
        if(decimaaal==7)    {cout<<"PUNTO SIETE "        ;decimaaal=decimaaal-7;  }
            if(decimaaal==6)    {cout<<"PUNTO SEIS "     ;decimaaal=decimaaal-6;  }
       else if(decimaaal==5)    {cout<<"PUNTO CINCO "        ;decimaaal=decimaaal-5;  }
       else if(decimaaal==4)    {cout<<"PUNTO CUATRO "       ;decimaaal=decimaaal-4;  }
       else if(decimaaal==3)    {cout<<"PUNTO TRES "     ; decimaaal = decimaaal - 3; }
       else if(decimaaal==2)    {cout<<"PUNTO DOS "      ; decimaaal = decimaaal - 2;  }
        if (decimaaal == 1 ) {cout<<"PUNTO UNO"; decimaaal = decimaaal - 1;}
       }
       

    cout<<endl;
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir7;
	if (salir7== 1){
	return main();
	}
	else {
	return 0;
	}	
	break;
	
	case 8: cout <<"8.  CONVERSOR DE UNIDADES"<<endl;
	int longmasa, longitud1, longitud2, masa1, masa2, salir8;
	float longitud3, masa3;
	cout<<"Presione 1 si le gustaria convertir unidades de longitud"<<endl;
	cout<<"Presione 2 si le guararia convertir unidades de masa"<<endl;
	cin>>longmasa;
	switch (longmasa){
		case 1: cout<<"\nElija la unidad de longitud a convertir"<<endl; 
			cout<<"1. Kilometros"<<endl;
			cout<<"2. Millas"<<endl;
			cout<<"3. Metros"<<endl;
			cout<<"4. Pulgadas"<<endl;
			cout<<"5. Centimetros"<<endl;
			cin>>longitud1;
			cout<<"INGRESE CANTIDAD: "; cin>>longitud3;
			cout<<"\nElija la unidad de conversion"<<endl; 
			cout<<"1. Kilometros"<<endl;
			cout<<"2. Millas"<<endl;
			cout<<"3. Metros"<<endl;
			cout<<"4. Pulgadas"<<endl;
			cout<<"5. Centimetros"<<endl;
			cin>>longitud2;
			if ((longitud1 == 1) && (longitud2 == 1)){ cout<<"\nEl resultado es "<<longitud3<<" KM"<<endl;}
			if ((longitud1 == 1) && (longitud2 == 2)){ longitud3 = (longitud3*0.621371);cout<<"\nEl resultado es "<<longitud3<<" Millas"<<endl;}
			if ((longitud1 == 1) && (longitud2 == 3)){ longitud3 = (longitud3*1000);cout<<"\nEl resultado es "<<longitud3<<" Mts"<<endl;}
			if ((longitud1 == 1) && (longitud2 == 4)){ longitud3 = (longitud3*39370.1);cout<<"\nEl resultado es "<<longitud3<<" Inches"<<endl;}
			if ((longitud1 == 1) && (longitud2 == 5)){ longitud3 = (longitud3*100000);cout<<"\nEl resultado es "<<longitud3<<" cm"<<endl;}
			if ((longitud1 == 2) && (longitud2 == 1)){ longitud3 = (longitud3*1.60934);cout<<"\nEl resultado es "<<longitud3<<" KM"<<endl;}
			if ((longitud1 == 2) && (longitud2 == 2)){ cout<<"\nEl resultado es "<<longitud3<<" Millas"<<endl;}
			if ((longitud1 == 2) && (longitud2 == 3)){ longitud3 = (longitud3*1609.34);cout<<"\nEl resultado es "<<longitud3<<" Mts"<<endl;}
			if ((longitud1 == 2) && (longitud2 == 4)){ longitud3 = (longitud3*63360);cout<<"\nEl resultado es "<<longitud3<<" Inches"<<endl;}
			if ((longitud1 == 2) && (longitud2 == 5)){ longitud3 = (longitud3*160934);cout<<"\nEl resultado es "<<longitud3<<" cm"<<endl;}
			if ((longitud1 == 3) && (longitud2 == 1)){ longitud3 = (longitud3*0.001);cout<<"\nEl resultado es "<<longitud3<<" KM"<<endl;}
			if ((longitud1 == 3) && (longitud2 == 2)){ longitud3 = (longitud3*0.000621371);cout<<"\nEl resultado es "<<longitud3<<" Millas"<<endl;}
			if ((longitud1 == 3) && (longitud2 == 3)){ cout<<"\nEl resultado es "<<longitud3<<" Mts"<<endl;}
			if ((longitud1 == 3) && (longitud2 == 4)){ longitud3 = (longitud3*39.3701);cout<<"\nEl resultado es "<<longitud3<<" Inches"<<endl;}
			if ((longitud1 == 3) && (longitud2 == 5)){ longitud3 = (longitud3*100);cout<<"\nEl resultado es "<<longitud3<<" cm"<<endl;}
			if ((longitud1 == 4) && (longitud2 == 1)){ longitud3 = (longitud3*2.54e-5);cout<<"\nEl resultado es "<<longitud3<<" KM"<<endl;}
			if ((longitud1 == 4) && (longitud2 == 2)){ longitud3 = (longitud3*1.5783e-5); cout<<"\nEl resultado es "<<longitud3<<" Millas"<<endl;}
			if ((longitud1 == 4) && (longitud2 == 3)){ longitud3 = (longitud3*0.0254);cout<<"\nEl resultado es "<<longitud3<<" Mts"<<endl;}
			if ((longitud1 == 4) && (longitud2 == 4)){ cout<<"\nEl resultado es "<<longitud3<<" Inches"<<endl;}
			if ((longitud1 == 4) && (longitud2 == 5)){ longitud3 = (longitud3*2.54);cout<<"\nEl resultado es "<<longitud3<<" cm"<<endl;}
			if ((longitud1 == 5) && (longitud2 == 1)){ longitud3 = (longitud3*1e-5);cout<<"\nEl resultado es "<<longitud3<<" KM"<<endl;}
			if ((longitud1 == 5) && (longitud2 == 2)){ longitud3 = (longitud3*6.2137e-6);cout<<"\nEl resultado es "<<longitud3<<" Millas"<<endl;}
			if ((longitud1 == 5) && (longitud2 == 3)){ longitud3 = (longitud3*0.01);cout<<"\nEl resultado es "<<longitud3<<" Mts"<<endl;}
			if ((longitud1 == 5) && (longitud2 == 4)){ longitud3 = (longitud3*0.393701);cout<<"\nEl resultado es "<<longitud3<<" Inches"<<endl;}
			if ((longitud1 == 5) && (longitud2 == 5)){ cout<<"\nEl resultado es "<<longitud3<<" cm"<<endl;} ; break;
		case 2: cout<<"\nElija una unidad a convertir"<<endl; 
			cout<<"1. Kilos"<<endl;
			cout<<"2. Libras"<<endl;
			cout<<"3. Onzas"<<endl;
			cin>>masa1;
			cout<<"INGRESE CANTIDAD: "; cin>>masa3;
			cout<<"\nElija la unidad de conversion"<<endl; 
			cout<<"1. Kilos"<<endl;
			cout<<"2. Libras"<<endl;
			cout<<"3. Onzas"<<endl;
			cin>>masa2;
			if ((masa1 == 1) && (masa2 == 1)){ cout<<masa3<<" Kilos"<<endl;}
			if ((masa1 == 1) && (masa2 == 2)){ masa3 = (masa3*2.20462);cout<<"\nEl resultado es "<<masa3<<" Libras"<<endl;}
			if ((masa1 == 1) && (masa2 == 3)){ masa3 = (masa3*35.274);cout<<"\nEl resultado es "<<masa3<<" Onzas"<<endl;}
			if ((masa1 == 2) && (masa2 == 1)){ masa3 = (masa3*0.453592);cout<<"\nEl resultado es "<<masa3<<" Kilos"<<endl;}
			if ((masa1 == 2) && (masa2 == 2)){ cout<<"\nEl resultado es "<<masa3<<" Libras"<<endl;}
			if ((masa1 == 2) && (masa2 == 3)){ masa3 = (masa3*16);cout<<"\nEl resultado es "<<masa3<<" Onzas"<<endl;}
			if ((masa1 == 3) && (masa2 == 1)){ masa3 = (masa3* 0.0283495); cout<<"\nEl resultado es "<<masa3<<" Kilos"<<endl;}
			if ((masa1 == 3) && (masa2 == 2)){ masa3 = (masa3*0.0625);cout<<"\nEl resultado es "<<masa3<<" Libras"<<endl;}
			if ((masa1 == 3) && (masa2 == 3)){ cout<<"\nEl resultado es "<<masa3<<" Onzas"<<endl;}; break;
		default : cout<<"Seleccion invalida"<<endl;
				cout<<"Presione 1 si le gustaria convertir unidades de longitud"<<endl;
				cout<<"Presione 2 si le guararia convertir unidades de masa"<<endl;
				cin>>longmasa;}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir8;
	if (salir8== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	case 9: cout <<"9.  DETERMINAR SI UN NUMERO ES PAR O IMPAR"<<endl;
	int paroimpar, salir9;
	cout<<"ingrese numero: "; cin>>paroimpar;
	if ((paroimpar%2)==0){ cout<<"el numero "<<paroimpar<< " es un numero par"<<endl;}
	else {cout<<"el numero "<<paroimpar<< " es un numero impar"<<endl;	}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir9;
	if (salir9== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	case 10: cout <<"10. FIGURAS GEOMETRICAS BASICAS"<<endl;
		int figura, salir10;
	cout<<"Que figura le gustaria ver?"<<endl;
	cout<<"1. Circulo"<<endl;
	cout<<"2. Cuadrado"<<endl;
	cout<<"3. Rectangulo"<<endl;
	cout<<"4. Triangulo"<<endl;
	cin>>figura;
switch (figura){
	case 1:
cout<<"\n          *******"<<endl;
cout<<"      **************"<<endl;
cout<<"    ******************"<<endl;
cout<<"  **********************"<<endl;
cout<<" ************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<" ************************"<<endl;
cout<<"  **********************"<<endl;
cout<<"    ******************"<<endl;
cout<<"      ***************"<<endl;
cout<<"          *******"<<endl;
break;
case 2:
cout<<"\n**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
cout<<"**************************"<<endl;
break;
case 3:
cout<<"\n*********************************"<<endl;
cout<<"*********************************"<<endl;
cout<<"*********************************"<<endl;
cout<<"*********************************"<<endl;
cout<<"*********************************"<<endl;
cout<<"*********************************"<<endl;
cout<<"*********************************"<<endl;
cout<<"*********************************"<<endl;
cout<<"*********************************"<<endl;
cout<<"*********************************"<<endl;
cout<<"*********************************"<<endl;
cout<<"*********************************"<<endl;
break;
case 4:
cout<<"\n              *"<<endl;
cout<<"            *****"<<endl;
cout<<"          *********"<<endl;
cout<<"        *************"<<endl;
cout<<"      *****************"<<endl;
cout<<"    *********************"<<endl;
cout<<"  *************************"<<endl;
cout<<"*****************************"<<endl;
break;
default: 
cout<<"Este codigo no se encuentra en el listado"<<endl;
}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir10;
	if (salir10== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	case 11: cout <<"11. MOVER UN PUNTO POR LA PANTALLA"<<endl;
	int salir11;
	while (option!= 'z'){
		system("cls");
		gotoxy(x,y); cout<<"*";
		option = getch();
		switch (option){
			case 'w': y--; break;
			case 's': y++; break;
			case 'a': x--; break;
			case 'd': x++; break;
			case 'm': 
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir11;
	if (salir11== 1){
	main();}
	else {
	return 0;}; 
	break;
		}
	}

	break;
	
	case 12: cout <<"12. MULTIPLICACION MANUAL (FORMA GRAFICA)"<<endl;
	int multiplicando, multiplicador, producto, digitos[10], whilevariable, salir12;
	string spaces;
	spaces = "   ";
	cout<<"ingrese cantidad multiplicando: "; cin>>multiplicando;
	cout<<"ingrese cantidad para multiplicador: "; cin>>multiplicador;
	cout<<"   "<<multiplicando<<endl;
	cout<<" * "<<multiplicador<<endl;
	cout<<"------------"<<endl;	
	producto = multiplicador * multiplicando;
	while (multiplicador>0){
	digitos[whilevariable] = multiplicador%10;
	multiplicador = multiplicador/10;
	cout<<spaces<<digitos[whilevariable] * multiplicando<<endl;	
	spaces.erase( spaces.end()-1 );
	whilevariable++;}
	cout<<"------------"<<endl;
	cout<<"  "<<producto<<endl;
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir12;
	if (salir12== 1){
	return main();
	}
	else {
	return 0;
	}
	break;}
	
	switch (Menu){
	case 13: cout <<"13. PALINDROMOS (PALABRAS Y NUMEROS)"<<endl;
	int salir13;
	char palabra[100], palabra2[100];
	cout<<"Ingrese la palabra o serie de numero: "; cin>>palabra;
	for (int palindromo = (strlen(palabra)-1); palindromo>= 0; palindromo --){
	palabra2 [strlen(palabra)-1-palindromo] = palabra[palindromo];	}
	palabra2[strlen(palabra)]='\0';
	if (strcmp(palabra, palabra2)==0){
		cout<<"Tu palabra o serie de numeros **SI** es palindrome\n";
	}else{
		cout<<"Lo lamento tu palabra o serie de numeros **NO** es palindrome\n";}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir13;
	if (salir13== 1){
	return main();
	}
	else {
	return 0;
	}		
	break;
	
	case 14: cout <<"14. SUMA, RESTA, MULTIPLICACION Y DIVISION DE DOS NUMEROS"<<endl;
	int srmd1, srmd2, suma, resta, multiplicacion, division, restante, salir14;
	cout<<"Ingrese primera cantidad: "; cin>>srmd1;
	cout<<"Ingrese segunda cantidad: "; cin>>srmd2;
	suma = srmd1 + srmd2;
	resta = srmd1 - srmd2;
	multiplicacion = srmd1 * srmd2;
	division = srmd1 / srmd2; 
	restante = srmd1 % srmd2;
	cout<<srmd1<<" + "<<srmd2<<" = "<<suma<<endl;
	cout<<srmd1<<" - "<<srmd2<<" = "<<resta<<endl;
	cout<<srmd1<<" * "<<srmd2<<" = "<<multiplicacion<<endl;
	cout<<srmd1<<" / "<<srmd2<<" = "<<division<<" con un residuo de "<<restante<<endl;
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir14;
	if (salir14== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	case 15: cout <<"15. TABLA DE MULTIPLICAR (DEL NUMERO QUE DESEE)"<<endl;
	int numtomult, salir15;
	cout<<"Ingrese cantidad: "; cin>>numtomult;
	for (int times = 1; times <= 10; times++){
	cout<<numtomult <<" * "<<times<<" = "<<numtomult * times<<endl;}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir15;
	if (salir15== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	case 16: cout <<"16. TABLAS DE MULTIPLICAR DEL 1 - 10"<<endl;
	int salir16;
	int equal;
	for(int tms1 = 1; tms1<=10; tms1++){
	cout<<"\n TABLA DEL "<<tms1<<endl;
	for(int tms2 = 1; tms2<=10; tms2++){
	equal = tms1 *tms2;
	cout<<tms1<<" * "<<tms2<<" = "<<equal<<endl;}
	}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir16;
	if (salir16== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	case 17: cout <<"17.  CALCULAR LA FACTORIAL DE UN NUMERO"<<endl;
	int salir17, factnum, factorial;
	factorial = 1;
	cout<<"Digite un numero: "; cin>>factnum;
	for (int facto = 1; facto <= factnum; facto++){
		factorial *= facto;	}
	cout<<"El factorial del numero "<<factnum<<" es: "<<factorial<<endl;
		cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir17;
	if (salir17== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	case 18: cout <<"18. MATRIZ TRANSPUESTA 3X3"<<endl;
	int salir18, elementosmatriz[3][3];
	for (int fila = 1; fila <=3; fila++){
		for (int columna = 1; columna <=3; columna++){
			cout<<"Digite los elemejos de la matriz ["<<fila<<"]["<<columna<<"]: ";
			cin>>elementosmatriz[fila][columna];	}}
	cout<<"\nMatriz Ingresada\n";
	for (int fila = 1; fila <=3; fila++){
		for (int columna = 1; columna <=3; columna++){
			cout<<" "<<elementosmatriz[fila][columna];	} cout<<"\n";}
		cout<<"\nMatriz Transpuesta\n";
	for (int fila = 1; fila <=3; fila++){
		for (int columna = 1; columna <=3; columna++){
			cout<<" "<<elementosmatriz[columna][fila];	} cout<<"\n";}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir18;
	if (salir18== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	case 19: cout <<"19. SUMA DE DOS MATRICES 3x3"<<endl;
	int salir19, matriz1[3][3], matriz2[3][3], sumatriz[3][3];
	cout<<"-------- MATRIZ #1 --------\n";
	for (int fila1 = 1; fila1 <=3; fila1++){
		for (int columna1 = 1; columna1 <=3; columna1++){
			cout<<"Digite los elemejos de la matriz # 1 ["<<fila1<<"]["<<columna1<<"]: ";
			cin>>matriz1[fila1][columna1];	}}
	cout<<"\n-------- MATRIZ #2 --------\n";			
	for (int fila2 = 1; fila2 <=3; fila2++){
		for (int columna2 = 1; columna2 <=3; columna2++){
			cout<<"Digite los elemejos de la matriz # 2 ["<<fila2<<"]["<<columna2<<"]: ";
			cin>>matriz2[fila2][columna2];	}}
	cout<<"\nMatriz #1 \n";
	for (int fila1 = 1; fila1 <=3; fila1++){
		for (int columna1 = 1; columna1 <=3; columna1++){
			cout<<" "<<matriz1[fila1][columna1];	}cout<<"\n";}
		cout<<"\nMatriz #2 \n";
	for (int fila2 = 1; fila2 <=3; fila2++){
		for (int columna2 = 1; columna2 <=3; columna2++){
			cout<<" "<<matriz2[fila2][columna2];	}cout<<"\n";}
//proceso de suma
	for (int resfila3 = 1; resfila3 <=3; resfila3++){
		for (int rescolumna3 = 1; rescolumna3 <=3; rescolumna3++){
			sumatriz[resfila3][rescolumna3] = matriz1[resfila3][rescolumna3] + matriz2[resfila3][rescolumna3];}}
		cout<<"\nMatriz #1 + Matriz #2 \n";
	for (int fila3 = 1; fila3 <=3; fila3++){
		for (int columna3 = 1; columna3 <=3; columna3++){
			cout<<" "<<sumatriz[fila3][columna3];	}cout<<"\n";}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir19;
	if (salir19== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	case 20: cout <<"20. SERIE FIBONACCI"<<endl;
	int salir20, fibonum, fib1,fib2,fib3;
	fib1 = 0; fib2 = 1; fib3 = 1;
	cout<<"Digite el numero de elementos: "; cin>>fibonum;
	cout<<"1\n";
	for (int fibonacci = 1; fibonacci < fibonum; fibonacci++){
		fib3 = fib1 + fib2;
		cout<<fib3<<" "<<endl;
		fib1 = fib2;
		fib2 = fib3;}
	cout<<"\nSi desea regresar al menu anterior presione 1 + enter";
	cout<<"\nSi desea cerrar el programa presione cualquier tecla + enter"<<endl;
	cin>>salir20;
	if (salir20== 1){
	return main();
	}
	else {
	return 0;
	}
	break;
	
	default: cout<<"este codigo no se encuentra en el listado"<<endl;
	cout<<"\n";
	return main ();
}
	system ("pause");
}
