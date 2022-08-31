#include <iostream>

using namespace std;

int main()
{
    int var1;
    int *ap_var1;

    // cout << "Dime un valor entero: ";
    // cin >> var1;

    // ap_var1 = &var1;

    // /* Primera opción: sin apuntadores */
    // cout << "\tEl nombre de la variable es var1" << endl;
    // cout << "\tEl valor de la variable es " << var1 << endl;
    // cout << "\tLa dirección de la variable es " << &var1
    // <<endl << endl << endl;

    // /* Segunda opción: con apuntadores */
    // cout << endl;
    // cout << "\tEl nombre de la variable es: var1" << endl;
    // cout << "\tEl valor de la variable es: " << *ap_var1 << endl;
    // cout << "\tLa dirección de la variable es: " << ap_var1 << endl;
    // cout << endl
    //      << endl
    //      << endl;

    // /*Arreglo de enteros manejado como apuntador a enteros */
    // int lista[6] = {10, 20, 30};
    // cout << "lista: " << lista << endl; //Dirección del primer elemento de la lista
    // cout << "lista + 0: " << lista + 0 << endl; //Dirección del primer elemento de la lista
    // cout << "lista + 1: " << lista + 1 << endl; //Dirección del segundo elemento de la lista
    // cout << "lista + 4: " << lista + 4 << endl; //Dirección del quinto elemento
    // cout << "lista[0] o *lista: " << *lista << endl; //Valor del primer elemento de la lista
    // cout << "lista[5] o *lista +5: " << *(lista + 5) << endl; //Valor del quinto elemento de la lista

    /*Apuntador a un arreglo de enteros*/
    int lista[] = {10,20,30};
    int *ap_lista = new int[3]; // Apuntador a un arreglo
    ap_lista = lista;
    cout << "ap_lista: " << ap_lista << endl; //Dirección del primer elemento de la lista
    cout << "ap_lista + 0: " << ap_lista + 0 << endl; //Dirección del primer elemento de la lista
    cout << "ap_lista + 1: " << ap_lista + 1 << endl; //Dirección del segundo elemento de la lista
    cout << "ap_lista + 4: " << ap_lista + 4 << endl; //Dirección del quinto elemento   
    cout << "ap_lista[0] o *ap_lista: " << *ap_lista << endl; //Valor del primer elemento de la lista
    cout << "ap_lista[5] o *ap_lista +5: " << *(ap_lista + 5) << endl; //Valor del quinto elemento de la lista
    
}
