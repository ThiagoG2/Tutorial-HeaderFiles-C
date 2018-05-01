# Definição Header Files:

- Header files (em português: Arquivos de cabeçalho) é um arquivo com extensão .h que contém declarações de função C e definições de macro a serem compartilhadas entre vários arquivos de origem. Existem dois tipos de arquivos de cabeçalho: os arquivos que o programador escreve e os arquivos que vêm com o seu compilador.

- É exatamente igual a stdio.h, string.h e demais bibliotecas comumente utilizadas, nestas a inclusão no arquivo .c é feita com os símbolos <>, #include <stdio.h>, porque o arquivo stdio.h está localizado em uma pasta chamada include, que por sua vez está dentro da pasta do compilador.

- Quando o arquivo header está fora desta pasta do compilador, mas na mesma repartição do código que irá utiliza-lo, usa-se aspas duplas, desta forma: #include "Header.h". Caso o arquivo esteja em outra pasta, você precisará informar passo-a-passo o caminho entre aspas dupla e usando o / para ir acessando até a pasta de destino do arquivo .h a ser utilizado, como no prompt de comando.

# Como foi feito:

- No arquivo Header.h foi declarado a função fatorial como exemplo, mas poderia ser declarado qualquer função ou variável

- No arquivo UsandoHeader.c foi feita a implementação da função fatorial recursiva que foi declarada no arquivo de cabeçalho Header.h

- E no main.c, o arquivo principal, fará o uso propriamente dito do que foi implementado no arquivo UsandoHeader.c, que no caso foi a função fatorial recursiva.

- Nos arquivos .c foi incluído o arquivo de cabeçalho do próprio programa com o #Inclue "Header.h"

# Benefícios:

- Reutilização de código: Fica mais fácil depois, em um projeto, reutilizar funções pré feitas e compiladas, não é preciso reimplementá-las.

- Organização: Omitindo a implementação, apenas a lógica utilizada no arquivo principal é vista pelo programador, há menos linhas para analisar. E pressupõe-se, que as funções estão corretas, é bom ponto de partida para achar futuros erros na utilização delas.
