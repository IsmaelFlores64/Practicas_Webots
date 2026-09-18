#include <webots/Robot.hpp>
#include <webots/Motor.hpp>

#define TIME_STEP 64

using namespace webots;

int main(int argc, char **argv) {
  Robot *robot = new Robot();

  // Obtener la referencia del motor de la rueda izquierda
  Motor *leftMotor = robot->getMotor("left wheel motor");

  // Configurar posición en INFINITY para control por velocidad
  leftMotor->setPosition(INFINITY);
  
  // Asignar velocidad únicamente a esta rueda (en rad/s)
  leftMotor->setVelocity(2.5);

  // Bucle principal de la simulación
  while (robot->step(TIME_STEP) != -1) {
    // La rueda seguirá girando mientras la simulación esté activa
  }

  delete robot;
  return 0;
}