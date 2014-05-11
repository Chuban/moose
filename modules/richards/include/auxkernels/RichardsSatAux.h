/*****************************************/
/* Written by andrew.wilkins@csiro.au    */
/* Please contact me if you make changes */
/*****************************************/

#ifndef RICHARDSSATAUX_H
#define RICHARDSSATAUX_H

#include "AuxKernel.h"

#include "RichardsSat.h"

//Forward Declarations
class RichardsSatAux;

template<>
InputParameters validParams<RichardsSatAux>();

/**
 * Fluid Saturation as a function of effective saturation
 */
class RichardsSatAux: public AuxKernel
{
public:
  RichardsSatAux(const std::string & name, InputParameters parameters);

protected:
  virtual Real computeValue();

  /// effective saturation
  VariableValue & _seff_var;

  /// User object defining saturation as a function of effective saturation
  const RichardsSat & _sat_UO;
};

#endif // RICHARDSSATAUX_H
