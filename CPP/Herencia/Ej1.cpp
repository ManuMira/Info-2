#include <iostream>
#include <stdlib.h>

class Persona{
  private:
    string nombre;
    int edad;
  public:
    Persona(string, int);
    mostrarPersona()const;
    setNombre(string);
    setEdad(int);
}

class Empleado : public Persona{
  private:
    int numEmpleado;
    float sueldoEmpleado;
  public:
    Empleado(string, int, int, float);
}

class Alumno : public Persona{
  protected:
    int numAlumno;
    int nota;
  public:
    Alumno(string, int, int, int);
    mostrarAlumno();
}

class Universitario : public Alumno{
  private:
    int materiasAprob;
  public:
    Universitario(string, int, int, int, int);
    mostrarUni();
}

Persona::Persona(string _nombre, int _edad){
  nombre =_nombre;
  edad = _edad;
}

Empleado::Empleado(string _nombre, int _edad, int _numEmpl, float _sueldoEmpl) : Persona(_nombre, _edad){
  numEmpleado = _numEmpl;
  sueldoEmpleado = _sueldoEmpl;
}

Alumno::Alumno(string _nombre, int _edad, int _numAlum, int _nota) : Persona(_nombre, _edad){
  numAlumno = _numAlum;
  nota = _nota;
}
Universitario::Universitario(string _nombre, int _edad, int _numAlum, _nota, int _materiasA) : Alumno(_numAlum, _nota){
  materiasAprobadas = _materiasA;
}

