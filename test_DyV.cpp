#include <iostream>
#include <vector>
#include "DyV.h"
#include <chrono>

using namespace std;

int main() {

auto start = std::chrono::system_clock::now();

	std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
	int buscar = 5;
	int resultado = BusquedaBinaria(buscar, arr, 0, arr.size()-1);
	if (resultado != -1){
		cout << "Elemento " << buscar << " encontrado en la posición: " << resultado << std::endl;
	} else {
		cout << "Elemento " << buscar << " no se encuentra en el array." << std::endl;
	}

auto end = std::chrono::system_clock::now();

std::chrono::duration<float, std::milli> duration = end - start;

std::cout << “Binarysearch time: “ << duration.count() << “s” << std::endl;


auto start = std::chrono::system_clock::now();

proceso_a_medir();

auto end = std::chrono::system_clock::now();

std::chrono::duration<float, std::milli> duration = end - start;

std::cout << “Time: “ << duration.count() << “s” << std::endl;

return 0;
}
