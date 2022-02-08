#include "Universidade.hpp"
#include <iostream>

int main() {
  Universidade UFMG;
  ProfHorista prof1("Cristiano", 1000.0, 10.0);
  ProfHorista prof2("Frederico", 500.0, 10.0);
  ProfIntegral prof3("Bernardo", 15000.0);

  UFMG.addProfessor(prof1);
  UFMG.addProfessor(prof2);
  UFMG.addProfessor(prof3);

  UFMG.imprimir();
  cout << "--------------------" << endl;
  cout << "Total pago: R$ " << UFMG.totalPago() << endl;

  return 0;
}