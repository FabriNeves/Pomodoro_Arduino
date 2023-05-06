
void glow(int m) {

  int blinkin = 50 ;

  switch (m)
  {
    case 0: {
        tm1637.display(0, 16);
        delay(blinkin);
        tm1637.display(0, digito0);
        delay(blinkin);
        tm1637.display(0, 16);
        delay(blinkin);
        tm1637.display(0, digito0);

        break;
      }
    case 1: {
        tm1637.display(1, 16);
        delay(blinkin);
        tm1637.display(1,digito1);
        delay(blinkin);
        tm1637.display(1, 16);
        delay(blinkin);
        tm1637.display(1,digito1);

        break;

      }
    case 2: {
        tm1637.display(2, 16);
        delay(blinkin);
        tm1637.display(2,digito2);
        delay(blinkin);
        tm1637.display(2, 16);
        delay(blinkin);
        tm1637.display(2,digito2);

        break;

      }
    case 3: {
        tm1637.display(3, 16);
        delay(blinkin);
        tm1637.display(3,digito3);
        delay(blinkin);
        tm1637.display(3, 16);
        delay(blinkin);
        tm1637.display(3,digito3);

        break;

      }
    default: break;
  }


}
