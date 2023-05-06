void bomb () {
  digitalWrite(5,HIGH);
  int teste;
  int a, b, c, d = 0;
  teste = (digito0 * 1000) + (digito1 * 100) + (digito2 * 10) + digito3 ;
  tm1637.display(0, 11);
  tm1637.display(1, 11);
  tm1637.display(2, 11);
  tm1637.display(3, 11);
  
  delay(300);
  for (teste; teste >= 0; teste--) {
    

    a = teste / 1000;
    b = (teste - a * 1000) / 100;
    c = (teste - (a * 1000) - (b * 100)) / 10;
    d = (teste - (a * 1000) - (b * 100) - (c * 10));

    tm1637.display(3, d);
    tm1637.display(2, c);
    tm1637.display(1, b);
    tm1637.display(0, a);
    delay(999);
  }
  display4seg();
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  delay(300);
  digitalWrite(4,LOW);
  
  
}
