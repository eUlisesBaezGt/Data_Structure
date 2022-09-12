#include <iostream>
#include <string>



using namespace std;

#include <iostream>

using namespace std;

class Stack
{
public:
    Stack();
    ~Stack();
    void push(int);
    int pop();
    bool isEmpty();
    void print();
    int topData();
    int size();

private:
    struct Node
    {
        int data;
        Node *next;
    };
    Node *top;
};



Stack::Stack()
{
    top = NULL;
}

Stack::~Stack()
{
    while (top != NULL)
    {
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}

void Stack::push(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

int Stack::size()
{
    int size = 0;
    Node *temp = top;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

int Stack::pop()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        Node *temp = top;
        top = top->next;
        int x = temp->data;
        delete temp;
        return x;
    }
}

bool Stack::isEmpty()
{
    return top == NULL;
}

void Stack::print()
{
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int Stack::topData()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return top->data;
    }
}


// Empleando C++ y Orientación a Objetos, construir una aplicación qué:
// Lea en una cadena una expresión algebráica en notación infija ylaca emplenando pilas la convierta a notación polaca postfija
// y la muestra como una cadena.

int main()
{
    Stack pila;
    // Leer la expresión algebráica en notación infija
    cout << "Introduzca la expresión algebráica en notación infija: ";
    string infija, postfija;
    getline(cin, infija);
    // Variable o constante se concatena a postfija
    for (int i = 0; i < infija.length(); i++)
    {
        if (infija[i] == ' ')
            continue;
        if (isalpha(infija[i]) || isdigit(infija[i]))
        {
            postfija += infija[i];
            continue;
        }
        // Si es un operador
        if (infija[i] == '+' || infija[i] == '-' || infija[i] == '*' || infija[i] == '/')
        {
            // Si la pila está vacía o el operador es '('
            if (pila.isEmpty() || infija[i] == '(')
            {
                pila.push(infija[i]);
                continue;
            }
            // Si el operador es ')'
            if (infija[i] == ')')
            {
                while (pila.topData() != '(')
                {
                    postfija += pila.topData();
                    pila.pop();
                }
                pila.pop();
                continue;
            }
            // Si el operador es '+' o '-'
            if (infija[i] == '+' || infija[i] == '-')
            {
                while (!pila.isEmpty() && pila.topData() != '(')
                {
                    postfija += pila.topData();
                    pila.pop();
                }
                pila.push(infija[i]);
                continue;
            }
            // Si el operador es '*' o '/'
            if (infija[i] == '*' || infija[i] == '/')
            {
                while (!pila.isEmpty() && (pila.topData() == '*' || pila.topData() == '/'))
                {
                    postfija += pila.topData();
                    pila.pop();
                }
                pila.push(infija[i]);
                continue;
            }
        }
    }
    // // Mostrar la expresión algebráica en notación polaca postfija
    // cout << "La expresión algebráica en notación polaca postfija es: " << postfija << endl;
    for (int i = 0; i < pila.size(); i++)
    {
        postfija += pila.topData();
        cout << pila.topData() << endl;
        pila.pop();
    }
    

    return 0;
} //
