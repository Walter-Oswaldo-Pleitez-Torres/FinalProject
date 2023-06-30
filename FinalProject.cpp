#include <iostream>

using namespace std;

struct Fecha
{
    string Mes[12] = {
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre",
    };
};

string NombreMes(struct Fecha, int PosicionesMes); //BUSCADOR DE NOMBRE DE MES
void Ordenar(int, string, int);                    //RECIBE FECHA Y SE COMIENZA A LLEVAR EL SISTEMA DE VENTAS

int main()
{
    int Continuar = 1;

    do
    {
        struct Fecha SimulTiempo;
        int Year;

        cout << "Ingrese el Year de inicio de operaciones: " << endl; //DEFINIR YEAR CADA 12 MESES
        cin >> Year;

        for (int i = 0; i < 12; i++)
        {

            string MesCorriente;
            MesCorriente = NombreMes(SimulTiempo, i); //ALMACENA EL MES EN QUE SE ENCUENTRA EL SISTEMA DE VENTAS

            for (int j = 1; j < 31; j++)
            {
                //PRUEBA DE FECHA: cout << "Fecha: " << j << " / " << MesCorriente << " / " << Year << endl;
                //FUNCION ORDENAR()
                cout << "----------------BIENVENID@ A RESTAURANTE SABOR CASERO----------------" << endl;
                cout << endl;

            } //FIN BUCLE DE 1 MES
        }     //FIN BUCLE DE 12 MESES

        cout << "Si desea Continuar en el siguiente Year, Ingrese 1" << endl;
        cin >> Continuar;

        if (Continuar == 1) //CONDICION PARA SEGUIR AL SIGUIENTE YEAR
        {
            cout << endl;
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << "Bienvenido, Podra seguir 12 meses mas " << endl;
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << endl;
            cout << "PRUEBA DE NUEVO YEAR: " << Year << endl;
        }
        else
        {
            cout << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "El programa dejara de llevar continuidad, sin embargo podra seguir desde el Year por defecto" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << endl;
        }

    } while (Continuar == 1); //ESTE BUCLE PERMITE AVANZAR AL SIGUIENTE YEAR

    return 0;
}

string NombreMes(struct Fecha, int PosicionMes)
{
    Fecha GetMes;
    string MesActual; //ALMACENA EL MES DE ACTUAL
    switch (PosicionMes)
    {
    case 0:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES ENERO
        break;
    case 1:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES FEBRERO
        break;
    case 2:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES MARZO
        break;
    case 3:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES ABRIL
        break;
    case 4:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES MAYO
        break;
    case 5:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES JUNIO
        break;
    case 6:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES JULIO
        break;
    case 7:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES AGOSTO
        break;
    case 8:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES SEPTIEMBRE
        break;
    case 9:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES OCYUBRE
        break;
    case 10:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL MES NOVIEMBRE
        break;
    case 11:
        MesActual = GetMes.Mes[PosicionMes]; //IDENTIFICADOR DEL NOMBRE DEL DIA DICIEMBRE
        break;
    }
    PosicionMes++;

    return MesActual;
}
void Ordenar(int Dia, string Mes, int Year)
{
    cout << "Fecha: " << Dia << " / " << Mes << " / " << Year << endl;
}