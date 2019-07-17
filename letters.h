#ifndef H_LETTERS
  #define H_LETTERS
  /*
   *   0  2  4  6  8  10 12 14
   *   A  B  C  D  E  F  G  H
   * ---------------------------
   *   31 29 27 25 23 21 19 17 15 |
   *   I  J  K  L  M  N  O  P  Q  |
   * ---------------------------
   * | 32 34 36 38 40 42 44 46 48
   * | R  S  T  U  V  W  X  Y  Z
   * -------------------------------
   */
  const int strange_letters[] = {
    0, 2, 4, 6, 8, 10, 12, 14,
    31, 29, 27, 25, 23, 21, 19, 17, 15,
    32, 34, 36, 38, 40, 42, 44, 46, 48
  };
  
  const CRGB strange_colors[] = {
    CRGB::Bisque, CRGB::MediumBlue, CRGB::Indigo, CRGB::GreenYellow, CRGB::DodgerBlue, CRGB::Goldenrod, CRGB::Indigo, CRGB::GreenYellow, 
    CRGB::GreenYellow, CRGB::Indigo, CRGB::MediumBlue, CRGB::GreenYellow, CRGB::Goldenrod, CRGB::Indigo, CRGB::Indigo, CRGB::GreenYellow, CRGB::Indigo,
    CRGB::GreenYellow, CRGB::Bisque, CRGB::Goldenrod, CRGB::MediumBlue, CRGB::Indigo, CRGB::MediumBlue, CRGB::Goldenrod, CRGB::Indigo, CRGB::Indigo
  };
#endif
