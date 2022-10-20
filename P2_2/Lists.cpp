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