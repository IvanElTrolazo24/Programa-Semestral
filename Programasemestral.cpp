#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;
int op,s=0;
/*variables reservadas para la calculadora*/int s2;float su,mu,di,res,num1,num2;char op1;
void areadeuncirculo()
{
	int r; float area;
		/* code */
	cout<<"Programa para calcular el area de un cÃ­rculo"<< endl;
	cout<<"Escriba el radio:"<< endl;
	cin>> r;
	area= (3.1416)*(r*r);
	cout<<"El area del circulo es:" <<area<< endl;
}
void anos()
{
	int ano_a; int ano_n;int edad;
	/* code */
	cout<<"Programa para calcular aÃ±os aproximados de una persona"<< endl;
	cout<<"Escriba la fecha de nacimiento:"<< endl;
	cin>> ano_n;
	cout<<"Escriba la fecha actual:"<< endl;
	cin>> ano_a;
	edad= ano_a-ano_n;
	cout<<"La edad aproximada es:" <<edad<< endl;

}
void estaciones()
{
	int n_mes;
		cout<<"Programa para identificar la estacion actual segÃºn el mes"<< endl;
		cout<<"Introduce el numero de mes:"<< endl;
		cin>> n_mes;
		if(n_mes==12 or n_mes==1 or n_mes==2)
		{
			cout<<"Es invierno"<< endl;
		}
		else
		{
			if (n_mes>=3 and n_mes<=5)
			{
				cout<<"Es primavera"<< endl;
			}
			else
			{
				if(n_mes>=6 and n_mes<=8)
				{
					cout<<"Es verano"<< endl;
				}	
				else
				{
					if(n_mes>=9 and n_mes<=11)
					{
						cout<<"Es otoÃ±o"<< endl;
					}
					else
					{
						cout<<"Error"<< endl;
					}
				}
			
			}
	
		}
}
void mayorde3()
{
		int n1,n2,n3,salir=0;
		cout<<"Programa para identificar el mayor de 3 numeros"<< endl;
		cout<<"Introduce los 3 numeros:"<< endl;
		cout<<"Numero 1:"<< endl;		
		cin>> n1;
		cout<<"Numero 2:"<< endl;
		cin>> n2;
		cout<<"Numero 3:"<< endl;
		cin>> n3;
		if(n1>n2 and n1>n3)
		{
			cout<<"El numero mayor es:"<<n1<< endl;
		}
		else
		{
			if (n2>n1 and n2>n3)
			{
				cout<<"El numero mayor es:"<<n2<< endl;
			}
			else
			{
				cout<<"El numero mayor es:"<<n3<< endl;
			
			}
	
		}
}
void tabla8()
{
	int n,tabla,salir=0; 
		cout<<"Programa que calcule la tabla de cualquier numero "<< endl;
		cout<<"Introduce el numero deseado:"<< endl;
		cin>> tabla;
		for(n=1;n<=10;n=n+1)
		{
			cout<<"8x"<<n<<"="<<tabla*n<<endl;
		}
}
void dolarespeso()
{
	float val_dolar; int opcion;float dolar;float peso;float dolar_peso;float peso_dolar;int salir=0; 
	cout<<"Programa que de dos opciones y convierta el valor del dolar a peso y viceversa"<< endl;
	cout<<"Escriba el valor del dolar:"<< endl;
	cin>> val_dolar;
	cout<<"Escribe 1 si quieres convertir dolares a peso o escribe 2 si quieres convertir pesos a dolares:"<< endl;
	cin>> opcion;
	if(opcion==1)
	{
		cout<<"Introduzca la cantidad de dolares:"<< endl;
		cin>> dolar;
		dolar_peso=dolar*val_dolar;
		cout<<"Tu cantidad de dolares en peso:"<<dolar_peso<< endl;
	}
	else
	{
		if(opcion==2)
		{
			cout<<"Introduzca la cantidad de pesos:"<< endl;
			cin>> peso;
			peso_dolar=peso/val_dolar;
			cout<<"Tu cantidad de dolares en peso:"<<peso_dolar<< endl;
		}
		else
		{
		cout<<"Error"<< endl;
		}
	}
}
void numerospareseimpares()
{
	int opcion,salir1=0,a,b; 
	while(salir1==0)
	{

		cout<<"Programa que de dos opciones,numeros pares del 2 al 100 o numeros impares del 2 al 99"<< endl;
		cout<<"Escribe 1 la lista de pares o escribe 2 la lista de impares:"<<endl;
		cin>> opcion;
		
		if(opcion==1)
		{
			for(short a=2;a<=100;a=a+2)
			{
				cout<<"Los numeros pares son:"<<a<<endl;
			}
		}
		else
		{
			if(opcion==2)
			{
				for(short b=1;b<=99;b=b+2)
				{
					cout<<"Los numeros impares son:"<<b<<endl;
				}
			}
			else
			{
			cout<<"Error"<< endl;
			}
		}
		cout<<"¿Desea salir,Si=1 No=0?"<< endl;
		cin>>salir1;
	}
	cout<<"El programa se va a cerrar"<< endl;
}
void positivonegativoneutralwhile()
{
	int n,salir1=0;
	while(salir1==0)
	{
	/* code */
	cout<<"Programa para ver si un numero es menor,mayor o cero"<< endl;
	cout<<"Escribe el numero:"<< endl;
	cin>> n;
	if(n>0)
	{
		cout<<"Es positivo"<< endl;
	}
	else
	{
		if (n<0)
		{
			cout<<"Es negativo"<< endl;
		}
		else
		{
			if(n=0)
			{
				cout<<"Es un valor neutro"<< endl;
			}
			else
			{
				cout<<"Error"<< endl;
			}
		}
	}
	cout<<"¿Desea salir,Si=1 No=0?"<< endl;
	cin>>salir1;
	}	
	cout<<"El programa se va a cerrar"<< endl;
}
void edadwhile()
{
	int salir1,salir2;
	int a_nacimiento,mes_nacimiento,dia_nacimiento;
	int a_actual,mes_actual,dia_actual;
	int edad_anos,edad_dias,edad_mes;
	bool BMN,BDN,BAA,BMA,BDA;
	salir1=0;
	
	while(salir1==0)
	{
		system("cls");
		cout<<"Programa de porcentajes de calificacion\n"<<endl;
		salir2=0;
		while(salir2==0)
		{	
			//Nacimiento
			cout<<"Cual es el año de nacimiento:"<<endl; //año nacimiento
			cin>>a_nacimiento;
			cout<<"Cual es el mes de nacimiento:"<<endl;//mes nacimiento
			cin>>mes_nacimiento;
			if(mes_nacimiento>=1 and mes_nacimiento<=12)
			{
			    BMN=true;
		    }
			else
			{
				BMN=false;
			}
			cout<<"Cual es el dia de nacimiento:"<<endl;//dia nacimiento
			cin>>dia_nacimiento;
			if(dia_nacimiento>=1 and dia_nacimiento<=31)
			{
			    BDN=true;
			}
			else
			{
				BDN=false;
			}
			//Actual
			cout<<"Cual es el año actual:"<<endl;//año actual
			cin>>a_actual;
			if(a_actual<=2017)
			{
				BAA=true;
			}
			else
			{
				BAA=false;
			}
			cout<<"Cual es el mes actual:"<<endl;//mes actual
			cin>>mes_actual;
			if(mes_actual>=1 and mes_actual<=12)
			{
			    BMA=true;
		    }
			else
			{
				BMA=false;
			}
			cout<<"Cual es el dia actual:"<<endl;//dia actual
			cin>>dia_actual;
			if(dia_actual>=1 and dia_actual<=31)
			{
			    BDA=true;
			}
			else
			{
				BDA=false;
			}
			
		
			if(BMN==true and BDN==true and BAA==true and BMA==true and BDA==true)//validacion banderas
			{
				salir2=1;
				cout<<"Correcto al capturar, se continuara, presione enter"<<endl;
				getch();
			}
			else
			{
				salir2=0;
				cout<<"Incorrecto al capturar, se repetira, presione enter"<<endl;
				getch();
			}
		}
		edad_anos=a_actual-a_nacimiento;//calculos
		if(mes_nacimiento>mes_actual)
		{
			edad_anos=edad_anos-1;
			edad_mes=12-(mes_nacimiento-mes_actual);
		}
		else
		{
			edad_mes=mes_actual-mes_nacimiento;
		}
		edad_dias=31-(dia_nacimiento-dia_actual);
		if(dia_nacimiento>dia_actual)
		{
			edad_mes=edad_mes-1;
			edad_dias=31-(dia_nacimiento-dia_actual);
		}
		else
		{
			edad_dias=dia_actual-dia_nacimiento;
		}
		system("cls");
		cout<<"\nTienes "<<edad_anos<<"años \n"<<edad_mes<<" meses \n"<<edad_dias<<" dias\n"<<endl;
	
		
		
				
		cout<<"Desea salir del programa? si=1 no=0"<<endl;
		cin>>salir1;
		
	}
	    cout<<"El programa se va a cerrar "<<endl;

}
void mayorde3while()
{
	int n1,n2,n3,salir1=0;
	while(salir1==0)
	{
		cout<<"Programa para identificar el mayor de 3 numeros"<< endl;
		cout<<"Introduce los 3 numeros:"<< endl;
		cout<<"Numero 1:"<< endl;		
		cin>> n1;
		cout<<"Numero 2:"<< endl;
		cin>> n2;
		cout<<"Numero 3:"<< endl;
		cin>> n3;
		if(n1>n2 and n1>n3)
		{
			cout<<"El numero mayor es:"<<n1<< endl;
		}
		else
		{
			if (n2>n1 and n2>n3)
			{
				cout<<"El numero mayor es:"<<n2<< endl;
			}
			else
			{
				cout<<"El numero mayor es:"<<n3<< endl;
			
			}
	
		}
	cout<<"¿Desea salir,Si=1 No=0?"<< endl;
	cin>>salir1;
	}
	cout<<"El programa se va a cerrar"<< endl;
}
void cualquiertabla()
{
	int n,tabla,salir1=0;
	while(salir1==0)
	{

		cout<<"Programa que calcule la tabla de cualquier numero "<< endl;
		cout<<"Introduce el numero deseado:"<< endl;
		cin>> tabla;
	
	
		for(n=1;n<=10;n=n+1)
		{
			cout<<tabla<<"x"<<n<<"="<<tabla*n<<endl;
		}
		
		
		cout<<"¿Desea salir,Si=1 No=0?"<< endl;
		cin>>salir1;
	}
	cout<<"El programa se va a cerrar"<< endl;
}
void ganancia()
{
	float inversion,ganancia,monto_total;
	int salir1=0;
	while(salir1==0)
	{ /**/

		cout<<"Programa que de la ganancia y el monto_total"<< endl;
		cout<<"Escribe la inversion:"<< endl;
		cin>> inversion;
		ganancia=0.06*inversion;
		cout<<"Su ganancia es:"<<ganancia<< endl;
		monto_total=ganancia+inversion;
		cout<<"Su monto total es:"<<monto_total<< endl;

	

	
		cout<<"¿Desea salir,Si=1 No=0?"<< endl;
		cin>>salir1;
	}
		cout<<"El programa se va a cerrar"<< endl;
}
void estacioneswhile()
{
	int n_mes,salir1=0;
	while(salir1==0)
	{
		cout<<"Programa para identificar la estacion actual según el mes"<< endl;
		cout<<"Introduce el numero de mes:"<< endl;
		cin>> n_mes;
		if(n_mes==12 or n_mes==1 or n_mes==2)
		{
			cout<<"Es invierno"<< endl;
		}
		else
		{
			if (n_mes>=3 and n_mes<=5)
			{
				cout<<"Es primavera"<< endl;
			}
			else
			{
				if(n_mes>=6 and n_mes<=8)
				{
					cout<<"Es verano"<< endl;
				}	
				else
				{
					if(n_mes>=9 and n_mes<=11)
					{
						cout<<"Es otoño"<< endl;
					}
					else
					{
						cout<<"Error"<< endl;
					}
				}
			
			}
	
		}
	cout<<"¿Desea salir,Si=1 No=0?"<< endl;
	cin>>salir1;
	}
	cout<<"El programa se va a cerrar"<< endl;
}
void parimparwhile()
{
	int opcion,salir1=0,a,b; 
	while(salir1==0)
	{

		cout<<"Programa que de dos opciones,numeros pares del 2 al 100 o numeros impares del 2 al 99"<< endl;
		cout<<"Escribe 1 la lista de pares o escribe 2 la lista de impares:"<< endl;
		cin>> opcion;
	
		if(opcion==1)
		{
				a=2;
			while(a<=100)
			{
				cout<<"Los numeros pares son:"<<a<<endl;
				a=a+2;
			}
		}
		else
		{
			if(opcion==2)
			{
				b=1;
				while(b<=99)
				{
					cout<<"Los numeros impares son:"<<b<<endl;
					b=b+2;
				}
			}
			else
			{
			cout<<"Error"<< endl;
			}
		}
		cout<<"¿Desea salir,Si=1 No=0?"<< endl;
		cin>>salir1;
	}
		cout<<"El programa se va a cerrar"<< endl;
}
void perimetro3fig()
{
	int opcion,salir=0;//variables de utilidad
	int lado,perimetro_cuadrado;//var_cuadrado
	int ladot,perimetro_triangulo;//var_triangulo
	float radio,pi=3.14,perimetro_circulo;//var_circulo

		cout<<"Programa para calcular el perimetro de 3 diferentes figuras"<<endl;
		cout<<"Presiona 1 para el perimetro del cuadrado\nPresiona 2 para el perimetro del rectangulo\nPresiona 3 para el perimetro del circulo"<<endl;
		cin>>opcion;
		system("cls");
		
		switch(opcion)
		{
			case 1://Cuadrado
			{
			  	cout<<"Escribe el valor del lado del cuadrado"<<endl;
			  	cin>>lado;
				perimetro_cuadrado=lado*4;
			  	cout<<"El perimetro del cuadrado es:"<<perimetro_cuadrado<<endl;
			  	break;
			}
			case 2://Triangulo
			{
				cout<<"Escribe el valor del lado del triangulo"<<endl;
				cin>>ladot;
				perimetro_triangulo=ladot*3;
			  	cout<<"El perimetro del triangulo es:"<<perimetro_triangulo<<endl;
				break;	
			}
			case 3://Circulo
			{
				cout<<"Escribe el valor del radio del circulo"<<endl;
			  	cin>>radio;
				perimetro_circulo=radio*(pi*2);
			  	cout<<"El perimetro del circulo es:"<<perimetro_circulo<<endl;
			  	break;
			}
			default:
			{
				cout<<"Opcion no disponible"<<endl;
			}
		}
}
void califbool()
{
	int salir1,salir2,aciertos,asistencias,tareas;
	int tot_asistencias,tot_aciertos,tot_tareas,total;
	bool BA,BT,BAS;
	salir1=0;
	
	while(salir1==0)
	{
		system("cls");
		cout<<"Programa de porcentajes de calificacion\n"<<endl;
		
			cout<<"Cual es el numero de aciertos que sacaste en el examen:"<<endl;
			cin>>aciertos;
			do
			{	
				BA=true;
			}
			while(aciertos>=0 and aciertos<=10);
			do
			{
				cout<<"Captura incorrecta,ponga los datos denuevo,teclee enter"<<endl;
				getch();
				system("cls");
			}
			while(BA==false);
			
			cout<<"Cual es el numero de tareas que entregaste:"<<endl;
			cin>>tareas;
			do
			{
				BT=true;
		    	
		    }
		    while(tareas>=0 and tareas<=8);
		    do
		    {
		    	cout<<"Captura incorrecta,ponga los datos denuevo,teclee enter"<<endl;
				getch();
				system("cls");
			}
			while(BT==false);
			cout<<"Cual es el numero de asistencias que tuviste:"<<endl;
			cin>>asistencias;
		
		    do
		    {
				BAS=true;
			}
			while(asistencias>=0 and asistencias<=20);
			do
			{
			
				cout<<"Captura incorrecta,ponga los datos denuevo,teclee enter"<<endl;
				getch();
				system("cls");
			}
			while(BAS==false);	
	
			
		cout<<"Correcto al capturar, se continuara, presione enter"<<endl;
		getch();
		
		tot_aciertos=(aciertos*100)/10;
		tot_tareas=(tareas*100)/8;
		tot_asistencias=(asistencias*100)/20;
		system("cls");
		cout<<"\nEl numero de aciertos son:"<<aciertos<<"La calificacion de examen es:"<<tot_aciertos<<endl;
		cout<<"\nEl numero de tareas son:"<<tareas<<"La calificacion de tareas es:"<<tot_tareas<<endl;
		cout<<"\nEl numero de asistencias son:"<<asistencias <<"La calificacion de asistencias es:"<<tot_asistencias<<endl;
		total=(tot_asistencias+tot_tareas+tot_aciertos)/3;
		cout<<"\nTu promedio es:"<<total<<endl;
		
		
				
		cout<<"Desea salir del programa? si=1 no=0"<<endl;
		cin>>salir1;
		
	}
	    cout<<"El programa se va a cerrar "<<endl;
}
void llenar5pos()
{
	int arreglo[5],n,x;
	for(n=0;n<=4;n=n+1)
	{
		cout<<"Inserte datos:"<<endl;
		cin>>arreglo[n];
	}
	for(n=0;n<=4;n=n+1)
	{
		cout<<"Dato:"<<arreglo[n]<<endl;
	}

}
void tablaamericachivas()
{
	int posicion[1];int puntuacion[1];
	cout<<"Programa que muestra la posicion en la tabla de chivas y america"<<endl;
	cout<<"Inserte la posicion del america"<<endl;
	cin>>posicion[0];
	cout<<"Inserte la puntuación de america"<<endl;
	cin>>puntuacion[0];
	cout<<"Inserte la posicion de chivas"<<endl;
	cin>>posicion[1];
	cout<<"Inserte la puntuación de chivas "<<endl;
	cin>>puntuacion[1];
	cout<<"El lugar de america es:"<<posicion[0]<<"\n La puntuación del america es:"<<puntuacion[0]<<endl;
	cout<<"El lugar de chivas es:"<<posicion[1]<<"\n La puntuación de chivas es:"<<puntuacion[1]<<endl;
}
void sumrestmultdiv()
{
	int numeros[8],n,x;float r; char opcion;
	for(n=0;n<=7;n=n+1)
		{
			cout<<"Inserte dato:"<<endl;
			cin>>numeros[n];
		}
	do
	{
		system("cls");
		cout<<"Presione A para suma\nPresione B para resta\nPresione C para multiplicacion\nPresione D para dividir"<<endl;
		cin>>opcion;
		switch(opcion)
		{
			case 'a': case'A':
				{
					//Suma
					r=numeros[0];
				for(x=0;x<=7;x=x+1)
				{
					r=r+numeros[x];
				}
				cout<<"La suma es:"<<r<<endl;
					break;
				}
			case 'b': case'B':
				{
					//Resta
				r=numeros[0];
				for(x=1;x<=7;x=x+1)
				{
					r=r-numeros[x];
				}
				cout<<"La resta es:"<<r<<endl;
					break;
				}
			case 'c': case'C':
				{
					//Multiplicacion
				r=numeros[0];
				for(x=1;x<=7;x=x+1)
				{
					r=r*numeros[x];
				}
				cout<<"La multiplicacion es:"<<r<<endl;
					break;
				}
			case 'd': case'D':
				{
					//Division
				r=numeros[0];
				for(x=1;x<=7;x=x+1)
				{
					r=r/numeros[x];
				}
				cout<<"La division es:"<<r<<endl;
					break;
				}
			default:
				{
					cout<<"Error,presione enter para volver a seleccionar"<<endl;
					getch();
				}		
		}
	}while(opcion!='a' and opcion!='A' and opcion!='b' and opcion!='B' and opcion!='c' and opcion!='C' and  opcion!='d' and opcion!='D');
}
void capturadedatos()
{
	char nom[5][35],dir[5][70],tel[5][15],face[5][35],ocup[5][40];
	/*mal cin>>nom[0][35];
	cin>>nom[1][35];*/
	for(int n=1;n<=5;n=n+1)
	{
		cout<<n<<" Inserte su nombre completo:"<<endl;
		cin.getline(nom[n],35);
		cout<<n<<" Inserte su direccion:"<<endl;
		cin.getline(dir[n],70);
		cout<<n<<" Inserte su numero de telefono:"<<endl;
		cin.getline(tel[n],15);
		cout<<n<<" Inserte su nombre de facebook:"<<endl;
		cin.getline(face[n],35);
		cout<<n<<" Inserte su ocupacion:"<<endl;
		cin.getline(ocup[n],40);
		system("cls");

	}
	for (int x=1;x<=5;x=x+1)
	{
		cout<<x<<" El nombre de la persona es: "<<nom[x]<<".\nSu direccion es: "<<dir[x]<<". \nSu telefono es: "<<tel[x]<<". \nSu nombre de usuario de facebook es: "<<face[x]<<". \nSu ocupacion es: "<<ocup[x]<<"\n"<<endl;
	}
}
/*Voids de la calculadora*/
void suma()
{	
	su=num1+num2;
	cout<<"el resultado es:"<<su<<endl;
}
void mult()
{	
	mu=num1*num2;
	cout<<"el resultado es:"<<mu<<endl;
}
void div()
{	
	di=num1/num2;
	cout<<"el resultado es:"<<di<<endl;
}

void resta()
{	
	res=num1-num2;
	cout<<"el resultado es:"<<res<<endl;
}
void salir2()
{
	s2=1;
}
/*Aquí terminan los voids de la calculadora*/
void salir()
{
	s=1;
}
void calculadora()
{
	while(s2==0){

	cout<<"Calculadora simple"<<endl;
	cout<<"Inserta el primer numero:"<<endl;
	cin>>num1;
	cout<<"Inserta el segundo numero"<<endl;
	cin>>num2;
	system("cls");
	
			cout<<"Presiona A para sumar\nPresiona B para multiplicar\nPresiona C para dividir\nPresiona D para restar\nPresiona F para salir"<<endl;
			cin>>op1;
			system("cls");
			do
			{
				switch(op1)
				{
					case 'a': case 'A':{suma(); break;}
					case 'b': case 'B':{mult(); break;}
					case 'c': case 'C':{div(); break;}
					case 'd': case 'D':{resta(); break;}
					case 'f': case 'F':{salir2(); break;}
					default:{cout<<"Error,presione enter para continuar"<<endl; getch();}
				}
			}while(op1!='a' and op1!='A' and op1!='b' and op1!='B' and op1!='c' and op1!='C' and op1!='d' and op1!='D' and op1!='f' and op1!='F' );
			
			cout<<"Presione uno 1 para salir y 0 para reiniciar el programa"<<endl;
			cin>>s2;	
			system("cls");
			}
	cout<<"El programa se cerrara"<<endl;

}


void pagina1()
{
	cout<<"//Bienvenido a la pagina 1//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Area de un circulo.\n2.-Edad de una persona.\n3.-Estaciones\n4.-Mayor de 3 numeros\n5.-Tabla del 8\n6.-Conversion dolares a peso\n7.-Volver al menu principal o salir "<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{areadeuncirculo();break;}
		case 2:{anos();break;}
		case 3:{estaciones();break;}
		case 4:{mayorde3();break;}
		case 5:{tabla8();break;}
		case 6:{dolarespeso();break;}
		case 7:{salir();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}
void pagina2()
{
	cout<<"//Bienvenido a la pagina 2//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Numero pares(2-100) e impares(1-99).\n2.-Numero positivo,negativo y neutro con while.\n3.-Edad de una persona con while.\n4.-Mayor de 3 numeros con while.\n5.-Cualquier tabla de multiplicar.\n6.-Ganancia 6%\n7.-Volver al menu principal o salir."<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{numerospareseimpares();break;}
		case 2:{positivonegativoneutralwhile();break;}
		case 3:{edadwhile();break;}
		case 4:{mayorde3while();break;}
		case 5:{cualquiertabla();break;}
		case 6:{ganancia();break;}
		case 7:{salir();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}
void pagina3()
{
	cout<<"//Bienvenido a la pagina 3//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Estaciones con while.\n2.-Par(2-100) e impar(1-99) con while.\n3.-Perimetro de 3 figuras.\n4.-Calificacion con banderas.\n5.-Llenar 5 posiciones.\n6.-Tabla de posiciones America-Chivas.\n7.-Volver al menu principal o salir."<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{estacioneswhile();break;}
		case 2:{parimparwhile();break;}
		case 3:{perimetro3fig();break;}
		case 4:{califbool();break;}
		case 5:{llenar5pos();break;}
		case 6:{tablaamericachivas();break;}
		case 7:{salir();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}
void pagina4()
{
	cout<<"//Bienvenido a la pagina 4//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Suma,multiplicacion y division.\n2.-Captura de datos.\n3.-Calculadora simple..\n4.-Volver al menu principal o salir."<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{sumrestmultdiv();break;}
		case 2:{capturadedatos();break;}
		case 3:{calculadora();break;}
		case 4:{salir();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}

void menuprincipal()
{
	cout<<"//Bienvenido al menu principal//\nEscoge la pagina a la que quieres ir:"<<endl;
	cout<<"1.-Pagina 1\n2.-Pagina 2\n3.-Pagina 3\n4.-Pagina 4\n5.- Salir del programa"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{pagina1();break;}
		case 2:{pagina2();break;}
		case 3:{pagina3();break;}
		case 4:{pagina4();break;}
		case 5:{salir();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}

main()
{
	while(s==0)
		{menuprincipal();
		cout<<"---Deseas salir del programa? 1 para salir 0 para continuar utilizandolo---"<<endl;
		cin>>s;
		system("cls");
		}
cout<<"---El programa se cerrara---"<<endl;
}
	
