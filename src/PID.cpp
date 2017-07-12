#include "PID.h"

// using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  /*
   * Errors
  */
  this->p_error = 0.0;
  this->i_error = 0.0;
  this->d_error = 0.0;

  /*
   * Coefficients
  */
  this->Kp = Kp;
  this->Ki = Kd;
  this->Kd = Kd;
}

void PID::UpdateError(double cte) {
  // d_error is how much we have changed since our last crosstrack error
  d_error = cte - p_error;

  // i_error is sum of our cross track errors
  i_error += cte;

  // p_error is basically our cross track error
  p_error = cte;
}

double PID::TotalError() {
  // steer = -tau_p * cte - tau_d * diff_cte - tau_i * int_cte
  return -Kp * p_error - Kd * d_error - Ki * i_error;
}
