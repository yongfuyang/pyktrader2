#ifndef AMOPT_H
#define AMOPT_H

#include <cmath>
#include <string>
#include <limits>
#include "normdist.h"
#include "euopt.h"
#include "math_utils.h"

double american_prem_fut_btree(double F,double K,double vol,double t_exp,double df, std::string PutCall, int bin_tree_nstep = 128);
double AmericanOptFutPrice(double F,double K,double vol,double t_exp,double df, std::string PutCall, int bin_tree_nstep = 128);
double AmericanImpliedVol(double MktPrice, double F,double K,double r,double T, std::string PutCall, int bin_tree_nstep = 128);
//double american_prem_fut_BAW(double F,double K,double vol,double t_exp,double df, std::string PutCall);

#endif
