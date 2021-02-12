#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>
using std::string;
class Producto
{
	private:
		int ID;
		int cantidad;
		int precio;
		string nombre;
		string categoria;
	public:
		Producto();
		Producto(int,int,int,string,string);
		~Producto();
		int getID();
		int getcantidad();
		int getprecio();
		string getnombre();
		string getcategoria();
		void setID(int);
		void setcantidad(int);
		void setprecio(int);
		void setnombre(string);
		void setcategoria(string);
};
#endif
