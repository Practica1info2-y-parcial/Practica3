#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    int n;
    int dinero;
    int saldo;
    int saldoac;
    string str1, str2, str3, str5, str6, str7, str8;


    //str1= cedulaadmin str2=cedula admin aprobar str3=clave str4=saldo str6= cedula usuarios
    ifstream fin;               //stream de entrada, lectura
    ofstream fout;              //stream de salida, escritura

    fout.open("registro.txt");
    cout<<"Hola, es usted administrador o usuario?"<<"\n";
    cout<<"Ingresar 1 si es administrador y 0 si es usuario: ";
    cin>>n;

    if(n==1){
        str1="1061686322";
        fout<<str1;
        cout<<"Hola administrador, ingrese su cedula(10 digitos): ";
        cin>>str2;      //lee una cadena con espacios
        fout<<str2;
        fin.open("registro.txt");
        getline(fin,str5);           //lee una linea y la almacena en el string str3

        fin.seekg(0);                 //vuelve al principio del archivo

        while(fin.good()){              //lee caracter a caracter hasta el fin del archivo
            char temp=fin.get();
            if(fin.good()){
                str2 +=temp;     //Asigna cada caracter leido a la cadena de caracteres
            }
        }
        fin.close();                //Cierra el archivo de lectura.

        if(str1==str2){
                cout<<"Bienvenido admin"<<"\n";
                cout<<"Registre el usuario:"<<"\n";
                cout<<"Ingrese la cedula(10 digitos): ";
                cin>>str6;
                fout<<str6;
                cout<<"Ingrese clave(5 digitos): ";
                cin>>str3;
                fout<<str3;
                cout<<"Ingrese cantidad de dinero que dispone el usuario: ";
                cin>>saldo;
               // fout<<str4;
                cout<<"Quiere registrar otro usuario?"<<"\n";
                cout<<"Ingresar 1 si si lo desea y 0 si no  :";
                cin>>n;
                if(n==1){
                    cout<<"Ingrese la cedula(10 digitos): ";
                    cin>>str6;
                    fout<<str6;
                    cout<<"Ingrese clave(5 digitos): ";
                    cin>>str3;
                    fout<<str3;
                    cout<<"Ingrese cantidad de dinero que dispone el usuario: ";
                    cin>>saldo;
                    fout<<saldo;
                    cout<<" Quiere registrar otro usuario?"<<"\n";
                    cout<<"Ingresar 1 si si lo desea y 0 si no  :";
                    cin>>n;
                }
                else if(n==0){
                    cout<<"hola usuario, ¿desea consultar saldo o retirar dinero?"<<endl;
                    cout<<"Ingrese 1 si desea consultar saldo y 0 si quiere retirar dinero"<<endl;
                    cin>>n;
                    if(n==1){
                        cout<<"Ingrese su cedula y su clave juntas: ";
                        cin>>str7;
                        getline(fin,str5);           //lee una linea y la almacena en el string str3

                        fin.seekg(0);                 //vuelve al principio del archivo

                        while(fin.good()){              //lee caracter a caracter hasta el fin del archivo
                            char temp=fin.get();
                            if(fin.good()){
                                str7 +=temp;     //Asigna cada caracter leido a la cadena de caracteres
                            }
                        }
                        fin.close();                //Cierra el archivo de lectura.
                    fin.open("registro.txt");
                    char X[36];
                    fin.getline(X,36);
                    string Y;
                    for (int i=0;i<36;i++){
                        Y[i]=X[i];
                    }
                    str8 = Y.substr(20,15);
                    cout<<"str7: "<<str7<<"\n";
                    cout<<"str8: "<<str8<<"\n";
                        if(str7==str8){
                            cout<<"su saldo es el siguiente: ";
                            cout<<saldo -1000;
                        }
                    }
                    else if(n==0){
                        cout<<"Usted tiene este saldo: "<<"/n";
                        cout<<saldo;
                        cout<<"cuanto dinero quiere sacar?  ";
                        cin>>dinero;
                        if(dinero>saldo-1000){
                            cout<<"no tienes tanto dinero";
                        }
                        else{
                            saldoac= saldo-dinero;
                            saldoac= saldoac-1000;
                        cout<<"este es su nuevo saldo: "<<saldoac;
                        }

                }
            }
    }
    else if(n==0){
        cout<<"hola usuario, ¿desea consultar saldo o retirar dinero?"<<endl;
        cout<<"Ingrese 1 si desea consultar saldo y 0 si quiere retirar dinero"<<endl;
        cin>>n;
        if(n==1){
            cout<<"Ingrese su cedula y su clave juntas: ";
            cin>>str7;
            getline(fin,str5);           //lee una linea y la almacena en el string str3

            fin.seekg(0);                 //vuelve al principio del archivo

            while(fin.good()){              //lee caracter a caracter hasta el fin del archivo
                char temp=fin.get();
                if(fin.good()){
                    str7 +=temp;     //Asigna cada caracter leido a la cadena de caracteres
                }
            }
            fin.close();                //Cierra el archivo de lectura.
        fin.open("registro.txt");
        char X[36];
        fin.getline(X,36);
        string Y;
        for (int i=0;i<36;i++){
            Y[i]=X[i];
        }
        str8 = Y.substr(20,15);
        cout<<"str7: "<<str7<<"\n";
        cout<<"str8: "<<str8<<"\n";
            if(str7==str8){
                cout<<"su saldo es el siguiente: ";
                cout<<saldo -1000;
            }
        }
        else if(n==0){
            cout<<"Usted tiene este saldo: "<<"/n";
            cout<<saldo;
            cout<<"cuanto dinero quiere sacar?  ";
            cin>>dinero;
            if(dinero>saldo-1000){
                cout<<"no tienes tanto dinero";
            }
            else{
                saldoac= saldo-dinero;
                saldoac= saldoac-1000;
            cout<<"este es su nuevo saldo: "<<saldoac;
            }
        }

}
    }
    return 0;
}



