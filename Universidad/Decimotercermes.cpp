#include<iostream>
using namespace std;
int main(){
	int opcion;
	int n;
	n = 0; 
	int matriz1[n][n];
	int matriz2[n][n];
	
	cout<<"\n-----------MATRIZ-SALARIOS-----------";
	cout<<"\n 1.sumar 2 matrices";
	cout<<"\n 2.calcular XIII mes";
	cout<<"\n 3.salir";
	cout<<"\n elija una opcion: ";
	cin>>opcion;

//*system cls sirve para limpiar la pantalla despues que se elija una opcion, asi no se ve peppa :D
system ("cls");
	
	switch(opcion){

system ("cls");

case 1:
	cout<<"Suma de matrices"<<endl;
	 cout<<"Ingrese N de Filas X Columnas: ";
	 cin>>n;
	 
	 cout<<"Llenado de matriz 1"<<endl;
	 for(int i=0;i<n;i++){
	  for(int j=0;j<n;j++){
	   cout<<"Ingrese numero: ";
	   cin>>matriz1[i][j];
	  }
	 }
	 cout<<"\n";
	 cout<<"***********"<<endl;
	 cout<<"Llenado de matriz 2"<<endl;
	 for(int i=0;i<n;i++){
	  for(int j=0;j<n;j++){
	   cout<<"Ingrese numero: ";
	   cin>>matriz2[i][j];
	  }
	 }
	 cout<<"\n";
	 cout<<"La matriz 1 es: "<<endl;
	 for(int i=0;i<n;i++){
	  for(int j=0;j<n;j++){
	   cout<<matriz1[i][j]<<" ";
	  }
	 }
	 cout<<endl;

	 cout<<"\n";
	 cout<<"La matriz dos es: "<<endl;
	 for(int i=0;i<n;i++){
	  for(int j=0;j<n;j++){
	   cout<<matriz2[i][j]<<" ";   
	  }  
	 }
	 cout<<endl;
	
	 	system ("cls");
	 	
	 	
	 cout<<"\n";
	 cout<<"La suma de las dos matrices es:"<<endl;
	 for(int i=0;i<n;i++){
	  for(int j=0;j<n;j++){
	   cout<<matriz1[i][j]+matriz2[i][j]<<" "; 
	  }
	cout<<endl;
	 }
			

break;

//*salarios publicos y privados

system ("cls");

case 2: 
  cout<<"1. Empleado de institucion publica"<<endl;
  cout<<"2. Empleado de insitucion privada"<<endl;
  cout<<"Elija una opcion: ";
  cin>>opcion;


system ("cls");


switch (opcion){
int salariom,bruto, porcentaje, extra;
char nombre[40], cedu[40],insti[40];	

	case 1:
		cout<<"Ingrese su Nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese su Cedula: "<<endl;
		cin>>cedu;
		cout<<"Ingrese institucion publica donde trabaja: "<<endl;
		cin>>insti;
		cout<<"ingrese su salario Mensual: "<<endl;		
		cin>>salariom;
		porcentaje=salariom*4/12*(7.25/100);
		bruto=salariom*4/12-porcentaje;
		
		system ("cls");
		

		cout<<"\t "<<insti<<endl;
		cout<<"**********************************"<<endl;
		cout<<nombre<<"con cedula"<<cedu<<"  su monto a recibir el 15 de diciembre es de: "<<bruto<<" Dolares :D"<<endl;

break;
case 2:
	cout<<"Ingrese su Nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese su Cedula: "<<endl;
		cin>>cedu;
		cout<<"Ingrese institucion privada donde trabaja: "<<endl;
		cin>>insti;
		cout<<"ingrese su salario Mensual: "<<endl;		
		cin>>salariom;
		porcentaje=salariom*4/12*(7.25/100);
		extra=salariom*4+100;
		bruto=extra/12-porcentaje;
		cout<<endl;
		
		system ("cls");
		
		cout<<"\t "<<insti<<endl;
		cout<<"**********************************"<<endl;
		cout<<nombre<<" con cedula "<<cedu<<"  su monto a recibir el 15 de diciembre es de: "<<bruto<<" Dolares :D"<<endl;
break;




break;


break;				
}
 	
		
	

break;

case 3: exit(0);

default: cout<<"opcion no valida";
break;

 return 0;
}
}
