#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

template <typename T>
void swap (std::vector<T> &vec, int i, int j){
	T aux = vec[j];
    vec[j] = vec[i];                        
	vec[i] = aux;
}

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

template <typename T>
void QuickSort (std::vector<T> &vec, int ini, int fin){
	if(ini < fin){
	int pivot = Partition(vec, ini fin);
	QuickSort(vec ini, pivot-1);
	QuickSort(vec, pivot+1, fin);
	}
}

template <typename T>
int Partition (std::vector<T> &vec, int ini, int fin){
	T x = vec[fin];
	int i = ini;
	for (int j=ini; j<fin-1; j++){
		if(vec[j] <= x){
			T aux = vec[j];
			vec[j] = vec[i];
			vec[i] = aux;
			i += 1;
		}
	}
	swap(vec, i, fin); //swap 
	return i;
}