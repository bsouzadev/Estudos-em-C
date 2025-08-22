# 📚 Exercícios com Vetores em C

Este repositório contém exercícios práticos com **vetores (arrays)** em linguagem C. Os problemas abordam desde manipulação básica até operações mais elaboradas, como média, produto escalar e busca por elementos.

---

## ✅ Problema 1 - Operações com Vetor Fixo

Crie um vetor `A` com 6 inteiros e atribua os seguintes valores:

Em seguida:
1. Calcule e exiba a soma de `A[0] + A[1] + A[5]`.
2. Modifique o valor da posição `A[4]` para `100`.
3. Imprima todos os valores do vetor, um por linha.

---

## ✅ Problema 2 - Zerando Negativos

**Função:** `void zeraNegativos(int v[], int n);`  
Recebe um vetor de inteiros e seu tamanho, e substitui todos os valores negativos por `0`.

### ✨ Exemplo de teste:
Vetor original: `[1, -4, 10, 2, 0, -3]`  
Resultado esperado após a função: `[1, 0, 10, 2, 0, 0]`

Imprimir o vetor **antes e depois** da modificação.

---

## ✅ Problema 3 - Maior Elemento e Posição

**Função:** `void maiorElemento(int v[], int n);`  
Recebe um vetor de inteiros e seu tamanho, e imprime:
- O maior elemento do vetor
- A posição (índice) onde ele se encontra

---

## ✅ Problema 4 - Média de Números Reais

**Função:** `int media(float v[], int n);`  
Recebe um vetor de números reais inteiros (`int`) e retorna a **média** dos valores.

### 🔄 Extra:
- Preencha o vetor com números aleatórios usando `rand()`.

---

## ✅ Problema 5 - Posição de um Valor

**Função:** `int posicao(int v[], int n, int val);`  
Recebe um vetor `v` com `n` inteiros e um valor `val`.  
Retorna:
- A **primeira posição** em que `val` aparece no vetor
- `-1` se o valor não estiver presente

---