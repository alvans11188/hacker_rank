/*
Se pide crear un registro de ntoas en donde solo se redondeen notas que ser igual o por encima de 38
el redondeo sera por los multiplos de 5
EJEMPLO
ENTRADA
4
73
67
38
33
SALIDA
75
67   nose redondea porque la suma no tiene que sobrepasar a 3
40
33 nose redondea
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int cantidad; cin>>cantidad;
	vector <int> resultados;
	while(cantidad--){
		int nota;cin>>nota;
		if(nota<38){
			resultados.push_back(nota);
		}else{
			int dato=nota%5;
			int diferencia=5-dato;
			if(diferencia<3){
				resultados.push_back(nota+diferencia);
			}else{
				resultados.push_back(nota);
			}
		}
	}
	for(int i=0;i<resultados.size();i++){
		cout<<resultados[i]<<endl;
	}
	
	
	return 0;
}