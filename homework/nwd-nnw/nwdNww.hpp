#pragma once

int NWD(int lhs, int rhs) {
  int dzielnik {1};
  int cos;
  if (lhs == 0 || rhs == 0) {
    return -1;
  }
  while (dzielnik < abs(lhs) || dzielnik < abs(rhs)) {
    if (lhs % dzielnik == 0 && rhs % dzielnik == 0) {
      cos = dzielnik;
      dzielnik++;
    } else if (lhs % dzielnik != 0 || rhs % dzielnik != 0) {
      dzielnik++;
    }
    
  }
  return cos;
}

int NWW(int lhs, int rhs) {
  if (lhs == 0 || rhs == 0){return -1;}
  else {
    int x = NWD(abs(lhs), abs(rhs));
    return lhs * rhs / x;
  }
}
