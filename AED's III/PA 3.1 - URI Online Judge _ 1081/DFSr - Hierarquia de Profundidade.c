#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int busca_profundidade(int grafo[][MAX], int visitado[MAX], int v, int n,
		int espacoBranco) {
	int i = 0, j = 0, caminho = 0;

	visitado[v] = 1;

	for (i = 0; i < n; i++) {
		if (grafo[v][i] == 1) {
			caminho = 1;

			if (visitado[i] == 0) {
				//imprime espacos em branco conforme especificacao
				for (j = 0; j < espacoBranco; ++j) {
					printf(" ");
				}

				printf("%d-%d pathR(G,%d)\n", v, i, i);
				busca_profundidade(grafo, visitado, i, n, espacoBranco + 2);
			} else {
				//imprime espacos em branco conforme especificacao
				for (j = 0; j < espacoBranco; ++j) {
					printf(" ");
				}

				printf("%d-%d\n", v, i);
			}
		}
	}

	return caminho;
}

void percorre_bp(int grafo[][MAX], int visitado[MAX], int v) {
	int i = 0, flag = 0;

	while (1) {
		//Para cada caminho existente, deixa-se uma linha em branco
		if (busca_profundidade(grafo, visitado, flag, v, 2) != 0) {
			puts("");
		}

		flag = -1;

		//Seta os caminhos nao visitados para a flag
		for (i = 0; i < v; i++) {
			if (visitado[i] == 0) {
				flag = i;
				break;
			}
		}

		//Se todos os caminhos foram visitados (flag==-1) break
		if (flag == -1) {
			break;
		}

	}

}

int main(void) {

	int n = 0, v = 0, e = 0;
	int j = 0, k = 0, l = 0;
	int caso = 1;

	int grafo[MAX][MAX];
	int visitado[MAX];

	scanf("%d", &n);

	while (n != 0) {

		scanf("%d %d", &v, &e);

		//Zerando matriz adjacente
		for (k = 0; k < v; k++) {
			for (l = 0; l < v; l++) {
				grafo[k][l] = 0;
			}
			visitado[k] = 0;
		}

		for (j = 0; j < e; j++) {
			scanf("%d %d", &k, &l);
			grafo[k][l] = 1;

		}

		printf("Caso %d:\n", caso++);
		percorre_bp(grafo, visitado, v);

		n--;
	}

	//correcao de saida. sei la pq tem que ter esse espaco em branco, mas o udebug falou, tah falado!
	//printf(" ");

	return EXIT_SUCCESS;
}
