void selecao (int vet[], int tam)


{
	int j=5, i=0, aux, temp;
	for (i=0; i < tam-1; i++)
	{
		aux = i;
		for (j = i+1; j < tam; j++)
		if (vet[aux] > vet[j]) 
		aux = j;
		temp = vet[aux];
		vet[aux] = vet[i];
		vet[i] = temp;
		
	}
		
}
