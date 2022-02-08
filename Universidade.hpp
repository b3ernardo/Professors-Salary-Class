#ifndef UNIVERSIDADE_HPP
#define UNIVERSIDADE_HPP
#include "Professor.hpp"

class Universidade {
  private:
    vector<Professor*> professores;
  public:
    Universidade();
    void addProfessor(Professor&);
    double totalPago();
    void imprimir();
};

#endif