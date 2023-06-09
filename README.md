# Pomodoro Arduino

Este projeto consiste em um temporizador Pomodoro construído usando a placa Arduino e um display TM1637. O objetivo é ajudar os usuários a gerenciar seu tempo e aumentar a produtividade por meio de um método de gerenciamento de tempo bem conhecido.

## Requisitos de Hardware

Arduino Uno
Display TM1637 de 4 dígitos
Botões para controle de menu e início/pausa do temporizador
Fios e breadboard
## Como funciona

O temporizador Pomodoro é baseado em um ciclo de trabalho de 25 minutos e descanso de 5 minutos. O display TM1637 exibe o tempo restante em minutos e segundos durante o ciclo de trabalho e o tempo restante em minutos durante o intervalo de descanso.

Os botões são usados para navegar pelo menu e iniciar/pausar o temporizador. Há três opções de menu: ajuste do tempo de trabalho, ajuste do tempo de descanso e início do temporizador.

Quando o tempo de trabalho começa, o display mostra o tempo restante e inicia uma contagem regressiva. Quando o tempo de trabalho termina, o temporizador emite um bip e o tempo de descanso começa. Durante o tempo de descanso, o display mostra o tempo restante em minutos. Quando o tempo de descanso termina, o temporizador emite outro bip e retorna ao tempo de trabalho.

## Instalação

Para usar este projeto, você precisará carregar o código do Arduino em sua placa e conectar todos os componentes de hardware corretamente. Certifique-se de ter todas as bibliotecas necessárias instaladas, como a biblioteca TM1637. Você pode personalizar os tempos de trabalho e descanso editando o código do Arduino.

## Limitações e próximos passos

Este projeto é uma versão básica de um temporizador Pomodoro usando Arduino e pode ser aprimorado de várias maneiras, como adicionar uma interface de usuário mais amigável, uma opção para ajustar o número de ciclos de trabalho/descanso, um alarme sonoro mais agradável e um modo de economia de energia para prolongar a vida útil da bateria.

## Exemplo 



<img src="./img/esquema.png" alt="Arduino" style="height: 300px; "/>