#include <iostream>
#include <string>

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


int main(){
    // Programa paa convertir una expresion infija a postfija
    // Leer notacion infija
    string infija;
    cout << "Ingrese la expresion infija: ";
    getline(cin, infija);

    // Crear una pila
    Stack pila;

    // Crear una cadena para la expresion postfija
    string postfija;
    
    // Recorrer la expresion infija
    for (int i = 0; i < infija.length(); i++)
    {
        // Si el caracte es una variable o un numero, concetenarlo a postfija
        if (infija[i] >= 'a' && infija[i] <= 'z' || infija[i] >= '0' && infija[i] <= '9')
        {
            postfija += infija[i];
        }
        // Si el caracter es un operador, de mayor precedencia que el del tope, se inserta
        else if (infija[i] == '+' || infija[i] == '-')
        {
            if (pila.isEmpty() || pila.topData() == '(')
            {
                pila.push(infija[i]);
            }
            else
            {
                while (!pila.isEmpty() && pila.topData() != '(')
                {
                    postfija += pila.pop();
                }
                pila.push(infija[i]);
            }
        }
        else if (infija[i] == '*' || infija[i] == '/')
        {
            if (pila.isEmpty() || pila.topData() == '(' || pila.topData() == '+' || pila.topData() == '-')
            {
                pila.push(infija[i]);
            }
            else
            {
                while (!pila.isEmpty() && pila.topData() != '(' && pila.topData() != '+' && pila.topData() != '-')
                {
                    postfija += pila.pop();
                }
                pila.push(infija[i]);
            }
        }

        // Si el caracter es un parentesis izquierdo, se inserta en la pila con precedencia 0
        else if (infija[i] == '(')
        {
            pila.push(infija[i]);
        }
        // Si el caracter es un parentesis derecho, se sacan todos los operadores de la pila hasta encontrar un parentesis izquierdo
        else if (infija[i] == ')')
        {
            while (pila.topData() != '(')
            {
                postfija += pila.pop();
            }
            pila.pop();
        }
    }
    // Al finalizar, se sacan todos los operadores de la pila y se insertan a postfija
    while (!pila.isEmpty())
    {
        postfija += pila.pop();
    }
    // Imprimir la expresion postfija
    cout << "La expresion postfija es: " << postfija << endl;
    
    return 0;
}
