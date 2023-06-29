#include <iostream>

using namespace std;

//FUNCIONES
void InicioSesion(string Usuario, string Clave);
void Tiempo();
//void Ordenar(string, int, string);

struct Fecha
{
    string Mes[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int Semanas[4];
    string Dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
};
/*struct Inventario
{
};*/

int main()
{

    string Usuario, Clave;
    int Opcion, Continuar = 1;

    cout << "----------------Restaurante Sabor Casero----------------" << endl;
    cout << endl;
    do
    {
        cout << "0) SALIR 1) SISTEMA DE VENTAS  2) ADMINISTRACION" << endl;
        cin >> Opcion;

        switch (Opcion)
        {
        case 0: //OPCION SALIR
            cout << "Para confirmar Salida del Sistema Ingrese 0, sino Ingrese 1: " << endl;
            cin >> Continuar;
            break;
        case 1: //AREA DE VENTAS
            cout << "*********** Come con confianza ***********" << endl;
            cout << "Ingrese el usuario: " << endl;
            cin >> Usuario;
            cout << "Ingrese la clave: " << endl;
            cin >> Clave;
            InicioSesion(Usuario, Clave);
            break;

        case 2: //ADMINISTRACION
            cout << "*********** Come con confianza ***********" << endl;
            cout << "Ingrese el usuario Administrador: " << endl;
            cin >> Usuario;
            cout << "Ingrese la clave de Administrador: " << endl;
            cin >> Clave;

            break;
        }

    } while (Continuar == 1);

    return 0;
}

void InicioSesion(string Usuario, string Clave)
{
    string User1 = "user1", Clave1 = "12345";
    string User2 = "user2", Clave2 = "54321";
    string User3 = "user3", Clave3 = "56789";
    bool Acceso1 = (Usuario == User1) && (Clave == Clave1);
    bool Acceso2 = (Usuario == User2) && (Clave == Clave2);
    bool Acceso3 = (Usuario == User3) && (Clave == Clave3);

    if ((Acceso1) || (Acceso2) || (Acceso3))
    {
        cout << "ACCESO CONCEDIDO" << endl;
        cout << endl;
        Tiempo();
    }
    else
    {
        cout << endl;
        cout << "ACCESO DENEGADO" << endl;
    }
}
void Tiempo()
{
    struct Fecha CurrentYear;
    //int* Year;
    int YearInicio = 2023, Continuar=1, ContadorSemana = 0;
    string IdentificadorMes, DiaActual;

    do
    {

        for (int i = 0; i < 12; i++)
        { //LLEVA EL CONTEO DE LOS MESES DEL AÑO
            IdentificadorMes = CurrentYear.Mes[i];
            int ContadorDia = 0;
            cout << "Identificador de Mes: " << IdentificadorMes << endl;

            for (int j = 0; j < 4; j++)
            { //LLEVA EL CONTEO DE LOS DIAS DEL MES
                CurrentYear.Mes[j];
                ContadorSemana = CurrentYear.Semanas[j];
                //cout << "Contador de Semanas: " <<  << endl;

                for (int k = 0; k < 7; k++)
                {
                    ++ContadorDia;
                    //IDENTIFICADOR DIA ACTUAL Y FECHA COMPLETA
                    DiaActual = CurrentYear.Dias[k];
                    cout << "Fecha: " << DiaActual << " " << ContadorDia << "/" << IdentificadorMes << "/" << YearInicio << endl;

                } //GENERADOR DE DIAS DE LA SEMANA
                cout << endl;
            } //FIN CONTEO DE 30 DIAS EN CADA MES
            cout << endl;
        } //FIN CONTEO DE 12 MESES EN 1 YEAR

        cout << "Si desea Formatear definitivamente los 12 meses registrados por el programa Ingrese: 0 " << endl;
        cout << "Si desea continuar 12 meses mas Ingrese: 1" << endl;
        cin >> Continuar;

        if (Continuar == 1)
        {
            cout<<endl;
            cout<<"*********************************************************"<<endl;
            cout << "El programa seguira en produccion por otros 12 meses" << endl;
            YearInicio++;
            cout << "Estos nuevos 12 meses perteneceran al Year: " << YearInicio << endl;
            cout<<"*********************************************************"<<endl;
            cout<<endl;
        }
        else
        {
            cout<<endl;
            cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
            cout << "El programa no dara mas continuidad a lo realizado anteriormente." << endl;
            cout << "Sin embargo, podra seguir usandose con el YearInicio que tiene por defecto." << endl;
            cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
            cout<<endl;
        }
    } while (Continuar == 1); //FIN DE 12 MESES
} //FIN DE FUNCION TIEMPO

//void Ordenar(string DiaNombre, int DiaNumero, string NombreMes) {}
