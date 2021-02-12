#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <iostream>
#include <vector>
#include "Producto.h"
#include <string>
using namespace std;
class Inventario {
		
	private:
		vector<Producto*> productos;
		vector<string> categorias;
	
	public:	
		Inventario();
		~Inventario();
		Inventario(vector <Producto*> );
		void agregarP();
		void modificarP(int,int);
		void eliminarP(int);
		void busqueda();
		void estadisticasGen();
		void Listar();
		
};
#endif
