#include <iostream>
#include <vector>
#include "DyV.h"

using namespace std;

int main() {
	std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
	int buscar = 5;
	int resultado = BusquedaBinaria(buscar, arr, 0, arr.size()-1);
	if (resultado != -1){
		cout << "Elemento " << buscar << " encontrado en la posición: " << resultado << std::endl;
	} else {
		cout << "Elemento " << buscar << " no se encuentra en el array." << std::endl;
	}

	return 0;
}
