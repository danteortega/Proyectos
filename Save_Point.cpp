#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    //Variables
    const string id_admin = "SebasUrDaddy";
    const string pwd_admin = "apexprincess";
    const int intentos_disponibles = 3;
    int n_intentos;
    string login_id;
    string pwdlogin;
    string id_register;
    string pwd_register; 
    string pregunta_inicio;
    int i = 0;
    //Variables de entrada
    string usuario;
    string pass; 
    string accion_nusuario;
    string accion_admin;
    //Arreglos
    string comunidades_total[] = {"Fortnite: Battle Royale", "Call of Duty: Warzone", "Rocket League", "League of Legends", "Valorant"};
    string amigos_total[] = {"Mr. J", "ChalkyMuffin", "Woichi", "AlbertoGut14", "GoPsy", "Acenze", "RockMordo", "Prodigy", "Ox", "Pedrushka"};
    string amigos_admin[] = {"Mr. J", "ChalkyMuffin", "Woichi", "AlbertoGut14", "GoPsy", "Acenze"};
    string comunidades_admin[] = {"Fortnite: Battle Royale", "Call of Duty: Warzone", "Valorant"};


    //Inicio del proceso
    //Registro
    cout << "------------------------------ SAVE POINT ------------------------------"<<endl;
    system("pause");
    cout <<endl;
    cout << "Bienvenido a Save Point! "<<endl;
    cout << "¿Ya tienes cuenta? [Si] [No] ";
    cin >> pregunta_inicio;
        if (pregunta_inicio == "no") 
        {
            cout << "Hagamos una cuenta!"<<endl;
            cout << "Ingresa el usuario que usarás: "<<endl;
            cin >> id_register;
            cout << "Ahora ingresa tu contraseña: "<<endl;
            cin >> pwd_register;
            login_id = id_register;
            pwdlogin = pwd_register; 
            //Login usuario nuevo
            n_intentos = 0;
        do
        {

            cout << "------------------------------ Log-In SAVE POINT ------------------------------"<<endl;
            system("pause");
            cout << "Ingresa tu usuario: "<<endl;
            cin >> usuario;
            cout << "ingresa tu contraseña: "<<endl; 
            cin >> pass;
            n_intentos++; 

        } while((usuario != login_id || pass != pwdlogin) && n_intentos < intentos_disponibles);
        if (n_intentos == intentos_disponibles)
        {
            cout << "Utilizaste todos tus intentos"<<endl;
            cout << "Cuenta bloqueada";
        }  
        else
        {
            cout << "Bienvenido a tu cuenta!"<<endl;
            system("pause"); 
            cout << "[Amigos] [Comunidades]"<<endl;
            cout << "¿Que quieres hacer?";
            cin >> accion_nusuario;
            if (accion_nusuario == "amigos")
            {
                cout << "Por el momento no cuentas con ningún amigo"<<endl;
                cout << "Aquí te dejamos una lista de gente que puedes conocer: "<<endl;
                system("pause");
                for (i=0;i<10;i++)
                {
                    cout << amigos_total[i]<<endl;
                }
                
            }
            else if (accion_nusuario == "comunidades")
            {
                cout << "Por el momento no eres parte de ninguna comunidad"<<endl;
                cout << "Aquí te dejamos una lista de las comunidades más populares: "<<endl;
                system("pause");
                for (i=0;i<5;i++)
                {
                    cout << comunidades_total[i]<<endl;
                }
            }   
        }
        }
        else if (pregunta_inicio == "si")
        {
            cout << "Inicia sesión "<<endl; 
            //Login admin
            n_intentos = 0;
         do
        {
         
            cout << "------------------------------ Log-In SAVE POINT ------------------------------"<<endl;
            system("pause");
            cout << "Ingresa tu usuario: "<<endl;
            cin >> usuario;
            cout << "ingresa tu contraseña: "<<endl; 
            cin >> pass;
            n_intentos++;

        } while((usuario != id_admin || pass != pwd_admin) && n_intentos < intentos_disponibles);
        if (n_intentos == intentos_disponibles)
        {
            cout << "Utilizaste todos tus intentos"<<endl;
            cout << "Cuenta bloqueada";
        }  
        else
        {
            cout << "Bienvenido a tu cuenta!"<<endl;
            system("pause");
            cout << "[Amigos] [Comunidades]"<<endl;
            cout << "¿Qué quieres hacer?"<<endl;   
            cin >> accion_admin; 
            if (accion_admin == "amigos")
            {
                cout << "Lista de tus amigos: "<<endl;
                for (i=0;i<6;i++)
                {
                    cout << amigos_admin[i]<<endl;
                }              
            }
            else if (accion_admin == "comunidades")
            {
                cout << "Lista de tus comunidades: "<<endl;
                 for (i=0;i<3;i++)
                {
                    cout << comunidades_admin[i]<<endl;
                }   
                
            }
        }
        }
        
    return 0;

}