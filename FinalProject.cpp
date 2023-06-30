#include <iostream> //RAMA TiempoForma2Funciones PARA HACER PRUEBAS AGREGANDO FUNCIONES

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
bool InicioSesion(string Usuario, string Clave);
void Ordenar(int, string, int); //RECIBE FECHA Y SE COMIENZA A LLEVAR LAS ORDENES

int main()
{
    int Continuar1 = 1;

    do
    {
        struct Fecha SimulTiempo;
        int Year, Continuar2 = 1;

        cout << "CONFIGURACIONES INICIALES PARA EL PROGRAMA 'MALWARE' DE REGISTRO DE VENTAS" << endl;
        cout << "Ingrese el Year de inicio de operaciones: " << endl; //DEFINIR YEAR CADA 12 MESES
        cin >> Year;
        cout << endl;
        cout << endl;

        for (int i = 0; i < 12; i++)
        {

            string MesCorriente;
            MesCorriente = NombreMes(SimulTiempo, i); //ALMACENA EL MES EN QUE SE ENCUENTRA EL SISTEMA DE VENTAS

            for (int j = 1; j < 31; j++)
            {
                cout << "Fecha: " << j << " / " << MesCorriente << " / " << Year << endl;
                cout << "----------------BIENVENID@ A RESTAURANTE SABOR CASERO----------------" << endl;
                cout << endl;
                string Usuario, Clave;
                int Opcion;

                cout << "1) SISTEMA DE VENTAS  2) HISTORIAL" << endl;
                cin >> Opcion;

                do //MENU PRINCIPAL
                {

                    switch (Opcion)
                    {
                    case 0://ROMPER EL TIEMPO SIMULADO
                        cout << endl;
                        cout << "OPCION SECRETA DE FORMATEO" << endl;
                        cout << "Seguira rompiendo el tiempo, Ingrese 0 " << endl;
                        cin >> Continuar2;
                        cout << endl;
                        break;
                    case 1: //Sistema de Ventas
                        bool Acceso;
                        cout << endl;
                        cout << "*********** Come con confianza ***********" << endl; //LOGIN
                        cout << "Ingrese el usuario: " << endl;
                        cin >> Usuario;
                        cout << "Ingrese la clave: " << endl;
                        cin >> Clave;

                        Acceso = InicioSesion(Usuario, Clave);
                        if (Acceso == true)
                        {
                            Ordenar(j, MesCorriente, Year); //MENU SECUNDARIO
                        }
                        break;

                    case 2: //Configuraciones
                        cout << endl;
                        cout << "*********** Come con confianza ***********" << endl;
                        cout << "Ingrese el usuario Administrador: " << endl;
                        cin >> Usuario;
                        cout << "Ingrese la clave de Administrador: " << endl;
                        cin >> Clave;
                        //InicioSesionAdmin(Usuario, Clave);

                        break;
                    }
                    cout << endl;
                    cout << "********************************************************************" << endl;
                    cout << "Confirmacion: PERMANECER en dia: " << j << "/" << MesCorriente << " Ingrese 1" << endl;
                    cout << "Confirmacion: Si desea AVANZAR al siguiente dia, Ingrese 0" << endl;
                    cin >> Continuar2;
                    cout << "********************************************************************" << endl;
                    cout << endl;
                } while (Continuar2 == 1);

            } //FIN BUCLE DE 1 MES
        }     //FIN BUCLE DE 12 MESES

        cout << "Si desea Continuar en el siguiente Year, Ingrese 1" << endl;
        cin >> Continuar1;

        if (Continuar1 == 1) //CONDICION PARA SEGUIR AL SIGUIENTE YEAR
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

    } while (Continuar1 == 1); //ESTE BUCLE PERMITE AVANZAR AL SIGUIENTE YEAR

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
bool InicioSesion(string Usuario, string Clave)
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
        //Ordenar();
        return true;
    }
    else
    {
        cout << endl;
        cout << "ACCESO DENEGADO" << endl;
        return false;
    }
}
void Ordenar(int Dia, string Mes, int Year)
{ //RECEPCION DE ORDENES
    int ContinuarOrden = 1;
    int CantidadPersonas, ContadorOrden = 0;
    cout << endl;
    cout << "Fecha: " << Dia << " / " << Mes << " / " << Year << endl;

    do
    {
        cout << "*********** AREA DE RECEPCION DE ORDENES ***************" << endl;
        cout << "Para cuantas personas desean ordenar: " << endl;
        cin >> CantidadPersonas;
        ContadorOrden++;

        cout << endl;
        cout << "PERMANECER recibiendo las Ordenes de: " << Dia << "/" << Mes << " Ingrese 1, si desea SALIR Ingrese 0: " << endl;
        cout << endl;
        cin >> ContinuarOrden;
    } while (ContinuarOrden == 1);

    float TotalOrden[CantidadPersonas];
}