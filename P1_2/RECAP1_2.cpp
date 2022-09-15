
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


