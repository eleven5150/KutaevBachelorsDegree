/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_LEDSTRIPDATA_PB_H_INCLUDED
#define PB_LEDSTRIPDATA_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _BJT_t { 
    uint32_t partNumber; 
    uint32_t package; 
    uint32_t structure; 
    uint32_t vColEmiMax; 
    uint32_t colCurMax; 
    uint32_t power; 
    uint32_t amount; 
} BJT_t;

typedef struct _Capacitor_t { 
    uint32_t partNumber; 
    uint32_t package; 
    uint32_t capacitance; 
    uint32_t tolerance; 
    uint32_t nullPlug; 
    uint32_t maxVoltage; 
    uint32_t amount; 
} Capacitor_t;

typedef struct _Item_t { 
    uint32_t type; 
} Item_t;

typedef struct _Resistor_t { 
    uint32_t partNumber; 
    uint32_t package; 
    uint32_t resistance; 
    uint32_t tolerance; 
    uint32_t power; 
    uint32_t maxVoltage; 
    uint32_t amount; 
} Resistor_t;

typedef struct _Respond_t { 
    uint32_t code; 
} Respond_t;

typedef struct _RgbData_t { 
    uint32_t red; 
    uint32_t green; 
    uint32_t blue; 
} RgbData_t;

typedef struct _LedStripData_t { 
    uint32_t boardNumber; 
    uint32_t stripNumber; 
    uint32_t startLedNumber; 
    uint32_t endLedNumber; 
    bool has_Colour;
    RgbData_t Colour; 
} LedStripData_t;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define LedStripData_t_init_default              {0, 0, 0, 0, false, RgbData_t_init_default}
#define RgbData_t_init_default                   {0, 0, 0}
#define Respond_t_init_default                   {0}
#define Item_t_init_default                      {0}
#define Resistor_t_init_default                  {0, 0, 0, 0, 0, 0, 0}
#define Capacitor_t_init_default                 {0, 0, 0, 0, 0, 0, 0}
#define BJT_t_init_default                       {0, 0, 0, 0, 0, 0, 0}
#define LedStripData_t_init_zero                 {0, 0, 0, 0, false, RgbData_t_init_zero}
#define RgbData_t_init_zero                      {0, 0, 0}
#define Respond_t_init_zero                      {0}
#define Item_t_init_zero                         {0}
#define Resistor_t_init_zero                     {0, 0, 0, 0, 0, 0, 0}
#define Capacitor_t_init_zero                    {0, 0, 0, 0, 0, 0, 0}
#define BJT_t_init_zero                          {0, 0, 0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define BJT_t_partNumber_tag                     1
#define BJT_t_package_tag                        2
#define BJT_t_structure_tag                      3
#define BJT_t_vColEmiMax_tag                     4
#define BJT_t_colCurMax_tag                      5
#define BJT_t_power_tag                          6
#define BJT_t_amount_tag                         7
#define Capacitor_t_partNumber_tag               1
#define Capacitor_t_package_tag                  2
#define Capacitor_t_capacitance_tag              3
#define Capacitor_t_tolerance_tag                4
#define Capacitor_t_nullPlug_tag                 5
#define Capacitor_t_maxVoltage_tag               6
#define Capacitor_t_amount_tag                   7
#define Item_t_type_tag                          1
#define Resistor_t_partNumber_tag                1
#define Resistor_t_package_tag                   2
#define Resistor_t_resistance_tag                3
#define Resistor_t_tolerance_tag                 4
#define Resistor_t_power_tag                     5
#define Resistor_t_maxVoltage_tag                6
#define Resistor_t_amount_tag                    7
#define Respond_t_code_tag                       1
#define RgbData_t_red_tag                        1
#define RgbData_t_green_tag                      2
#define RgbData_t_blue_tag                       3
#define LedStripData_t_boardNumber_tag           1
#define LedStripData_t_stripNumber_tag           2
#define LedStripData_t_startLedNumber_tag        3
#define LedStripData_t_endLedNumber_tag          4
#define LedStripData_t_Colour_tag                5

/* Struct field encoding specification for nanopb */
#define LedStripData_t_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   boardNumber,       1) \
X(a, STATIC,   SINGULAR, UINT32,   stripNumber,       2) \
X(a, STATIC,   SINGULAR, UINT32,   startLedNumber,    3) \
X(a, STATIC,   SINGULAR, UINT32,   endLedNumber,      4) \
X(a, STATIC,   OPTIONAL, MESSAGE,  Colour,            5)
#define LedStripData_t_CALLBACK NULL
#define LedStripData_t_DEFAULT NULL
#define LedStripData_t_Colour_MSGTYPE RgbData_t

#define RgbData_t_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   red,               1) \
X(a, STATIC,   SINGULAR, UINT32,   green,             2) \
X(a, STATIC,   SINGULAR, UINT32,   blue,              3)
#define RgbData_t_CALLBACK NULL
#define RgbData_t_DEFAULT NULL

#define Respond_t_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   code,              1)
#define Respond_t_CALLBACK NULL
#define Respond_t_DEFAULT NULL

#define Item_t_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   type,              1)
#define Item_t_CALLBACK NULL
#define Item_t_DEFAULT NULL

#define Resistor_t_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   partNumber,        1) \
X(a, STATIC,   SINGULAR, UINT32,   package,           2) \
X(a, STATIC,   SINGULAR, UINT32,   resistance,        3) \
X(a, STATIC,   SINGULAR, UINT32,   tolerance,         4) \
X(a, STATIC,   SINGULAR, UINT32,   power,             5) \
X(a, STATIC,   SINGULAR, UINT32,   maxVoltage,        6) \
X(a, STATIC,   SINGULAR, UINT32,   amount,            7)
#define Resistor_t_CALLBACK NULL
#define Resistor_t_DEFAULT NULL

#define Capacitor_t_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   partNumber,        1) \
X(a, STATIC,   SINGULAR, UINT32,   package,           2) \
X(a, STATIC,   SINGULAR, UINT32,   capacitance,       3) \
X(a, STATIC,   SINGULAR, UINT32,   tolerance,         4) \
X(a, STATIC,   SINGULAR, UINT32,   nullPlug,          5) \
X(a, STATIC,   SINGULAR, UINT32,   maxVoltage,        6) \
X(a, STATIC,   SINGULAR, UINT32,   amount,            7)
#define Capacitor_t_CALLBACK NULL
#define Capacitor_t_DEFAULT NULL

#define BJT_t_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   partNumber,        1) \
X(a, STATIC,   SINGULAR, UINT32,   package,           2) \
X(a, STATIC,   SINGULAR, UINT32,   structure,         3) \
X(a, STATIC,   SINGULAR, UINT32,   vColEmiMax,        4) \
X(a, STATIC,   SINGULAR, UINT32,   colCurMax,         5) \
X(a, STATIC,   SINGULAR, UINT32,   power,             6) \
X(a, STATIC,   SINGULAR, UINT32,   amount,            7)
#define BJT_t_CALLBACK NULL
#define BJT_t_DEFAULT NULL

extern const pb_msgdesc_t LedStripData_t_msg;
extern const pb_msgdesc_t RgbData_t_msg;
extern const pb_msgdesc_t Respond_t_msg;
extern const pb_msgdesc_t Item_t_msg;
extern const pb_msgdesc_t Resistor_t_msg;
extern const pb_msgdesc_t Capacitor_t_msg;
extern const pb_msgdesc_t BJT_t_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define LedStripData_t_fields &LedStripData_t_msg
#define RgbData_t_fields &RgbData_t_msg
#define Respond_t_fields &Respond_t_msg
#define Item_t_fields &Item_t_msg
#define Resistor_t_fields &Resistor_t_msg
#define Capacitor_t_fields &Capacitor_t_msg
#define BJT_t_fields &BJT_t_msg

/* Maximum encoded size of messages (where known) */
#define BJT_t_size                               42
#define Capacitor_t_size                         42
#define Item_t_size                              6
#define LedStripData_t_size                      44
#define Resistor_t_size                          42
#define Respond_t_size                           6
#define RgbData_t_size                           18

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
