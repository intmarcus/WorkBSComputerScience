<span>URI Online Judge | 1081</span>
DFSr - Hierarquia de Profundidade
=================================

Por Neilor Tonin, URI ![](https://urionlinejudge.r.worldssl.net/gallery/images/flags/br.gif) Brasil

**Timelimit: 1**

A rotina PathR é bem conhecida em grafos. É também chamada de **dfs** ou **dfsr**. Trata-se de uma busca em profundidade dos nodos do grafo, utilizando backtracking. A tarefa aqui é, dado o grafo de entrada, simplesmente gerar o desenho da hierarquia dos nodos pesquisados. Para isso, é apresentada a rotina PathR abaixo, como apoio.

![](https://urionlinejudge.r.worldssl.net/gallery/images/problems/UOJ_1081.jpg)

Entrada
-------

A entrada será um arquivo contendo vários casos de teste. A primeira linha do arquivo de entrada contém um inteiro **N** que indica a quantidade de casos de teste que vem a seguir. Cada um dos **N** casos de teste contém, na primeira linha, duas informações: **V** (1 ≤ **V** ≤ 20) e **E** (1 ≤ **E** ≤ 20) que são, respectivamente, a quantidade de Vértices e de Arestas (Edges) do grafo. Seguem  **E** linhas contendo informações sobre cada uma das arestas do grafo.

Saída
-----

Para cada caso de entrada, deve ser apresentada uma saída que representa a busca em profundidade de todos os nodos,  respeitando a hierarquia e profundidade de cada um deles. O símbolo b  representam um espaço em branco. Veja o exemplo abaixo para ilustrar:
***bb***0-2 pathR(G,2)
***bbbb***2-1 pathR(G,1)
***bbbb***2-4 pathR(G,4)
***bbbbbb***4-1
E assim sucessivamente...
Obs.: Há uma linha em branco depois de cada segmento impresso do grafo, inclusive após o último segmento.

<table>
<thead>
<tr>
<td>
Exemplo de Entrada
</td>
<td>
Exemplo de Saída
</td>
</tr>
</thead>
<tbody>
<tr>
<td class="division">
2
12 9
0 1
1 5
5 6
0 4
4 2
2 3
7 8
1 7
10 11
11 8
0 1
1 2
3 4
4 3
5 6
6 8
7 9
9 10

</td>
<td>
Caso 1:
  0-1 pathR(G,1)
    1-5 pathR(G,5)
      5-6 pathR(G,6)
    1-7 pathR(G,7)
      7-8 pathR(G,8)
  0-4 pathR(G,4)
    4-2 pathR(G,2)
      2-3 pathR(G,3)
  10-11 pathR(G,11)
Caso 2:
  0-1 pathR(G,1)
    1-2 pathR(G,2)
  3-4 pathR(G,4)
    4-3
  5-6 pathR(G,6)
    6-8 pathR(G,8)
  7-9 pathR(G,9)
    9-10 pathR(G,10)
 

</td>
</tr>
</tbody>
</table>
