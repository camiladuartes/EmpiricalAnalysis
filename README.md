## Trabalho: 

- Análise empírica de complexidade de algoritmos de busca

## Dupla:
    
- Leonandro Gurgel e Camila Duarte.

## Compilação:
      
### Ubuntu:

- No diretório da pasta do projeto realizar os comandos a seguir: cd source > g++ -std=c++11 main.cpp project.cpp -o exe  

**OBS:** Pode ser gerada uma warning devido a um retorno condicional nas funções recursivas, mas isso não afeta a funcionalidade do código

## Execução:

- No diretório da pasta do projeto realizar os comandos a seguir: cd source > ./exe
    
## Funções de busca:
	
- Foram implementadas 7 funções de busca sendo elas: binary_iterative, binary_recursive, ternary_iterative, ternary_recursive, linear_iterative, jump_search e fibonacci_search.
    
## Testes:
	
- Para testar algum algoritmo de busca, basta digitar o nome da função desejada (entre as listadas no subtópico "Funções de busca") na linha 25 do arquivo "main.cpp" e manter os parâmetros passados. Por padrão, o main vem implementado com a linear_iterative.         

    
## Gravação em arquivo:
       
- O código grava um arquivo na pasta "data" do seu projeto a cada execução, este arquivo contém os dados necessários para a geração de um gráfico referente a performance do algoritmo de busca escolhido, o nome do arquivo fica a critério do usuário, porém, recomenda-se que seja usado o nome da função de busca testada com a extensão ".dat", o nome default vem em referência a função default que vem no código que é: "linear_iterative.dat"(linha 18, "main.cpp").

## Erros:
    
- Basicamente, o código foi semi-automatizado para testar o pior caso de cada algoritmo de busca implementado, ele simula um cenário ideal e entrada de dados propícias para que seja gerado o teste na pior performance possível da função de busca. Como a entrada de dados é gerada pelo próprio algoritmo o único erro possível de entrada é se o usuário erra o nome da função ou se a memória não aguentar todos os testes e o código assume que o usuário sabe as funções disponíveis e sabe os limites de memória da sua máquina.  

## OBS:
Para mais detalhes sobre funções e bibliotecas, ver a documentação doxygen.
