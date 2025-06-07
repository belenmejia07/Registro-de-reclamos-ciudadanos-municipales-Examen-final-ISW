#include <iostream>
#include <string>
using namespace std;

string reclamo;
int tipo;
int conformidad;

//Pedimos al usuario que escriba su queja
string  pedir_reclamo(){
    cout<<"Por favor escriba su reclamo con claridad y la solucion que cree que sera necesaria (solo puede ingresar 3 veces al dia al sistema): ";
    getline(cin, reclamo);
    return reclamo;
}

//Luego le pedimos que digite el tipo de reclamo que esta escribiendo para que sea mas facil dar la solucion
int tipo_de_reclamo(string reclamo){
    cout<<"Por favor digite el tipo de reclamo: "<<endl;
    cout<<"1. Falta de profesionalismo de parte de un funcionario publico"<<endl;
    cout<<"2. Trabajos municipales mal hechos"<<endl;
    cout<<"3. Falta de respeto y malos tratos por parte de un funcionario publico"<<endl;
    cout<<"4. Incompetencia e indiferencia hacia la ciudadania"<<endl;
    cin>>tipo;
    return tipo;
}

//Segun el tipo de reclamo que digito el ciudadano se da la solucion correspondiente
void analisis_de_reclamo(int tipo){
    cout<<"Su reclamo ha sido analizado y procesado, llegando a la siguiente solucion: "<<endl;
    switch (tipo){
        case 1:
        cout<<"Usted recibira un disculpas de parte del funcionario y una pequena indenmizacion"<<endl;
        break;
        case 2:
        cout<<"Se analizo la solucion que usted propuso y se le notificcara en"<<endl;
        cout<<" una 3 horas como maximo cuando el equipo de trabajo este ahi para solucionar el problema";
        break;
        case 3:
        cout<<"Despues de haber corroborado lo que usted afirma y haber hallado"<<endl;
        cout<<" ciertas sus acusaciones dentro de una hora usted podra apersonarse"<<endl;
        cout<<" a la alcaldia para recibir una indemnizacion y unas claras disculpas"<<endl;
        break;
        case 4:
        cout<<"Despues de haber investigado si efectivamente sucedio como usted afirma"<<endl;
        cout<<" Se le notificara dentro de 3 horas como maximo si su solucion propuesta es aprobada o no";
        break;
    }
}

//Y por ultimo corroboramos si el ciudadano esta conforme o no con la solucion
void corroborar_conformidad(){
    cout<<"Por favor diganos si esta conforme con la solucion que se le dio: "<<endl;
    cout<<"1. Si, estoy conforme"<<endl;
    cout<<"2. No estoy conforme"<<endl;
    cin>>conformidad;
    
    switch (conformidad){
        case 1:
        break;
        case 2:
        cout<<"Por favor salga del sistema y vuelva a escribir su reclamo o pruebe con otro tipo de reclamo";
    }
}

int main(){
    //Llamamos a cada funcion para ejecutarla
    pedir_reclamo();
    tipo_de_reclamo(reclamo);
    analisis_de_reclamo(tipo);
    corroborar_conformidad();
    
    
    return 0;
}