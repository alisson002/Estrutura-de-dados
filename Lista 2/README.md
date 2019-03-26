# _DCA0214.1 - LABORATORIO DE´ ESTRUTURAS DE DADOS__ 
## __Aula 2: Práticas básicas de programação em C/C++: funções, vetores, matrizes, struct, ponteiros, busca, complexidade, introdução aos algoritmos de ordenação__
###        __Prof. Felipe Fernandes__



1.	Em um dado país a moeda corrente possui apenas quatro cédulas de papel: 1, 5, 10 e 20. Escreva uma função com a seguinte interface:

![image](https://user-images.githubusercontent.com/42205502/54961416-56d75f80-4f3f-11e9-88e5-40b472c0a95c.png)
 
que receba um número não-negativo de ponto flutuante que representa um valor em dinheiro e determine a menor quantidade de cédulas de 1, 5, 10 e 20 necessárias para pagar o valor especificado.

2.	Dizemos que um número natural n é palíndromo se lido da esquerda para direita e da direita para esquerda ´e o mesmo número. Exemplos: 567765 é palíndromo, 32423 é palíndromo, 567675 não é palíndromo.

(a)	Escreva uma função com a seguinte interface: que receba um número

![image](https://user-images.githubusercontent.com/42205502/54962178-a79c8780-4f42-11e9-87e7-2c6204e024ba.png)
 
inteiro n > 0 e devolva três números inteiros: o primeiro digito de n, o último digito de n e um inteiro que represente o número n sem seu primeiro e último dígitos. Qual a complexidade da sua implementação?
Exemplo:


![image](https://user-images.githubusercontent.com/42205502/54962195-b4b97680-4f42-11e9-8212-67e979a3bb67.png)

 
(b)	Usando a função do item (a), escreva um programa que receba um numero inteiro n > 0 e verifique se n ´e palíndromo. Suponha que n não contém o digito 0. Qual a complexidade da sua implementação? 

3. (a) Escreva uma função com a seguinte interface:

![image](https://user-images.githubusercontent.com/42205502/54962246-d31f7200-4f42-11e9-963b-8d9f9158511f.png)
 
que receba três números inteiros positivos m, n e d e devolva 1 se d divide m, n ou ambos, e 0, caso contrário. Além disso, em caso positivo, a função deve devolver um valor que representa o quociente da divisão de m por d e outro valor que representa o quociente da divisão de n por d. Qual a complexidade da sua implementação?

(b) Escreva um programa que leia dois números inteiros positivos m e n e calcule, usando a função do item (a), o mínimo múltiplo comum entre m e n.

4.	Em um programa nas linguagens C/C++, um conjunto pode ser representado por um vetor da seguinte forma: V [0] contém o número de elementos do conjunto; V [1], V [2], ... são os elementos do conjunto, sem repetições. Escreva uma função com a seguinte interface:

![image](https://user-images.githubusercontent.com/42205502/54962257-dd417080-4f42-11e9-9c13-fc1fd2b575e1.png)
 
que dados dois conjuntos de números inteiros A e B, construa um terceiro conjunto C tal que C = A ∩ B. Lembre-se de que em C[0] a sua função deve colocar o tamanho da intersecção. Qual a complexidade da sua implementação? (OBS.: MAX ´e a quantidade máxima de elementos do conjunto, fixado como 100).

5.	(a) Escreva uma função com a seguinte interface:

![image](https://user-images.githubusercontent.com/42205502/54962271-e7636f00-4f42-11e9-97d4-505aa1b2027f.png)
 
que receba um vetor A de m números inteiros, com 1 ≤ m ≤ 100, e ordene os elementos desse vetor em ordem crescente. Qual a complexidade da sua implementação?

(b)	Escreva uma função com a seguinte interface:

![image](https://user-images.githubusercontent.com/42205502/54962309-0c57e200-4f43-11e9-8438-b4b1e56093e7.png)
 
que receba um vetor A de números inteiros em ordem crescente de dimensão m e um vetor B de números inteiros em ordem crescente de dimensão n e compute um vetor C contendo os elementos de A e de B sem repetição e em ordem crescente. Qual a complexidade da sua implementação?

(c)	Escreva um programa que receba dois conjuntos de números inteiros distintos X e Y , com no máximo 100 elementos, ordene cada um deles usando a função do item (a) e intercale esses dois vetores usando a função¸˜ao do item (b), obtendo como resultado um vetor de números inteiros em ordem crescente.

6.	Escreva uma função que recebe uma matriz A[MAX][MAX] e um vetor V [MAX], realize a multiplicação AB obtendo um novo vetor R[MAX]. Qual a complexidade da sua implementação?

7.	Escreva uma função que recebe duas matrizes, A e B, e retorna o produto AB. Qual a complexidade da sua implementação?

8.	A sequência de Fibonacci pode ser definida recursivamente da seguinte forma: o primeiro termo ´e 0 e o segundo termo ´e 1. O n-ésimo termo ´e definido recursivamente com base na soma dos dois termos anteriores. Formalmente:

(a)	Com base na definição acima, formule um algoritmo recursivo para encontrar o n-ésimo, fibo(n), da sequência de Fibonacci. Qual a complexidade do seu algoritmo recursivo?

(b)	Escreva um algoritmo iterativo, utilizando um vetor, para encontrar o n-ésimo, fibo(n), da sequência de Fibonacci. Qual a complexidade do seu algoritmo iterativo?

(c)	Escreva um algoritmo iterativo, utilizando apenas três variáveis auxiliares, para encontrar o n-ésimo, fibo(n), da sequência de Fibonacci. Qual a complexidade do seu algoritmo iterativo?

(d)	Execute as três implementações (a),(b),(c) e verifique qual delas é mais eficiente.
