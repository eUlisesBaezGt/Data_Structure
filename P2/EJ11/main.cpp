#include "queue.h"

int main()
{
    Queue queue;

    // Crea una cola circular "C" de 6 elementos

    // a) INSERTAR AA, BB Y CC
    queue.enqueue("AA");
    queue.enqueue("BB");
    queue.enqueue("CC");
    // IMPRIMIR COLA
    queue.print();

    // b) EXTRAER AA
    cout << "Dequeued: " << queue.dequeue() << endl;
    // IMPRIMIR COLA
    queue.print();

    // c) INSERTAR DD, EE, FF
    queue.enqueue("DD");
    queue.enqueue("EE");
    queue.enqueue("FF");
    // IMPRIMIR COLA
    queue.print();

    // d) INSERTAR GG
    queue.enqueue("GG");
    // IMPRIMIR COLA
    queue.print();

    // e) INSERTAR HH
    queue.enqueue("HH");
    // IMPRIMIR COLA
    queue.print();

    // f) EXTRAER BB Y CC
    cout << "Dequeued: " << queue.dequeue() << endl;
    cout << "Dequeued: " << queue.dequeue() << endl;
    // IMPRIMIR COLA
    queue.print();

    // CON CUANTOS ELEMENTOS QUEDA LA COLA?
    cout << "Queue size: " << queue.size() << endl;

    // error de desbordamiento o subdesbordamiento??
    // no, no hay error de desbordamiento o subdesbordamiento ya que la cola tiene un tamaño de 6 elementos y no se excede de este
    // se va liberando espacio en la cola conforme se van sacando elementos de la misma

    return 0;
}
