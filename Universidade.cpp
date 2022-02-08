#include "Universidade.hpp"
#include <iostream>

Universidade::Universidade() {
  this->professores = *new vector<Professor*>();
}

void Universidade::addProfessor(Professor &professor) {
  this->professores.push_back(&professor);
}

double Universidade::totalPago() {
  double totalPago = 0.0;
  for (int i = 0; i < this->professores.size(); i++)
    totalPago += this->professores[i]->getSalario();
  return totalPago;
}

void Universidade::imprimir() {
  cout << "Lista de Professores:" << endl;
  for (int i = 0; i < professores.size(); i++) {
    cout << this->professores[i]->getName() << ": R$ " << this->professores[i]->getSalario() << endl;
  }
}