void selection_sort_i (int v[], int tam) {

	int menor, temp;

	for (int i=0; i<tam; i++) {
		menor = i;

		for (int j=(i+1); j<tam; j++) {
			if (v[j] < v[menor])
				menor = j;
			
		};
		
		temp = v[menor];
		v[menor] = v[i];
		v[i] = temp;

	}
};

void selection_sort_r (int v[], int tam, int ini) {

	int menor, temp;

	if (ini == tam)
		return;

	menor = ini;

	for (int i=(ini+1); i<tam; i++) {
		if (v[i] < v[menor])
			menor = i;
	};

	temp = v[menor];
	v[menor] = v[ini];
	v[ini] = temp;

	selection_sort_r (v, tam, (ini+1));

};

void insertion_sort_i (int v[], int tam) {

	int temp;

	for (int i=1; i<tam; i++) {
		//atual = i;

		while ((v[i] < v[i-1]) && (i>0)) {
			temp = v[i];
			v[i] = v[i-1];
			v[i-1] = temp;
			i--;
		};
	};

};

void insertion_sort_r (int v[], int tam) {
};
