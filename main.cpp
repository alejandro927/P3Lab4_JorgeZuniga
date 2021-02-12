#include <iostream>
#include <vector>
#include "Inventario.h"
#include "Producto.h"
using namespace std;
using std::vector;
int main(int argc, char** argv) {

	Inventario* in = new Inventario();

	int opcion = -1;
	while(opcion != 4) {
		cout << "====Menu===="<<endl<<"Ingrese una opcion \n 1) Mantenimiento de Productos\n 2) Estadisticas Generales\n 3) Busqueda por nombre\n 4) salir" << endl;
		cout << "Opcion: ";
		cin >> opcion;
		switch(opcion) {
			case 1: {
				int opcion1=0;
				while(opcion1 != 4) {
					cout<<"====Sub-Menu===="<<endl<<"Ingrese una opcion \n 1) Agregar Producto\n 2) Modificar Producto\n 3) Eliminar Producto\n 4) salir\n";
					cout << "Opcion: ";
					cin>>opcion1;
					switch(opcion1) {
						case 1: {
							in->agregarP();
						}
						break;
						case 2: {
							int i,num;
							cout<<"Ingrese el id del producto a modificar:";
							cin>>i;
							cout<<"Que desea modificar\n 1)Nombre\n 2)Cantidad \n 3)Precio \n";
							cout<<"Ingrese su opcion:";
							cin>>num;
							in->modificarP(i,num);
						}
						break;
						case 3: {
							int id;
							cout<<"Ingrese el id del producto a eliminar:";
							cin>>id;
							in -> eliminarP(id);
						}
						break;
					}
				}
			}
			break;
			case 2: {
				in -> estadisticasGen();
			}
			break;
			case 3: {

			}
			break;

		}
	}
	//delete in;
}
