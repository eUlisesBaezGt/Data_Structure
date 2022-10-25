#include <iostream>;
using namespace std;


int main()
{
	cout << "Recorre el Árbol Binario que se muestra.Recórrelo en Pre - orden y en Pos - orden." << endl;

	//         A
	//      /   \
	//     B    C
	//   / \  / \
	//  E  F G  H
	// /       / \
	// L       M  N
	//         \
	//          Q

	/*PRE - ORDER: A, B, E, L, F, C, G, H, M, Q, N
	 *POS - ORDER : L, E, F, B, G, Q, M, N, H, C, A */

	cout << "ARBOL" << endl;
	cout << "    A" << endl;
	cout << "  /   \\" << endl;
	cout << " B     C" << endl;
	cout << "/ \\   / \\" << endl;
	cout << "E  F G   H" << endl;
	cout << "/       / \\" << endl;
	cout << "L       M  N" << endl;
	cout << "         \\" << endl;
	cout << "          Q" << endl;

	cout << endl;
	cout << "Recorrido en Pre-Orden: " << endl;
	cout << "A, B, E, L, F, C, G, H, M, Q, N" << endl;

	cout << "Recorrido en Pos-Orden: " << endl;
	cout << "L, E, F, B, G, Q, M, N, H, C, A" << endl;

	return 0;
}
