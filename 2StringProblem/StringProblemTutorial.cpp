#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string palabra1,palabra2;
    int tamanio1,tamanio2;
    cin>>palabra1>>palabra2;
    string pal1,pal2;
    
      tamanio1=palabra1.size();
    tamanio2=palabra2.size();
    
    cout<<tamanio1<<" "<<tamanio2<<endl;;
    
    string juntos;
    int i=0,j=0;
    /*
    while (i<tamanio1||j<tamanio2) {
        if(i<tamanio1){
            juntos.push_back(palabra1[i]);
            i++;
        }
        if(j<tamanio2){
            juntos.push_back(palabra2[j]);
            j++;
        }
    }
    */
    juntos=palabra1+palabra2;
    cout<<juntos<<endl;
    /*
    for(int i=juntos.size();i>=0;i--){
        
    }
    */
    i=0;
    j=0;
    string retorno1,retorno2;
    while (i<tamanio1||j<tamanio2) {
        if(i<tamanio1){
            if(i==0){
                retorno1.push_back(palabra2[i]);
            }else{
            	retorno1.push_back(palabra1[i]);
			}
            
            i++;
        }
        if(j<tamanio2){
            if(j==0){
                retorno2.push_back(palabra1[j]);
            }else{
            	retorno2.push_back(palabra2[j]);
			}
            
            j++;
        }
    }
    cout<<retorno1<<" "<<retorno2<<endl;
    return 0;
}