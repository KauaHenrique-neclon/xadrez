# Movimentação de Peças de Xadrez

Este programa em C simula a movimentação das peças do xadrez: Bispo, Torre, Rainha e Cavalo, a partir de uma posição inicial em um tabuleiro 8x8.

## Estrutura do Programa

O programa contém funções específicas para cada peça do xadrez, que calculam e exibem as possíveis movimentações a partir de uma posição dada. As peças implementadas são:

- **Bispo**: Movimenta-se em diagonais.
- **Torre**: Movimenta-se em linhas retas verticais e horizontais.
- **Rainha**: Combina os movimentos do Bispo e da Torre.
- **Cavalo**: Movimenta-se em 'L', podendo pular sobre outras peças.

## Funcionalidades

- O programa exibe as possíveis movimentações de cada peça a partir da posição inicial (4, 4) no tabuleiro.
- Para cada peça, movimentos válidos são mostrados, levando em consideração os limites do tabuleiro.

## Compilação e Execução

Para compilar e executar o programa, siga os passos abaixo:

1. **Compilar**: Use um compilador C como `gcc`:
   ```bash
   gcc -o xadrez movimentacao_xadrez.c
