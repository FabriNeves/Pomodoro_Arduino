void countDown() {
  int minutes = digito0 * 10 + digito1;
  int seconds = digito2 * 10 + digito3;
  int totalSeconds = minutes * 60 + seconds;

  while (totalSeconds >= 0) {
    // Atualiza os dígitos do display de 7 segmentos com o tempo restante
    int minutesLeft = totalSeconds / 60;
    int secondsLeft = totalSeconds % 60;
    tm1637.display(0, minutesLeft / 10);
    tm1637.display(1, minutesLeft % 10);
    tm1637.display(2, secondsLeft / 10);
    tm1637.display(3, secondsLeft % 10);

    // Aguarda 1 segundo antes de atualizar o tempo restante
    delay(1000);
    totalSeconds--;
  }

  // Exibe o texto "FIM" no display por 3 segundos
  tm1637.display(0, 15); // letra F
  tm1637.display(1, 15); // letra I
  tm1637.display(2, 15); // letra blank
  tm1637.display(3, 15); // letra M
  digitalWrite(4, HIGH);
  delay(300);
  digitalWrite(4, LOW);

  // Reseta o display e termina a função
  //tm1637.clear();
}
