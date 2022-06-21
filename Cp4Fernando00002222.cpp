
#include <iostream>
using namespace std;

int factura(int pagofactura);
int validacion(int numcel);
string confirmacion(string correo, string confi_correo);

int main()
{
    string correo, confi_correo;
    int pagofactura, descuentofactura, descuentofinal, Celnuevo, numcel;
    int opt;
    do
    {
        cout << " Gracias por llamar a Claro, la mejor red de El Salvador " << endl;
        cout << " Para pago de factura presione 1 " << endl;
        cout << " Para cambio de numero de telefono presione 2 " << endl;
        cout << " Para cambiar plan de celular presione 3 " << endl;
        cout << " Para agenda de citas presione 4 " << endl;
        cout << " Para salir presione 5 " << endl;
        cin >> opt;


        switch (opt)
        {
        case 1:

            cout << "Estas llamando al departamento de pagos de facturas" << endl;
            do
            {
                cout << "porfavor ingrese el valor de su factura " << endl;
                cin >> pagofactura;
            }

            while (pagofactura <= 0);

            factura(pagofactura);

            break;


        case 2:

            cout << "Estas llamando al departamento de Cambio de numero de telefono " << endl;
            cout << " Ingrese su numero de telefono para ser cambiado " << endl;
            cin >> numcel;

            validacion(numcel);

            cout << " Su numero de telefono ha sido ingresado correctamente, pronto le enviaremos un mensaje " << endl;
            break;


        case 3:

            cout << " Estas llamando al departamento de renovacion de plan de celular " << endl;
            cout << " celulares disponibles: Samsung s21 ultra , IPhone 11 pro max , LG stylus , huawei p40 pro. " << endl;
            cout << " Para adquirir Samsung s21 ultra, presione 1 " << endl;
            cout << " Para adquirir Iphone 11 pro max, presione 2 " << endl;
            cout << " Para adquirir LG Stylus, presione 3 " << endl;
            cout << " Para adquirir Huawei P40 pro, presione 4 " << endl;
            do
            {
                cout << " Presione un numero para el telefono que desea adquirir " << endl;
                cin >> Celnuevo;

            } while (Celnuevo <= 0 || Celnuevo > 4);

            if (Celnuevo == 1)
            {
                cout << " El celular Samsung s21 ultra ha sido agregado su plan de renovacion ";
            }

            else if (Celnuevo == 2)
            {
                cout << " El celular Iphone 11 pro max ha sido agregado a su plan de renovacion  ";
            }
            else if (Celnuevo == 3)
            {
                cout << " El celular LG Stylus ha sido agregado a su plan de renovacion ";
            }
            else if (Celnuevo == 4)
            {
                cout << " El celular Huawei P40 pro ha sido agregado a su plan de renovacion  ";
            }
            break;


        case 4:

            cout << " Usted esta llamando al departamento de citas " << endl;
            cout << " Ingrese su correo para agendarle una cita";
            cin >> correo;
            cout << " Vuelva a ingresar su correo ";
            cin >> confi_correo;
            confirmacion(correo, confi_correo);


        case 5:
            cout << "Gracias por llamar al operador de claro";
            break;


        default:
            cout << " La numero que marco no es valido, porfavor intente de nuevo ";
            break;
        }
    } while (opt != 5);

    return 0;
}



int factura(int pagofactura)
{

    if (pagofactura >= 40)
    {
        cout << " Su monto a pagar es mayor a 40 dolares, por lo tanto se la aplicara el 15% de descuento " << endl;
        pagofactura *= 0.85;
        cout << " el valor a cancelar es de $ " << pagofactura << endl;
    }
    else
    {
        cout << "Su monto a cancelar es menor de 40$, su total a pagar es : " << pagofactura << endl;
    }
    return pagofactura;
}

int validacion(int numcel)
{

    bool valido = false;

    do
    {
        if (numcel > 99999999 || numcel < 10000000)
        {
            cout << " El numero que ingreso no es valido, vuelva a intentarlo ";
            cin >> numcel;
        }

        else
        {
            valido = true;
        }

    } while (valido == false);
}

string confirmacion(string correo, string confi_correo)
{
    bool validar = false;

    do
    {
        if (correo == confi_correo)
        {
            cout << "Su correo ha sido validado, pronto le agendaremos la cita " << endl;
            validar = true;
        }

        else
        {
            cout << " El correo no coincide, vuelva a intentarlo " << endl;
            cout << " Ingrese su correo para agendarle una cita ";
            cin >> correo;
            cout << " Vuelva a ingresar su correo ";
            cin >> confi_correo;
        }

    } while (validar == false);
}
