#include "Producto.h"
Producto::Producto(){
  // cout<<"llamaron al vacio" << endl;
}

Producto::Producto(int I,int c,int p, string n,string cat){
  this->ID = I;
  this->cantidad = c;
  this->precio = p;
  this->nombre = n;
  this->categoria = cat;
}
Producto::~Producto(){
  //cout << "Se elimino el inventario" << endl;
}

int Producto::getID(){
  return this->ID;
}

void Producto::setID(int I){
  this->ID = I;
}

int Producto::getcantidad(){
  return this->cantidad;
}

void Producto::setcantidad(int c){
  this->cantidad = c;
}

int Producto::getprecio(){
  return this->precio;
}

void Producto::setprecio(int p){
  this->precio = p;
}

string Producto::getnombre(){
  return this->nombre;
}

void Producto::setcategoria(string cat){
  this->categoria = cat;
}
string Producto::getcategoria(){
  return this->categoria;
}

void Producto::setnombre(string n){
  this->nombre = n;
}
