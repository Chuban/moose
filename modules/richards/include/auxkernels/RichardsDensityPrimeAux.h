/*****************************************/
/* Written by andrew.wilkins@csiro.au    */
/* Please contact me if you make changes */
/*****************************************/

#ifndef RICHARDSDENSITYPRIMEAUX_H
#define RICHARDSDENSITYPRIMEAUX_H

#include "AuxKernel.h"

#include "RichardsDensity.h"

//Forward Declarations
class RichardsDensityPrimeAux;

template<>
InputParameters validParams<RichardsDensityPrimeAux>();

/**
 * Derivative of fluid density wrt porepressure
 */
class RichardsDensityPrimeAux: public AuxKernel
{
public:
  RichardsDensityPrimeAux(const std::string & name, InputParameters parameters);

protected:
  virtual Real computeValue();

  /// porepressure
  VariableValue & _pressure_var;

  /// userobject that defines density as a fcn of porepressure
  const RichardsDensity & _density_UO;
};

#endif // RICHARDSDENSITYPRIMEAUX_H
