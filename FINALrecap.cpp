//
//Datos simples: un solo valor a la vez
//
//Datos estructurados: varios valores a la vez
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//
//Estructuras de datos:. colección de datos que se caracterizan por una
//organización y las operaciones que se definen en ellas.
//
//TDA (Tipo de datos abstractos): Diseño de una estructura, basado en la abstracción.
//
//ABSTRACCIÓN; considerar de forma independiente elementos unidos, para solo contemplar los indispensables.
//
//ABSTRACCIÓN DE DATOS: representar características básicas de una estructura de acuerdo a una serie de reglas.
//
//Colecciones de variables homogéneas o heterogéneas.
//
//Funciones principales: introducir, procesar, mantener, recuperar
//
//SIRVEN: para organizar información de manera eficiente en el diseño más completos para solucionar un problema.
//
//USOS: manejo dinámico de memoria, recuperar información, almacenar grandes conjuntos de dato.s
//
//Forma más fácil: struct
//
//Clasificación:
//- Estáticas: arreglos
//- Dinámicas: -lineales: pilas, colas
//             - no lineales: árboles, grafos
//
//Arreglos: colección ordenada de datos que se emplean para almacenar valores de un mismo tipo.
//
//Pilas: estructura en la que se accede vía LIFO (Last In First Out)
//
//Colas: estructura en la que se accede vía FIFO (First In First Out), y por alguno de los extremos.
//
//Árboles: estructura que representa datos con una relación jerárquica (predecesor y sucesores)
//
//Grafos: estructura formada por un conjunto de puntos y líneas, que unen a estos.------------------
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//
//    1. TDA y Estructuras de Datos
//2. Arreglos
//3. Registros
//    4. Recursión
//5. Pilas
//6. Colas
//7. Listas
//8. Árboles
//9. Grafos
//
//ESPECIFICACIÓN LÓGICA DE UN TDA
//1. Tipo de datos
//2. Organización
//3. Operaciones
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//
//INSERTAR:
//1. Revisar capacidad
//2. Localizar posicion
//3. Desplazar a la derecha
//4. Insertar en posición
//5. Actualizar capacidad
//
//BORRAR:
//1. Localizar posicion
//2. En caso falso: informar/terminar
//3. Desplazar a la izquierda. Posición siguiente y hasta ocupados-1
//4. Limpiar posición
//5. Actualizar capacidad
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//
//ARREGLO: dato estructurado que se emplea para almacenar valores de un mismo tipo en una misma variable.
//Finito, homogéneo y ordenado. tipo nombre [tam]
//Localidades contiguas de memoria.
//1. Lectura
//2. Asignación
//3. Modificación
//4. Inserción
//5. Borrado
//6. Busqueda
//7. Ordenación
//
//ARREGLO BIDIMENSIONAL: dato estructurado para tener varios datos con el mismo nombre.
//2 ÍNDICES
//
//Valores organizados en forma de matriz, renglones y columnas. Se
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//
//REGISTROS: dato estructurado formado por un conjunto limitado de elementos, sin importar el tipo. En
//Elemento = campo.
//
//Nombre, NO posicion



// Apuntadores: variables que almacenan direcciones de memoria.
// No almacena directamente el valor, sino la dirección de memoria donde se encuentra el valor.

// Aritmética de apuntadores: operaciones de suma y resta de constantes realizables sobre los apuntadores.
// Al sumar 1, se obtiene la dirección de la siguiente localidad de memoria.
// Sumas o restas constantes, no apuntadores

// VENTAJAS DE APUNTADORES:
// - Aritmética de apuntadores facilita lógica de varios algoritmos.
// - Asignación dinámica de memoria.

// Asignación estática: durante compilación
// Asignación dinámica: durante ejecución

// ------------------------------------------
// PILAS
// Dato estructurado lineal, homogéneo y finito. Tiene 3 atributos principales: mínimo, máximo y tope. Se pueden realizar dos operaciones: insertar y extraer.
// Ambas operaciones se realizan por el mismo extremo (tope).

// PUSH: insertar un elemento en la pila
// a). Verificar que existe capacidad disponible en la pila. Si Tope es igual a Máximo, la pila está llena.
// b). Incrementar el valor de “Tope”.
// c). Insertar el nuevo valor en la posición señalada por “Tope”.

// POP: extraer un elemento de la pila
// a). Verificar que hay valores en la pila. Si Tope es menor que Mínimo, la pila está vacía.
// b). Extraer el valor de la posición señalada por “Tope”.
// c). Decrementar el valor de “Tope”.

// PEEK: consultar el valor del elemento en el tope de la pila
// a). Verificar que hay valores en la pila. Si Tope es menor que Mínimo, la pila está vacía.
// b). Mostrar el valor de la posición señalada por “Tope”.

// ------------------------------------------
// PILAS
// Estructuras de datos de entrada ordenadas
// Acceso a datos: LIFO (Last In First Out)

// Insertar y retirar por el mismo extremo.
// Último en entrar, primero en salir.

// Para insertar elementos en una pila se deben seguir los siguientes
// pasos:
// 1. Se debe de crear el espacio en memoria para almacenar un nodo
// 2. Cargar el valor dentro de un nodo
// 3. Cargar el puntero pila dentro del nodo
// 4. Asignar el nuevo nodo a la pila

// - Navegador Web – Almacenamiento de sitios previamente visitados
// - Editor de texto – Los cambios efectuados son almacenados en una pila


// ------------------------------------------
// INFIJA A POSTFIJA
// - Leer de uno en uno los caracteres de la cadena infija
// - Si el carácter es una variable o constante se concatena a cadena posfija
// - Si el carácter es un operador
//     - si es de mayor precedencia que el del tope se inserta a la pila,
//     - si es de menor o igual, se extraen todos los de mayor precedencia en la pila concatenándolos en cadena posfija y luego se inserta en la pila
// - Si es Paréntesis izquierdo, se inserta en la pila (se considera de precedencia 0)
// - Si es Paréntesis derecho, se extraen repetidamente todos los de la pila, concatenándolos a la cadena posfija, hasta encontrar un paréntesis izquierdo
// - Al terminar cadena infija, se vacía la pila, insertando a posfija


// ------------------------------------------
// INFIJA A PREFIJA

// COLA
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

/*
LISTA
Lineal, fundamental, homogéneo, finito. Cada elemento se llama nodo. Insertar, extraer, recorrer, buscar y ordenar.
No hay restricciones para insertar ni extraer.}
*/

/*
LISTAS ENLAZADAS
Son listas no contirguas y se usan para información que cambia de manera frecuente.
Conjunto de nodos en el que cada nodo tiene su campo de información y la ubicación del siguiente nodo de la lista (enlace o liga).
CABECERA
Final->nullptr
No se desplaza en inserción y extracción, solo cambiamos los enlaces
*/

/*
LISTA CIRCULAR
Lista enlazada donde el último nodo apunta al primero.
Cualquier nodo se puede acceder desde cualquier otro. Riesgo de ciclos infinitos.
*/

/*
LISTA DOBLEMENTE ENLAZADA
Se puede recorrer en ambos sentidos. SIGUIENTE, ANTERIOR, INFORMACIÓN
FINAL
*/

/*
ESTÁTICA
Insertar:
1. Revisar que tenga capacidad
2. Seleccionar en que posición debe insertarse
3. Desplazar a partir de esa posición y hasta el final una posición a
la derecha, empezando por el final
4. insertar el nuevo nodo
Extraer:
1. Revisar que haya nodos en la lista
2. Seleccionar el nodo que se desea borrar
3. A partir del nodo seleccionado desplazarlos todos a la izquierda.
4. Colocar un nulo en el último nodo
*/

/*
LIGADA
Insertar:
1. Localizar la posición en que se
insertará
2. Crear un nodo nuevo
3. Llenar el campo de información del
nodo nuevo
4. Colocar en el enlace del nodo
nuevo el enlace del nodo “anterior”
5. En el enlace del nodo anterior
colocar la dirección del nuevo nodo
INSERTAR INICIO
1. Crear un NODO nuevo
2. Llenar el campo de información del nodo nuevo
3. Llenar el campo de enlace del nodo nuevo con
la dirección de “cabecera”
4. Igualar “cabecera” a la dirección del nuevo nodo
INSERCION Final
1. Crear un NODO nuevo
2. Llenar el campo de información del nodo nuevo
3. Apuntar a NULO el campo de enlace del nuevo nodo
4. Apuntar a nuevo nodo el campo de enlace de FINAL
Extraer:
1. Localizar el nodo a extraer, conservando el nodo anterior
2. Tomar e informar la información a extraer
3. Apuntar el enlace de nodo anterior al nodo que sigue al
extraído
4. Eliminar el nodo extraído
EXTRAER FINAL
1. Localizar el nodo final y su anterior
2. Tomar e informar la información del nodo a
extraer
3. Apuntar a NULO el enlace del nodo anterior
4. Apuntar la variable final a nodo anterior
5. Eliminar el nodo extraído
EXTRAER INICIO
1. Localizar nodo señalado por cabecera
2. Tomar e informar la información del nodo a
extraer
3. Apuntar cabecera al siguiente de cabecera
4. Eliminar el nodo extraído
*/


/*
* DOBLE enlace
Insertar:
1. Localizar posición para insertar
2. Generar nuevo nodo “C”
3. Incluir información en el nodo “C”
4. Enlace siguiente de “C” apunta a “B”
5. Enlace anterior de “C” apunta a “A”
6. Enlace siguiente de “A” apunta a “C”
7. Enlace anterior de “B” apunta a “C”
INSERTAR INICIO
1. Generar nuevo nodo “A”
2. Incluir información en el nodo “A”
3. Enlace siguiente de “A” apunta a “B”
4. Enlace anterior de “A” apunta a “nulo”
5. Enlace anterior de “B” apunta a “A”
6. Cabecera apunta a “A”
INSERCION Final
1. Generar nuevo nodo “A”
2. Incluir información en el nodo “A”
3. Enlace siguiente de “A” apunta a “nulo”
4. Enlace anterior de “A” apunta a “B”
5. Enlace siguiente de “B” apunta a “A”
6. Último apunta a “A”
Extraer:
1. Localizar nodo a borrar “B”
2. Enlace siguiente de “A” apunta a “C”
3. Enlace anterior de “C” apunta a “A”
4. Se pone disponible “B”
EXTRAER FINAL
1. Último apunta a “A”
2. Enlace siguiente de “A” apunta a “nulo”
3. Se pone disponible “B”
EXTRAER INICIO
1. Cabecera apunta a “B”
2. Enlace anterior de “B” apunta a “nulo”
3. Se pone disponible “A”
*/


// ARBOLES
// Estructura no lineal, no fundamental, homogenea y finita.

// Conjunto finito de uno o más nodos, con 2 características principales:
// 1) Existe un nodo llamado raíz
// 2) Cada nodo se divide en "m", m>=0 conjuntos disconjuntos denominados
// An...Am, cada uno de los cuales es a su vez un árbol que toma por nombre subárbol.

// Otra de sus características primarias es la recursividad.


// TERMINOLOGIA:
// NODO: A cada elemento de la estructura se le llama nodo. Cada nodo tiene
// UN ascendiente llamado “padre” y cero o más descendientes
// llamados “hijos”. A los hijos de un mismo padre se les suele llamar
// “hermanos”.

// RAIZ: único nodo especial debido a que no tiene padre.

// HOJA: nodo que no tiene hijos.

// INTERIOR: Todos los nodos que no son la raíz, ni son hojas.

// CAMINO: secuencia de nodos por los que hay que pasar para llegar de un
// nodo a otro.

// RAMA: camino que lleva hasta una hoja.

// PROFUNDIDAD O ALTURA: número de nodos de la rama más larga del árbol.

// PESO: número de hojas del árbol.

// GRADO DEL NODO: número de hijos que tiene el nodo.

// GRADO DEL ARBOL: grado del nodo de mayor grado

// NIVEL: nivel de su padre +1, raíz empieza en 0

// ARBOL BINARIO: puede tener hasta 2 hijos cada nodo. Orden 2

// BALANCEADO: diferencia de altura entre los subárboles es máximo 1.

// COMPLETO: cada uno de sus nodos tiene 2 hijos exactos.

// SIMILAR: si tienen misma estructura.

// EQUIVALENTE: si son similares y tiene la misma informacion.

// OPERACIONES:
// RECORRER: visitar todos los nodos del árbol sin repetir ninguno (in-orden, pre-orden y post-orden)
// in-orden: izquierdo en in-orden. Raiz, derecho in-orden
// pre-orden: raiz, izquierdo, derecho
// post-orden: izquiero, derecho, raíz


// ARBOL BINARIO DE Busqueda

// los nodos del izquierdo son menores que la raiz, y los derechos mayores
// recorrer in-orden




// GRAFOS
// Conjunto finito de nodos y arcos o vértices y aristas.
// Dato estructurado no lineal, no fundamental, homogéneo y finito.
// Recorrer, buscar nodo, buscar arco, insertar nodo, insertar arco, borrar arco, borrar nodo

// NODO: elemnto fundamental de información.
// ARCO: liga que une dos nodos del grafo. Puede tener peso (almacena información)
// NODOS ADYACENTES: si un arco los une
// CAMINO: secuencia de nodos en donde todos son ADYACENTES
// CAMINO SIMPLE: camino donde todos los nodos son diferentes, primero y último (pueden ser el mismo)
// GRAFO NO DIRIGIDO: los arcos son bidireccionales
// GRAFO DIRIGIDO: digrafo, los arcos tienen dirección asociada. Primer elementoes origen y segundo destino.
// GRAFO PONDERADO: cada arco tiene un peso asociado. Distancias
// GRAFO CONECTADO: un grafo no dirigido es conectado cuando para cualquier par de nodos existe un camino que los una.
// GRADO DE UN NODO: cantidad de arcos de ese nodo.
// GRADO DEL GRAFO: máximo grado de nodos.

// REPRESENTACIONES:
// - Matriz de adyacencias:
// arreglo bidimensional del tamaño de la cantidad de nodos. Cada casilla se llena con 1 o 0 dependiendo si existe o no un arco que conecte esos nodos.
// en los no dirigidos, la matriz es cuadrada. En los ponderados: en lugar de 1 o 0 se pone el peso asociado a cada arco

// - Lista de adyacencias:
// Representación dinámica, que define una lista enlazada de nodos y en cada uno de esos se enlaza con otra lista con los nodos adyacentes.

// - Lista de arcos


// RECORRIDOS: visitar todos los nodos del grafo sin repetir ninguno. Profunidad y anchura
// PROFUNDIDAD: se hace hacia delante siempre que se pueda, buscando el nodo más profundo.
// Recursiva o iterativa con pila.

// ANCHURA: se visitan y marcan los nodos adyacentes  y se continua recursivamente a lo ancho.
// Iterativo con fila/cola