// Empleando C++ y Orientación a Objetos, construir una aplicación qué: 
// Lea en una cadena una expresión algebráica en notación infija ylaca emplenando pilas la convierta a notación polaca postfija
// y la muestra como una cadena.

int main()
{
    // Leer la expresión algebráica en notación infija
    cout << "Introduzca la expresión algebráica en notación infija: ";
    string infija;
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
            if (pila.empty() || infija[i] == '(')
            {
                pila.push(infija[i]);
                continue;
            }
            // Si el operador es ')'
            if (infija[i] == ')')
            {
                while (pila.top() != '(')
                {
                    postfija += pila.top();
                    pila.pop();
                }
                pila.pop();
                continue;
            }
            // Si el operador es '+' o '-'
            if (infija[i] == '+' || infija[i] == '-')
            {
                while (!pila.empty() && pila.top() != '(')
                {
                    postfija += pila.top();
                    pila.pop();
                }
                pila.push(infija[i]);
                continue;
            }
            // Si el operador es '*' o '/'
            if (infija[i] == '*' || infija[i] == '/')
            {
                while (!pila.empty() && (pila.top() == '*' || pila.top() == '/'))
                {
                    postfija += pila.top();
                    pila.pop();
                }
                pila.push(infija[i]);
                continue;
            }
        }
    }
    return 0;
}//
