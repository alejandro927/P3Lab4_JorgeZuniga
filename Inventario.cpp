#include "Inventario.h"

Inventario::Inventario() {
}

void Inventario::agregarP() {

	string nombre="",categoria="";
	int cantidad,precio,id;
	cout<<"Ingrese el ID del producto:";
	cin >> id;

	int bandera=0;
	do {
		bandera = 0;
		for(int i=0; i < productos.size(); i++) {
			if(productos.at(i)->getID() == id) {
				bandera++;
			}
		}
		if(bandera!=0) {
			cout<<"El id ya existe ingrese uno nuevo:";
			cin >> id;
		}

	} while(0 != bandera);

	cout<<"Ingrese el nombre del producto:";
	getline(cin,nombre);
	getline(cin,nombre);
	cout<<"Ingrese el precio del producto:";
	cin >> precio;
	while(precio < 0) {
		cout<<"El precio no puede ser negativo ingrese uno nuevo:";
		cin >> precio;
	}
	cout<<"Ingrese la cantidad del producto:";
	cin>>cantidad;
	while(cantidad < 0) {
		cout<<"La cantidad no puede ser negativa ingrese una nuevo:";
		cin >> cantidad;
	}

	cout<<"Ingrese la categoria del producto:";
	cin>>categoria;
	int cont=0;
	for(int i=0; i < categorias.size(); i++) {
		if(categoria == categoria) {
			cont++;
		}
	}
	if(cont==0) {
		categorias.push_back(categoria);
	}
	productos.push_back(new Producto(id,cantidad,precio,nombre,categoria));
}

void Inventario::modificarP(int id, int num) {
	switch(num) {
		case 1: {
			string nombre="";
			cout<<"Ingrese el nuevo nombre:";
			getline(cin,nombre);
			getline(cin,nombre);
			for(int i=0; i < productos.size(); i++) {
				if(productos.at(i)->getID() == id) {
					productos.at(i)->setnombre(nombre);
				}
			}
		}
		break;
		case 2: {
			int cantidad;
			cout<<"Ingrese la nueva cantidad:";
			cin>>cantidad;
			for(int i=0; i<productos.size(); i++) {
				if(productos.at(i)->getID() == id) {
					productos.at(i)->setcantidad(cantidad);
				}
			}
		}
		break;
		case 3: {
			int precio;
			cout<<"Ingrese el nuevo precio:";
			cin >>precio;
			for(int i=0; i<productos.size(); i++) {
				if(productos.at(i)->getID() == id) {
					productos.at(i)->setprecio(precio);
				}
			}
		}
		break;
	}
}

void Inventario::eliminarP(int id) {
	for(int i=0; i < productos.size(); i++) {
		if(productos.at(i)->getID() == id) {
			productos.erase(productos.begin()+i);
		}
	}
}

void Inventario::Listar() {
	for(int i = 0; i < productos.size(); i++) {
		Producto *c = productos[i];
		cout <<"------" << "Producto #" << i <<"------"<<endl;
		cout << "Id: "<< c->getID() << endl;
		cout << "Nombre: "<< c->getnombre() << endl;
		cout << "Precio: "<< c->getprecio() << endl;
		cout << "Cantidad: " << c->getcantidad() << endl;
		cout << "Categoria: " << c->getcategoria() << endl;
	}
}

void Inventario::estadisticasGen() {

	for(int i = 0; i < productos.size(); i++) {
		Producto *c = productos[i];
		cout <<"------" << "Producto #" << i <<"------"<<endl;
		cout << "Id: "<< c->getID() << endl;
		cout << "Nombre: "<< c->getnombre() << endl;
		cout << "Precio: "<< c->getprecio() << endl;
		cout << "Cantidad: " << c->getcantidad() << endl;
		cout << "Categoria: " << c->getcategoria() << endl;
	}


	/*int contador1=0,contador2=0,contador3=0;
	for(int i = 0; i < productos.size(); i++) {
		contador1 += productos.at(i)->getcantidad();
	}
	cout <<"Cantidad total de productos: "<<contador1;
	cout<<"La cantidad de productos unicos son:"<<productos.size();

	int valorx=0;
	for(int i = 0; i < productos.size(); i++) {
		valorx=0;
		valorx = productos.at(i)->getcantidad() * productos.at(i)->getprecio();
		contador2 += valorx;
	}
	cout<<"El precio total del inventario es:"<<contador2;
	couy<<endl;
	int val=0;
	for(int j = 0; j < categorias.size(); j++) {
		contador3=0;
		for(int i = 0; i < productos.size(); i++) {
			if(categorias[i] == productos.at(i)->getcategoria()) {
				contador3 += productos.at(i)->getcantidad();
			}
		}
		cout<<"Categoria= "<<categoria[i] " = " << contador3;
	}*/



}
