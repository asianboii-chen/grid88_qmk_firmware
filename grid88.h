/**
 * defines the key layout for grid88, a custom handwired keyboard.
 * 
 * qianlang chen
 * a 05/09/20
 */

#ifndef GRID88_H
# define GRID88_H

# define XXX KC_NO

# define KEY_MAP(                                                              \
    K00, K01, K02, K03, K04, K05, K06,                                         \
    K10, K11, K12, K13, K14, K15, K16,                                         \
    K20, K21, K22, K23, K24, K25, K26,                                         \
    K30, K31, K32, K33, K34, K35, K36,                                         \
    K40, K41, K42, K43, K44, K45, K46,                                         \
    K50, K51, K52, K53, K54, K55,                                              \
                   K63,      K65, K66,                                         \
                                                                               \
    K07, K08, K09, K0A, K0B, K0C, K0D,                                         \
    K17, K18, K19, K1A, K1B, K1C, K1D,                                         \
    K27, K28, K29, K2A, K2B, K2C, K2D,                                         \
    K37, K38, K39, K3A, K3B, K3C, K3D,                                         \
    K47, K48, K49, K4A, K4B, K4C, K4D,                                         \
         K58, K59, K5A, K5B, K5C, K5D,                                         \
    K67, K68,      K6A                                                         \
  ) {                                                                          \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D },  \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D },  \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D },  \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D },  \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D },  \
    { K50, K51, K52, K53, K54, K55, XXX, XXX, K58, K59, K5A, K5B, K5C, K5D },  \
    { XXX, XXX, XXX, K63, XXX, K65, K66, K67, K68, XXX, K6A, XXX, XXX, XXX },  \
  }

#endif /* GRID88_H */
