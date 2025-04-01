# Tempos-para-Ordenacao-Em-C
# Algoritmos de Ordenação

Este projeto implementa diversos algoritmos de ordenação em C e permite a medição do tempo de execução de cada um. Ele inclui funções para gerar diferentes tipos de vetores e medir a eficiência dos algoritmos.

## Algoritmos Implementados
- Selection Sort
- Insertion Sort
- Bubble Sort
- Merge Sort
- Heap Sort
- Quick Sort
- Counting Sort
- Radix Sort

## Estrutura do Projeto

O projeto contém os seguintes arquivos:
- `main.c` - Arquivo principal que executa os algoritmos de ordenação e mede seu desempenho.
- `sorts.c` - Implementação dos algoritmos de ordenação.
- `funcoes_sort.h` - Cabeçalho com definições e assinaturas das funções utilizadas no projeto.

## Compilação e Execução

Para compilar o projeto, utilize o GCC:
```sh
gcc -o ordenacao main.c sorts.c -Wall
```

Para executar:
```sh
./ordenacao
```

## Exemplo de Uso

A execução do programa gera vetores aleatórios e aplica os algoritmos de ordenação neles. Além disso, o tempo de execução de cada método é medido e exibido no console.

## Contribuições

Sinta-se à vontade para abrir issues e enviar pull requests para melhorias no código.

## Licença

Este projeto é distribuído sob a licença MIT.

