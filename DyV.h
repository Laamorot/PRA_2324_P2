#include <iostream>
#include <vector>
#include <cstdio>


template <typename T> T BusquedaBinaria (T x, std::vector<T> vec, int ini, int fin){
	if( ini > fin){
		printf("Valor no encontrado en el vector\n");
		return -1;
	}
	int medio = (ini + fin) / 2;
	if (vec[medio] == x){
		return medio;
	}
	else if ( vec[medio] > x){
	return BusquedaBinaria(x, vec, ini, medio-1);
	} else {
		return BusquedaBinaria(x, vec, medio+1, fin);
	}
}
