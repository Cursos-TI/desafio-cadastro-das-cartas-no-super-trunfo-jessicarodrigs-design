🏙️ Super Trunfo - Cartas de Cidades
Este projeto foi desenvolvido como parte do desafio final da disciplina Introdução à Programação de Computadores da Estácio. O objetivo é implementar a lógica do jogo Super Trunfo em linguagem C, utilizando estruturas de decisão, menus dinâmicos e comparações avançadas entre cartas de cidades brasileiras.

📌 Funcionalidades
Cadastro de duas cartas com atributos de cidades

Exibição clara e organizada dos dados das cartas

Menu de comparação simples com escolha de um atributo

Comparação avançada com dois atributos diferentes

Regra especial para Densidade Populacional (menor valor vence)

Cálculo da soma dos atributos escolhidos

Tratamento de empates

Interface interativa com menus dinâmicos usando switch

Uso do operador ternário para tornar o código mais elegante

🧠 Atributos disponíveis para comparação
População

Área (km²)

PIB (bilhões de reais)

Pontos Turísticos

Densidade Populacional (menor valor vence)

PIB per Capita

Super Poder (valor fictício para fins lúdicos)

🖥️ Como compilar e executar
Requisitos:
Compilador C (como GCC)

Terminal ou IDE compatível (Visual Studio Code, Dev-C++, etc.)

Passos:
Clone o repositório:

bash
git clone https://github.com/seu-usuario/seu-repositorio.git
Acesse a pasta do projeto:

bash
cd seu-repositorio
Compile o programa:

bash
gcc CartasSuperTrunfo.c -o supertrunfo
Execute:

bash
./supertrunfo
📷 Exemplo de uso
text
Carta 1:
Estado: A
Código: A01
Cidade: São Paulo
População: 12300000
Área: 1521.11
PIB: 800
Pontos Turísticos: 15
Super Poder: 9.5

Carta 2:
Estado: B
Código: B02
Cidade: Rio de Janeiro
População: 6700000
Área: 1182.3
PIB: 400
Pontos Turísticos: 20
Super Poder: 8.7

MENU DE COMPARAÇÃO AVANÇADA
Escolha o primeiro atributo: 1 (População)
Escolha o segundo atributo: 4 (Pontos Turísticos)

Resultado:
População: 12300000 vs 6700000
Pontos Turísticos: 15 vs 20
Soma dos atributos:
São Paulo: 12300015
Rio de Janeiro: 6700020
Vencedora: São Paulo
🛠️ Organização do código
main() contém o fluxo principal

Comparações simples e avançadas estão separadas por blocos

Comentários explicativos em cada etapa

Função auxiliar getValor() para facilitar comparações

📚 Créditos
Desenvolvido por Jessica como parte do desafio da Estácio. Disciplina: Introdução à Programação de Computadores
