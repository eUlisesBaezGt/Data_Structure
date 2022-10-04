// ESTRUCTURA DE DATOS COLA CON SUS PARÁMETROS

// Es una estructura de datos lineal, finita y homogénea. Caracterizada por 
// 4 parámetros en sus forma estática: Mínimo, Máximo, Principio y final.
// Y 2 parámetros en su forma dinámica: Principio y final (ya que no tenemos límites
// de tamaño). 

// Las dos operaciones que podemos realizar son insertar y extraer. 
// Realizamos las inserciones por el extremo final y las extracciones por el inicio.
// Esquema FIFO (First In First Out)


// CONSISTE Y FORMA DE OPERAR DE COLA CIRCULAR

// Las inserciones se realizan por la cola hasta llenarla, y conforme se van extrayendo 
// elementos se liberan lugares que se ocupan para poder seguir insertando, es decir, al 
// llenarse, los elementos que se van insertando ocupan las primeras localidades que ya 
// están libres.

// Sabemos que se llena si el inicio es igual a mínimo y el final es igual al máximo o
// si el final más uno es igual al inicio.