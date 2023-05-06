
int menu(int menuX, int menuY) {

  if (menuY != 0) {

    switch (menuX)
    {
      case 0: digito0 = digito0 + menuY; break;
      case 1:digito1=digito1+ menuY;  break;
      case 2:digito2=digito2+ menuY; break;
      case 3:digito3=digito3+ menuY; break;
      default: break;
    }

  }
  // Limites
  if (digito0 > 9 || digito0 < 0)digito0 = 0;
  if (digito1 > 9 ||digito1< 0)digito1 = 0;
  if (digito2 > 9 ||digito2< 0)digito2 = 0;
  if (digito3> 9 ||digito3< 0)digito3= 0;
  
  display4seg();

}
