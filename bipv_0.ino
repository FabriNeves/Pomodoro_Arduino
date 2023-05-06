
void bip(bool l, int the_time) {

  if (l == 1) {
    digitalWrite(4, HIGH);
    delay(10);
    digitalWrite(4, LOW);
    delay(the_time-10);
  } else if (l == 0) {
    delay(the_time);
  }

}
