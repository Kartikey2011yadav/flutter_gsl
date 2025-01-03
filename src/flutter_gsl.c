#include "flutter_gsl.h"

// Physical Constants
const double GSL_CONST_MKSA_SPEED_OF_LIGHT = 299792458.0;
const double GSL_CONST_MKSA_GRAVITATIONAL_CONSTANT = 6.67430e-11;
const double GSL_CONST_MKSA_PLANCKS_CONSTANT_H = 6.62607015e-34;
const double GSL_CONST_MKSA_PLANCKS_CONSTANT_HBAR = 1.054571817e-34;
const double GSL_CONST_MKSA_BOLTZMANN = 1.380649e-23;
const double GSL_CONST_MKSA_STEFAN_BOLTZMANN_CONSTANT = 5.670374419e-8;
const double GSL_CONST_MKSA_THOMSON_CROSS_SECTION = 6.6524587321e-29;
const double GSL_CONST_NUM_AVOGADRO = 6.02214076e23;
const double GSL_CONST_NUM_FINE_STRUCTURE = 7.2973525693e-3;

// Units of Measurement
const double GSL_CONST_MKSA_ACRE = 4046.8564224;
const double GSL_CONST_MKSA_ANGSTROM = 1e-10;
const double GSL_CONST_MKSA_ASTRONOMICAL_UNIT = 1.495978707e11;
const double GSL_CONST_MKSA_BAR = 1e5;
const double GSL_CONST_MKSA_BARN = 1e-28;
const double GSL_CONST_MKSA_BOHR_MAGNETON = 9.2740100783e-24;
const double GSL_CONST_MKSA_BOHR_RADIUS = 5.29177210903e-11;
const double GSL_CONST_MKSA_BTU = 1055.05585;
const double GSL_CONST_MKSA_CALORIE = 4.184;
const double GSL_CONST_MKSA_CANADIAN_GALLON = 4.54609;
const double GSL_CONST_MKSA_CARAT = 0.0002;
const double GSL_CONST_MKSA_CURIE = 3.7e10;
const double GSL_CONST_MKSA_DAY = 86400.0;
const double GSL_CONST_MKSA_DEBYE = 3.335640951e-30;
const double GSL_CONST_MKSA_DYNE = 1e-5;
const double GSL_CONST_MKSA_ELECTRON_CHARGE = 1.602176634e-19;
const double GSL_CONST_MKSA_ELECTRON_MAGNETIC_MOMENT = 9.2847647043e-24;
const double GSL_CONST_MKSA_ELECTRON_VOLT = 1.602176634e-19;
const double GSL_CONST_MKSA_ERG = 1e-7;
const double GSL_CONST_MKSA_FARADAY = 96485.33212;
const double GSL_CONST_MKSA_FATHOM = 1.8288;
const double GSL_CONST_MKSA_FOOT = 0.3048;
const double GSL_CONST_MKSA_FOOTCANDLE = 10.76391;
const double GSL_CONST_MKSA_FOOTLAMBERT = 3.4262591;
const double GSL_CONST_MKSA_GAUSS = 1e-4;
const double GSL_CONST_MKSA_GRAM_FORCE = 0.00980665;
const double GSL_CONST_MKSA_GRAV_ACCEL = 9.80665;
const double GSL_CONST_MKSA_HECTARE = 1e4;
const double GSL_CONST_MKSA_HORSEPOWER = 745.69987158227022;
const double GSL_CONST_MKSA_HOUR = 3600.0;
const double GSL_CONST_MKSA_INCH = 0.0254;
const double GSL_CONST_MKSA_INCH_OF_MERCURY = 3386.389;
const double GSL_CONST_MKSA_INCH_OF_WATER = 249.08891;
const double GSL_CONST_MKSA_JOULE = 1.0;
const double GSL_CONST_MKSA_KILOMETERS_PER_HOUR = 0.27777778;
const double GSL_CONST_MKSA_KILOPOUND_FORCE = 4448.2216;
const double GSL_CONST_MKSA_KNOT = 0.51444444;
const double GSL_CONST_MKSA_LAMBERT = 3183.0988618;
const double GSL_CONST_MKSA_LIGHT_YEAR = 9.4607304725808e15;
const double GSL_CONST_MKSA_LITER = 0.001;
const double GSL_CONST_MKSA_LUMEN = 1.0;
const double GSL_CONST_MKSA_LUX = 1.0;
const double GSL_CONST_MKSA_MASS_ELECTRON = 9.10938356e-31;
const double GSL_CONST_MKSA_MASS_MUON = 1.883531627e-28;
const double GSL_CONST_MKSA_MASS_NEUTRON = 1.674927471e-27;
const double GSL_CONST_MKSA_MASS_PROTON = 1.672621898e-27;
const double GSL_CONST_MKSA_METER_OF_MERCURY = 133322.387415;
const double GSL_CONST_MKSA_METRIC_TON = 1000.0;
const double GSL_CONST_MKSA_MICRON = 1e-6;
const double GSL_CONST_MKSA_MIL = 2.54e-5;
const double GSL_CONST_MKSA_MILE = 1609.344;
const double GSL_CONST_MKSA_MILES_PER_HOUR = 0.44704;
const double GSL_CONST_MKSA_MINUTE = 60.0;
const double GSL_CONST_MKSA_MOLAR_GAS = 8.314462618;
const double GSL_CONST_MKSA_NAUTICAL_MILE = 1852.0;
const double GSL_CONST_MKSA_NEWTON = 1.0;
const double GSL_CONST_MKSA_NUCLEAR_MAGNETON = 5.050783699e-27;
const double GSL_CONST_MKSA_OUNCE_MASS = 0.028349523125;
const double GSL_CONST_MKSA_PARSEC = 3.08567758149137e16;
const double GSL_CONST_MKSA_PHOT = 10000.0;
const double GSL_CONST_MKSA_PINT = 0.000473176473;
const double GSL_CONST_MKSA_POINT = 0.0003527777778;
const double GSL_CONST_MKSA_POISE = 0.1;
const double GSL_CONST_MKSA_POUND_FORCE = 4.4482216152605;
const double GSL_CONST_MKSA_POUND_MASS = 0.45359237;
const double GSL_CONST_MKSA_POUNDAL = 0.138254954376;
const double GSL_CONST_MKSA_PROTON_MAGNETIC_MOMENT = 1.41060679736e-26;
const double GSL_CONST_MKSA_PSI = 6894.757293168;
const double GSL_CONST_MKSA_QUART = 0.000946352946;
const double GSL_CONST_MKSA_RAD = 0.01;
const double GSL_CONST_MKSA_ROENTGEN = 2.58e-4;
const double GSL_CONST_MKSA_RYDBERG = 2.1798723611035e-18;
const double GSL_CONST_MKSA_SOLAR_MASS = 1.98847e30;
const double GSL_CONST_MKSA_STANDARD_GAS_VOLUME = 0.022414;
const double GSL_CONST_MKSA_STD_ATMOSPHERE = 101325.0;
const double GSL_CONST_MKSA_STILB = 10000.0;
const double GSL_CONST_MKSA_STOKES = 1e-4;
const double GSL_CONST_MKSA_TEXPOINT = 0.0003527777778;
const double GSL_CONST_MKSA_THERM = 105505585.257348;
const double GSL_CONST_MKSA_TON = 907.18474;
const double GSL_CONST_MKSA_TORR = 133.3223684211;
const double GSL_CONST_MKSA_TROY_OUNCE = 0.0311034768;
const double GSL_CONST_MKSA_UK_GALLON = 0.00454609;
const double GSL_CONST_MKSA_UK_TON = 1016.0469088;
const double GSL_CONST_MKSA_UNIFIED_ATOMIC_MASS = 1.66053906660e-27;
const double GSL_CONST_MKSA_US_GALLON = 0.003785411784;
const double GSL_CONST_MKSA_VACUUM_PERMEABILITY = 1.25663706212e-6;
const double GSL_CONST_MKSA_VACUUM_PERMITTIVITY = 8.8541878128e-12;
const double GSL_CONST_MKSA_WEEK = 604800.0;
const double GSL_CONST_MKSA_YARD = 0.9144;

// Mathematical Constants
const double M_E = 2.718281828459045;
const double M_LOG2E = 1.4426950408889634;
const double M_LOG10E = 0.4342944819032518;
const double M_SQRT2 = 1.4142135623730951;
const double M_SQRT1_2 = 0.7071067811865476;
const double M_SQRT3 = 1.7320508075688772;
const double M_PI = 3.141592653589793;
const double M_PI_2 = 1.5707963267948966;
const double M_PI_4 = 0.7853981633974483;
const double M_SQRTPI = 1.772453850905516;
const double M_2_SQRTPI = 1.1283791670955126;
const double M_1_PI = 0.3183098861837907;
const double M_2_PI = 0.6366197723675814;
const double M_LN10 = 2.302585092994046;
const double M_LN2 = 0.6931471805599453;
const double M_LNPI = 1.1447298858494002;
const double M_EULER = 0.5772156649015329;

// Special Values
const double GSL_IEEE_MODE = 0.0; // Placeholder value
const double GSL_IMAG = 0.0; // Placeholder value
const double GSL_REAL = 0.0; // Placeholder value
const double GSL_NAN = 0.0 / 0.0;
const double GSL_NEGINF = -1.0 / 0.0;
const double GSL_POSINF = 1.0 / 0.0;
const double GSL_ERROR_VAL = -1.0; // Placeholder value
const double GSL_ERROR = -1.0; // Placeholder value
const double GSL_RNG_SEED = 0.0; // Placeholder value
const double GSL_RNG_TYPE = 0.0; // Placeholder value
const double GSL_RANGE_CHECK_OFF = 0.0; // Placeholder value
const double GSL_SET_COMPLEX = 0.0; // Placeholder value
const double GSL_SIGN = 0.0; // Placeholder value

// Bessel functions
double gsl_bessel_j0(double x) {
    return gsl_sf_bessel_J0(x);
}

double gsl_bessel_j1(double x) {
    return gsl_sf_bessel_J1(x);
}

double gsl_bessel_y0(double x) {
    return gsl_sf_bessel_Y0(x);
}

double gsl_bessel_y1(double x) {
    return gsl_sf_bessel_Y1(x);
}


double gsl_bessel_sin(double x){
    return gsl_sf_sin(x);
}
