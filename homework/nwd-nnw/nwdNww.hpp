#pragma once

int NWD(int lhs, int rhs) {
  int dzielnik {1};
  int cos;
  
  if (lhs == 0) {return abs(rhs);}
  else if (rhs == 0) {return abs(lhs);}
  else if (abs(rhs) == abs(lhs)){return abs(lhs);}

  while (dzielnik < abs(lhs) || dzielnik < abs(rhs)) {
    if (lhs % dzielnik == 0 && rhs % dzielnik == 0) {cos = dzielnik; dzielnik++;}
    else if (lhs % dzielnik != 0 || rhs % dzielnik != 0) {dzielnik++;}

  }return cos;
}

int NWW(int lhs, int rhs) {
  if (abs(lhs)== abs(rhs)){return abs(lhs);}
  else {
    int x = NWD(abs(lhs), abs(rhs));
    return lhs * rhs / x;
  }
}
