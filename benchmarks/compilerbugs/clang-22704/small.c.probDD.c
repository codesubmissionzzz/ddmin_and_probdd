typedef unsigned int size_t;
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
int printf(const char *, ...);
void __assert_fail(const char *__assertion, const char *__file,
                   unsigned int __line, const char *__function);

static int8_t(safe_unary_minus_func_int8_t_s)(int8_t si) {

  return

      -si;
}

static int8_t(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2) {

  return

      (si1 + si2);
}

static int8_t(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2) {

  return

      (si1 - si2);
}

static int8_t(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2) {

  return

      ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ? ((si1)) :

                                                         (si1 / si2);
}

static int8_t(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right) {

  return

      ((left < 0) || (((unsigned int)right) >= 32) ||
       (left > ((127) >> ((unsigned int)right))))
          ? ((left))
          :

          (left << ((unsigned int)right));
}

static int8_t(safe_rshift_func_int8_t_s_s)(int8_t left, int right) {

  return

      ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))
          ? ((left))
          :

          (left >> ((int)right));
}

static int16_t(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2) {

  return

      ((si2 == 0) || ((si1 == (-32767 - 1)) && (si2 == (-1)))) ? ((si1)) :

                                                               (si1 % si2);
}

static int16_t(safe_lshift_func_int16_t_s_s)(int16_t left, int right) {

  return

      ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) ||
       (left > ((32767) >> ((int)right))))
          ? ((left))
          :

          (left << ((int)right));
}

static int16_t(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right) {

  return

      ((left < 0) || (((unsigned int)right) >= 32) ||
       (left > ((32767) >> ((unsigned int)right))))
          ? ((left))
          :

          (left << ((unsigned int)right));
}

static int32_t(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2) {

  return

      (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) - si2))) ||
       ((si1 < 0) && (si2 < 0) && (si1 < ((-2147483647 - 1) - si2))))
          ? ((si1))
          :

          (si1 + si2);
}

static int32_t(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2) {

  return

      ((si2 == 0) || ((si1 == (-2147483647 - 1)) && (si2 == (-1)))) ? ((si1)) :

                                                                    (si1 % si2);
}

static int32_t(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right) {

  return

      ((left < 0) || (((unsigned int)right) >= 32) ||
       (left > ((2147483647) >> ((unsigned int)right))))
          ? ((left))
          :

          (left << ((unsigned int)right));
}

static int64_t(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2) {

  return

      (((si1 ^ si2) &
        (((si1 ^ ((si1 ^ si2) & (~(9223372036854775807L)))) - si2) ^ si2)) < 0)
          ? ((si1))
          :

          (si1 - si2);
}

static int64_t(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2) {

  return

      ((si2 == 0) || ((si1 == (-9223372036854775807L - 1)) && (si2 == (-1))))
          ? ((si1))
          :

          (si1 % si2);
}

static uint8_t(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2) {

  return ui1 - ui2;
}

static uint8_t(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2) {

  return

      (ui2 == 0) ? ((ui1)) :

                 (ui1 % ui2);
}

static uint8_t(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right) {

  return

      ((((int)right) < 0) || (((int)right) >= 32) ||
       (left > ((255) >> ((int)right))))
          ? ((left))
          :

          (left << ((int)right));
}

static uint8_t(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right) {

  return

      ((((int)right) < 0) || (((int)right) >= 32)) ? ((left)) :

                                                   (left >> ((int)right));
}

static uint8_t(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right) {

  return

      (((unsigned int)right) >= 32) ? ((left)) :

                                    (left >> ((unsigned int)right));
}

static uint16_t(safe_unary_minus_func_uint16_t_u)(uint16_t ui) { return -ui; }

static uint16_t(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right) {

  return

      ((((int)right) < 0) || (((int)right) >= 32)) ? ((left)) :

                                                   (left >> ((int)right));
}

static uint16_t(safe_rshift_func_uint16_t_u_u)(uint16_t left,
                                               unsigned int right) {

  return

      (((unsigned int)right) >= 32) ? ((left)) :

                                    (left >> ((unsigned int)right));
}

static uint64_t(safe_unary_minus_func_uint64_t_u)(uint64_t ui) { return -ui; }

static uint64_t(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2) {

  return ui1 - ui2;
}

static uint64_t(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2) {

  return

      (ui2 == 0) ? ((ui1)) :

                 (ui1 % ui2);
}

static uint64_t(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2) {

  return

      (ui2 == 0) ? ((ui1)) :

                 (ui1 / ui2);
}

struct S0 {
  int16_t f0;
  uint8_t f1;
  int32_t f2;
  uint16_t f3;
  int32_t f4;
  int32_t f5;
  int32_t f6;
  uint8_t f7;
};

static int32_t g_2 = (-9L);
static struct S0 g_20 = {0xD03BL, 0x5AL, -1L, 2UL, 0L, -9L, 0xCC5C6A3FL, 0UL};
static int32_t g_30[2] = {1L, 1L};

static uint64_t g_184[7][3][6] = {
    {{0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL}},
    {{0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL}},
    {{0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL}},
    {{0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL}},
    {{0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL}},
    {{0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL}},
    {{0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL},
     {0xF69E9B9EE405A429LL, 0xDCAA265524AE8CD2LL, 18446744073709551606UL,
      0xF8E628B5B6B9B84ELL, 0xF8E628B5B6B9B84ELL, 18446744073709551606UL}}};

static int8_t g_305[10][6][4] = {{{8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L}},
                                 {{8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L}},
                                 {{8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L}},
                                 {{8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L}},
                                 {{8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L}},
                                 {{8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L}},
                                 {{8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L}},
                                 {{8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L}},
                                 {{8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L}},
                                 {{8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L},
                                  {8L, 0x88L, 0xE0L, 1L}}};
static struct S0 g_330 = {0x5552L, 1UL,         1L,  65535UL,
                          0L,      0x5F542185L, -9L, 0x98L};

static uint8_t g_1104 = 0x87L;

static uint16_t g_1145[6][10] = {
    {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL},
    {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL},
    {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL},
    {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL},
    {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL},
    {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}};

static int16_t g_1453 = 0x1685L;

static int8_t func_1(void);
inline static uint8_t func_13(int64_t p_14);
inline static int64_t func_17(struct S0 p_18, int8_t p_19);
static int8_t func_24(int16_t p_25, uint32_t p_26, int16_t p_27);
inline static uint32_t func_31(uint16_t p_32);
static int32_t func_34(uint8_t p_35, int8_t p_36);
inline static int8_t func_39(int8_t p_40, int16_t p_41, struct S0 p_42);
static uint16_t func_48(uint64_t p_49, uint16_t p_50, uint16_t p_51);
inline static uint8_t func_65(uint32_t p_66);
static int8_t func_76(uint8_t p_77, uint32_t p_78, uint32_t p_79, uint64_t p_80,
                      uint8_t p_81);

static int8_t func_1(void) {
  uint8_t l_6 = 0x23L;
  int32_t l_1452 = 0x73A0ED86L;
  int32_t l_1455 = 6L;
  int32_t l_1472 = 0xD28DD48FL;
  uint32_t l_1499 = 0UL;
  struct S0 l_1502[6] = {
      {0xBB47L, 0xB9L, -1L, 0UL, -1L, 0x214027EDL, -4L, 251UL},
      {0xBB47L, 0xB9L, -1L, 0UL, -1L, 0x214027EDL, -4L, 251UL},
      {-1L, 255UL, 0x5ADCB66FL, 65531UL, 0L, -6L, 1L, 1UL},
      {0xBB47L, 0xB9L, -1L, 0UL, -1L, 0x214027EDL, -4L, 251UL},
      {0xBB47L, 0xB9L, -1L, 0UL, -1L, 0x214027EDL, -4L, 251UL},
      {-1L, 255UL, 0x5ADCB66FL, 65531UL, 0L, -6L, 1L, 1UL}};
  int32_t l_1508 = 0x51691493L;
  int64_t l_1594 = (-9L);
  uint8_t l_1607 = 255UL;
  int32_t l_1608 = 0xF1FDAF6CL;
  struct S0 l_1611 = {0xFCF3L, 0x21L,       0xA0E84354L, 0x932FL,
                      0L,      0x4ECD49B0L, 7L,          0x0BL};
  int i;
  for (g_2 = (-28); (g_2 >= (-19)); g_2++) {
    int8_t l_12 = 1L;
    int8_t l_23 = 0xBEL;
    int32_t l_1456 = 0x393FAECBL;
    int64_t l_1578 = 0x2CD016B695C532FELL;

    ;

    if ((l_1456 =
             (((g_2 == (!l_6)) <
               ((safe_sub_func_int64_t_s_s(
                    (safe_rshift_func_int8_t_s_s(
                        (g_2 > g_2),
                        (g_2 && (safe_unary_minus_func_uint16_t_u(l_12))))),
                    ((((func_13((
                            g_2 <
                            ((safe_mod_func_uint8_t_u_u(
                                 (((g_1453 =
                                        (l_1452 = func_17(
                                             g_20,
                                             (l_23 =
                                                  (safe_rshift_func_uint16_t_u_u(
                                                      (g_20.f1 > g_20.f5),
                                                      13)))))) &&
                                   g_184[6][0][3]) >= g_1104),
                                 l_12)) &
                             g_1145[0][1]))) <= g_30[1]) > l_12),
                      l_1455) != 4UL))) <= l_12)) == g_1145[5][2]))) {
      uint32_t l_1467 = 0UL;
      int32_t l_1473 = 1L;
      uint32_t l_1513 = 1UL;
      int32_t l_1537 = (-1L);
      int32_t l_1591[6];
      int i;

      {
        uint8_t l_1489 = 0x98L;
        struct S0 l_1490 = {4L,          0x94L, 0xDC1346CEL, 8UL,
                            0x567745F9L, 0L,    0xB2DD4857L, 1UL};
        l_1490 =
            ((safe_add_func_int8_t_s_s(
                 (safe_sub_func_uint8_t_u_u(
                     (((safe_lshift_func_int16_t_s_s((!0x6834L), 11)) >= 1UL),
                      l_1452),
                     ((+l_1473) >=
                      (g_330.f0 = (+(safe_sub_func_int8_t_s_s(
                           (safe_add_func_int32_t_s_s(
                               ((l_6 & (((l_1455 = (l_6 >= l_1489)) &&
                                         (l_12 && (l_1455 = g_1453))) ^
                                        (-1L))) ^
                                (-4L)),
                               l_1472)),
                           0x2FL))))))),
                 g_305[8][2][2])),
             g_330);
      }

    } else {
    };

    ;

    ;

    ;

    ;

    safe_rshift_func_uint8_t_u_s(func_65((0L < 4294967295UL)), g_20.f0);

    ;
  }

  return l_1611.f7;
}

inline static uint8_t func_13(int64_t p_14) {
  uint8_t l_1454 = 5UL;

  return l_1454;
}

inline static int64_t func_17(struct S0 p_18, int8_t p_19) {
  uint64_t l_1065 = 0x0E7614B67F7752C9LL;
  int32_t l_1420 = (-1L);
  uint32_t l_1448 = 0UL;
  int32_t l_1449 = 0x4AC5E5FCL;
  int32_t l_1451[4];
  int i;

  ;

  ;

  ;

  ;

  ;

  ;

  return l_1451[2];
}

inline static uint8_t func_65(uint32_t p_66) {
  int32_t l_71 = (-6L);
  uint8_t l_109 = 1UL;
  int32_t l_116 = 0x80D5298BL;
  uint8_t l_119 = 0xEBL;
  int32_t l_120 = 1L;
  int32_t l_121 = 0x3AC23FC0L;
  int32_t l_122 = (-10L);
  uint16_t l_123[3];
  int i;

  if (g_20.f6)
    goto lbl_93;

  safe_unary_minus_func_int8_t_s(
      ((safe_sub_func_uint64_t_u_u(
           (safe_unary_minus_func_uint64_t_u(
               (((g_20.f2 > g_20.f0) |
                 (safe_rshift_func_uint8_t_u_s(func_65((0L < 4294967295UL)),
                                               g_20.f0))) < g_30[0]))),
           (-6L))) >= 0x2712L));

  safe_add_func_int8_t_s_s(
      (((safe_mod_func_uint64_t_u_u(
            (((safe_mod_func_int32_t_s_s(
                  ((safe_rshift_func_uint16_t_u_u(l_109, 1)) !=
                   ((((l_120 =
                           ((safe_mod_func_int16_t_s_s(
                                (safe_lshift_func_int16_t_s_u(p_66, 15)),
                                0xB865L)) ^
                            (safe_mod_func_int64_t_s_s(
                                (((g_20.f6 =
                                       (((((l_116 = p_66),
                                           (l_116 =
                                                (safe_lshift_func_int8_t_s_u(
                                                    0x8AL, 1)))) ==
                                          0x282E8BC9L) &
                                         2L) ^
                                        9UL)),
                                  l_119) < p_66),
                                0xBCCD07CA36F24FD6LL)))),
                      g_20.f1) > l_119),
                    p_66)),
                  (-1L))) &&
              l_119) > p_66),
            g_20.f7)) ||
        l_120) <= 0x1C728F08L),
      p_66);

  safe_add_func_int32_t_s_s(g_330.f7, 2);

  {
    uint8_t l_1454 = 5UL;

    return l_1454;
  }

lbl_93:

  func_65((0L < 4294967295UL));

  return l_119;
}

int main(void) {
  int i, j, k;
  int print_hash_value = 0;

  func_1();

  return 0;
}
