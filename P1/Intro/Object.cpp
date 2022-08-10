//
// Created by eubgt on 8/10/22.
//

#include "Object.h"
#include <iostream>

using namespace std;

Object::Object() { setlocale(LC_ALL, "");}
void Object::show() { cout << "Mi primera línea" << endl; cout << "Hello World!" << endl;}
int Object::add(int n1, int n2){return n1+n2;}
void Object::setResult(int result_ ){ this->_addition = result_ ; }
int Object::getResult() const{return this->_addition;}


