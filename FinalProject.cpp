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
struct Inventario
{
    string Productos[8] = {"SANDWICH", "PUPUSAS", "CROISANDWICH", "PAPAS", "CAFE", "CHOCOLATE", "SODA", "LICUADO"};
    float Precios[8] = {0.75, 0.35, 0.50, 1.00, 0.35, 0.40, 0.50, 1.25};
};

//DECLARACION DE FUNCIONES
string NombreMes(struct Fecha, int PosicionesMes); //BUSCADOR DE NOMBRE DE MES
bool InicioSesion(string Usuario, string Clave);
void InicioSesionAdmin(string Usuario, string Clave);
void Ordenar(int, string, int); //RECIBE FECHA Y SE COMIENZA A LLEVAR LAS ORDENES
void MenuDesplegable();
int BuscadorPosicion(string NombreItem, struct Inventario);  //BUSCA POSICION EN NOMBRES PRODUCTOS (STRING)
float BuscadorPrecio(int, struct Inventario);                //CON LA POSICION DE PRODUCTOS BUSCA EL PRECIO (FLOAT)
float PagoIndividual(float, int);                            //CALCULA EL PEDIDO DE UN CLIENTE DE LA ORDEN (QUE PUEDE CONTENER MAS)
float SumaMontoPedidos(float PagoGral[], int CantProductos); //SUMA LOS MONTOS DE PEDIDOS DE UN CLIENTE
void Factura(int, string[], float[], float[]);               // IMPRIME LOS DATOS DE LOS PEDIDOS DE UN CLIENTE
float MontoTotalOrden(float[], int);                         // CALCULA EL TOTAL DE LA ORDEN

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

                cout << "1) SISTEMA DE VENTAS  2) ADMINISTRACION" << endl;
                cin >> Opcion;

                do //MENU PRINCIPAL
                {

                    switch (Opcion)
                    {
                    case 0: //ROMPER EL TIEMPO SIMULADO
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
                        InicioSesionAdmin(Usuario, Clave); //LEER FICHEROS, ETC..

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

//DEFINICION DE FUNCIONES

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

void InicioSesionAdmin(string Usuario, string Clave)
{
    string User1 = "Admin1", Clave1 = "12345";
    string User2 = "Admin2", Clave2 = "54321";
    bool Acceso1 = (Usuario == User1) && (Clave == Clave1);
    bool Acceso2 = (Usuario == User2) && (Clave == Clave2);

    if ((Acceso1) || (Acceso2))
    {
        cout << "ACCESO CONCEDIDO" << endl;
        cout << endl;
        //LeerFichero();
    }
    else
    {
        cout << endl;
        cout << "ACCESO DENEGADO" << endl;
    }
}

void Ordenar(int Dia, string Mes, int Year)
{ //RECEPCION DE ORDENES
    struct Inventario Menu;
    int ContinuarOrden = 1;
    int CantPersonas = 0, CantProductos, CantItem;
    int ContOrdenes = 0, ContPedidos = 0, ContProductos = 0;
    int ItemPosicion;
    float ItemPrecio, ItemPago, SumaItemPago, PagoOrden = 0;
    string ItemNombre;
    cout << endl;

    do
    { //BUCLE DE ORDENES: Una orden puede tener Pedidos de varias personas o solo una
        cout << "Fecha: " << Dia << " / " << Mes << " / " << Year << endl;
        cout << "*********** AREA DE RECEPCION DE ORDENES ***************" << endl;
        ContOrdenes++; //SERVIRA EN LA ESCRITURA DEL FILE
        cout << "Para cuantas personas desean ordenar: " << endl;
        cin >> CantPersonas; //SERVIRA PARA CALCULAR LOS PAGOS TOTALES DE LA ORDEN

        float TotalOrden[CantPersonas]; //SUMA LOS PAGOS DE CADA PERSONA EN UNA ORDEN L 309

        for (int i = 0; i < CantPersonas; i++) //INGRESO DE PEDIDOS: Cada Cliente de la orden hace Pedido
        {
            ContPedidos++; //SERVIRA EN LA ESCRITURA DEL FILE
            MenuDesplegable();
            cout << "**************** Cliente: " << i + 1 << "***************" << endl;
            cout << "Cuantos Productos del Menu llaman su atencion: " << endl;
            cin >> CantProductos;

            string CarritoNombre[CantProductos]; //ALMACENARA LOS NOMBRES DE PRODUCTOS PEDIDOS
            float CarritoPrecio[CantProductos];  //ALMACENARA LOS PRECIOS DE PRODUCTOS PEDIDOS
            float CarritoPago[CantProductos];    //ALMACENARA LOS PAGOS POR PERSONA DE PRODUCTOS PEDIDOS

            for (int j = 0; j < CantProductos; j++) //RECIBE TODOS LOS PEDIDOS DE UNA PERSONA
            {
                cout << endl;
                cout << "*************** Ingrese Pedido ***************" << endl;
                ContProductos++; //SERVIRA EN LA ESCRITURA DEL FILE
                cout << "Ingrese el nombre del producto que desea comprar: " << endl;
                cin >> ItemNombre;
                BuscadorPosicion(ItemNombre, Menu);                //BUSCA NOMBRE DE PRODUCTO INGRESADO Y SU POSICION
                ItemPosicion = BuscadorPosicion(ItemNombre, Menu); //NOMBRE Y PRECIO TIENEN MISMA POSICION
                ItemPrecio = BuscadorPrecio(ItemPosicion, Menu);   //ENCUENTRA Y ALAMACENA EL PRECIO DEL PRODUCTO

                cout << "Ingrese la cantidad de " << ItemNombre << endl;
                cin >> CantItem; //PIDE LA CANTIDAD DE UN MISMO PRODUCTO DESEADO

                /*LLAMAR A FUNCION CREAR FICHERO (AQUI)*/

                cout << "*************** FIN Ingreso de Pedido ***************" << endl;

                PagoIndividual(ItemPrecio, CantItem); //CALCULA EL PAGO DE UN PEDIDO DE UN CLIENTE
                ItemPago = PagoIndividual(ItemPrecio, CantItem);

                CarritoNombre[j] = ItemNombre; //ALMACENA EL NOMBRE DEL PRODUCTO DESEADO
                CarritoPrecio[j] = ItemPrecio; //ALMACENA EL PRECIO A PAGAR POR UN MISMO PRODUCTO
                CarritoPago[j] = ItemPago;     //ALMACENA EL MONTO DEL PRODUCTO INGRESADO
            }                                  //FIN DE PEDIDOS DE UNA PERSONA DE LA ORDEN (QUE PUEDE TENER MAS DE UNA)

            SumaItemPago = SumaMontoPedidos(CarritoPago, CantProductos);

            Factura(CantProductos, CarritoNombre, CarritoPrecio, CarritoPago); //IMPRIME EL DETALLE DE COMPRA POR CLIENTE

            cout << "Total a Pagar por Persona: " << SumaItemPago << endl;
            TotalOrden[i] = SumaItemPago; //ALMACENA EL TOTAL DE LOS PEDIDOS DE UN CLIENTE

        } //FIN BUCLE INGRESO DE PEDIDOS E IMPRESIONDE FACTURA PARA UNA PERSONA

        PagoOrden = MontoTotalOrden(TotalOrden, CantPersonas);

        cout << " " << endl;
        cout << "*********************************************************" << endl;
        cout << "El Total a Pagar para todas las personas de la Orden es de: $" << PagoOrden << endl;
        cout << "*********************************************************" << endl;
        cout << " " << endl;

        cout << endl;
        cout << "PERMANECER recibiendo las Ordenes de: " << Dia << "/" << Mes << " Ingrese 1, si desea SALIR Ingrese 0: " << endl;
        cout << endl;
        cin >> ContinuarOrden;
    } while (ContinuarOrden == 1); //FIN BUCLE ORDENES
}

int BuscadorPosicion(string NombreItem, struct Inventario NombresProductos)
{
    for (int i = 0; i < NombreItem.length(); i++) //CONVIERTE TODAS LAS PALABRAS EN MAYUSCULAS
    {
        NombreItem[i] = towupper(NombreItem[i]);
    }

    int Posicion;
    for (int i = 0; i < 8; i++) //ENCUENTRA LA POSICION DEL PRODUCTO EN EL ARRAY
    {
        if (NombreItem == NombresProductos.Productos[i])
        {
            Posicion = i;
        }
    }
    return Posicion;
}

float BuscadorPrecio(int PosicionPrecio, struct Inventario Precio)
{ //Aqui entra la posicion del precio que es la misma del producto
    float PrecioProducto;
    PrecioProducto = Precio.Precios[PosicionPrecio];

    return PrecioProducto;
}

float PagoIndividual(float PrecioItem, int CantItem) //CALCULA EL PAGO POR EL PEDIDO DE UN CLIENTES
{
    float Pagar = PrecioItem * CantItem;
    return Pagar;
}

float SumaMontoPedidos(float ItemPagos[], int CantProductos) //CALCULO EL PAGO DE UNA PERSONA POR SUS PEDIDOS
{
    float TotalGral;
    for (int i = 0; i < CantProductos; i++)
    {
        TotalGral = TotalGral + ItemPagos[i];
    }
    return TotalGral;
}

void Factura(int CantProductos, string CarritoNombre[], float CarritoPrecio[], float CarritoPago[])
{
    for (int k = 0; k < CantProductos; k++) //IMPRIME TODOS LOS PEDIDOS DE UNA PERSONA
    {
        cout << endl;
        cout << "--------- Vea su Pedido ----------" << endl;
        cout << "Nombre: " << CarritoNombre[k] << endl;
        cout << "Precio: " << CarritoPrecio[k] << endl;
        cout << "Total por Pedido: " << CarritoPago[k] << endl;
        cout << "---------- Fin Pedido ----------" << endl;
    } //FIN BUCLE DE IMPRESION DE PEDIDOS EN CONSOLA
}

float MontoTotalOrden(float Totales[], int CantClientes)
{
    float SumaTotalPagar = 0;
    for (int i = 0; i < CantClientes; i++)
    {
        SumaTotalPagar = SumaTotalPagar + Totales[i];
    }
    cout << "PRUEBA DE RESULTADO DE FUNCION: " << SumaTotalPagar << endl;

    return SumaTotalPagar;
}

void MenuDesplegable()
{
    cout << " " << endl;
    cout << " " << endl;
    cout << "************ MENU ************" << endl;
    cout << "------------ COMIDA RAPIDA ------------" << endl;
    cout << "1) Sandwich $0.75" << endl;
    cout << "2) Pupusas $0.35 c/u" << endl;
    cout << "3) Croisandwich $0.50" << endl;
    cout << "4) Papas" << endl;

    cout << "------------ BEBIDAS CALIENTES ------------" << endl;
    cout << "5) Cafe $0.35" << endl;
    cout << "6) Chocolate $0.40" << endl;

    cout << "------------ BEBIDAS FRIAS ------------" << endl;
    cout << "7) Soda $0.50" << endl;
    cout << "8) Licuado $1.25" << endl;
    cout << "************************" << endl;
    cout << " " << endl;
} //FIN MENU
