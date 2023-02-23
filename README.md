# mode_with_map

Função que calcule a moda de um conjunto de valores double armazenados em um map. 
A moda é o valor que aparece com mais frequência em um conjunto de dados.

Uma forma de calcular a moda seria percorrer o map, armazenando a frequência de cada valor em um segundo map chamado frequencia. 
Em seguida, basta percorrer o map de frequência para encontrar o valor com a maior frequência e retorná-lo como resultado.


Neste exemplo, a função moda recebe um map de valores double chamado dicionario. Em seguida, um segundo map chamado frequencia é criado para armazenar a frequência de cada valor.

O laço for percorre o map de valores, atualizando a frequência de cada valor em frequencia. O segundo laço for percorre o map de frequência, procurando o valor com a maior frequência. 
O valor com a maior frequência é armazenado em uma variável moda, que é então retornada como resultado da função.

Note que, se houver empate entre dois ou mais valores com a maior frequência, a função retornará apenas um deles. Se for necessário retornar todos os valores com a maior frequência, 
a função precisará ser adaptada para retornar uma lista ou um conjunto de valores, em vez de apenas um.
