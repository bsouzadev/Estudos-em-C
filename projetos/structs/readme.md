# 📘 Estruturas em Linguagem C

Este repositório contém soluções para problemas envolvendo uso de struct em C, com foco em organização de dados, funções, vetores, matrizes e conceitos fundamentais de programação estruturada.

---

## 🔢 Problemas Resolvidos

## 🎬 Problema 1 — Estrutura Filme

Cria uma estrutura para armazenar informações de um filme (id, titulo, ano, duracao).
O programa lê os dados e imprime no formato especificado.

📌 Exemplo de saída:

Código do filme: 10  
Título do filme: Exterminador do futuro 2  
Ano de lançamento: 1992  
Duração do filme: 150

---

## 📍 Problema 2 — Distância entre dois pontos

Estrutura coordenada que armazena x e y.
Função com o protótipo:

double distancia(struct coordenada x, struct coordenada y);


Retorna a distância euclidiana entre os pontos.

📌 Exemplo:
Entrada: (0,0) e (3,4)
Saída: 5.0

---

## 🔺 Problema 3 — Estrutura Triângulo

Estrutura Triangulo formada por 3 pontos (p1, p2, p3).
Função com o protótipo:

float tipo_triangulo(struct Triangulo x);


Retorna o perímetro do triângulo.

📌 Exemplo:
Entrada: (0,0), (0,3), (4,0)
Saída: 12.0

---

## 🔢 Problema 4 — Números Complexos

Estrutura n_complexo representando um número complexo.
Função com o protótipo:

struct n_complexo soma(struct n_complexo n1, struct n_complexo n2);


Retorna a soma de dois números complexos.

📌 Exemplo:
Entrada: (2 + 3i) e (1 + 4i)
Saída: (3 + 7i)

---

## 🎞 Problema 5 — Vetor de Filmes

Estrutura Filme com id, titulo, ano, duracao.
Função com o protótipo:

void imprime_filme(Filme filmes[], int n, int id);


Imprime as informações do filme com determinado id, ou uma mensagem de erro caso não exista.

📌 Exemplo:
Entrada: id = 2
Saída: Interestelar — 2014 — 169 min

---

## 🚗 Problema 6 — Estrutura Carro

Estrutura carro com preco, ano e categoria.
O programa lê dois carros e imprime as informações (preço e categoria) do carro com ano mais recente.

📌 Exemplo:
Entrada:

50000.00 2010 A  
40000.00 2012 B  


Saída:

40000.00 B  

---

## 📚 Problema 7 — Livro mais caro

Estrutura Livro definida como sinônimo de struct livro, contendo ISBN, ano e preco.
Função com o protótipo:

Livro retornaLivroMaisCaro(Livro l1, Livro l2);


Retorna o livro de maior preço (em caso de empate, retorna o primeiro).

📌 Exemplo:
Entrada:

123 2000 59.90  
456 2010 79.90  


Saída:

456 2010 79.90  

---

## 🧾 Problema 8 — Busca de Cliente pelo CPF

Estrutura Cliente com cpf e nome.
Função com o protótipo:

void procuraCliente(Cliente cliente[], char cpf[], int tamanho);


Imprime o nome do cliente caso o CPF exista no vetor.

📌 Exemplo:
Entrada:

111.222.333-44  
111.222.333-44  
Maria da Silva  
555.444.333-22  
João Santos  
...  


Saída:

Maria da Silva  

---

## 🎥 Problema 9 — Filme de Joãozinho

Estrutura Filme com id, duracao, ano.
O programa recebe uma lista de filmes e, a partir da duração e ano lembrados por Joãozinho, imprime o ID correto.

📌 Exemplo:
Entrada:

3  
1 120 2005  
2 150 2010  
3 140 2012  
150 2010  


Saída:

2  

---