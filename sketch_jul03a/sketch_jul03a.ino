#include <Morse.h>

Morse morse(13); //pinmode端口

/*String MORSE[26] = {
  ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
  ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
  "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."      A-Z的摩尔斯电码
  };
*/
void setup()
{
  Serial.begin(9600);//波特率
}

void loop()
{
  char str = '\0';  //串行数据存储

  if (Serial.available() > 0)
  {
    str = char(Serial.read());
    Serial.println(str); 
    delay(2); 
  }

  switch (str)
  {
    case 'A':
    case 'a':
      morse.dot();
      morse.dash();
      morse.c_space();
      break;
    case 'B':
    case 'b':
      morse.dash();
      morse.dot();
      morse.dot();
      morse.dot();
      morse.c_space();
      break;
    case 'C':
    case 'c':
      morse.dash();
      morse.dot();
      morse.dash();
      morse.dot();
      morse.c_space();
      break;
    case 'D':
    case 'd':
      morse.dash();
      morse.dot();
      morse.dot();
      morse.c_space();
      break;
    case 'F':
    case 'f':
      morse.dot();
      morse.dot();
      morse.dash();
      morse.dot();
      morse.c_space();
      break;
    case 'G':
    case 'g':
      morse.dash();
      morse.dash();
      morse.dot();
      morse.c_space();
      break;
    case 'H':
    case 'h':
      morse.dot();
      morse.dot();
      morse.dot();
      morse.dot();
      morse.c_space();
      break;
    case 'I':
    case 'i':
      morse.dot();
      morse.dot();
      morse.c_space();
      break;
    case 'J':
    case 'j':
      morse.dot();
      morse.dash();
      morse.dash();
      morse.dash();
      morse.c_space();
      break;
    case 'K':
    case 'k':
      morse.dash();
      morse.dot();
      morse.dash();
      morse.c_space();
      break;
    case 'L':
    case 'l':
      morse.dot();
      morse.dash();
      morse.dot();
      morse.dot();
      morse.c_space();
      break;
    case 'M':
    case 'm':
      morse.dash();
      morse.dash();
      morse.c_space();
      break;
    case 'N':
    case 'n':
      morse.dash();
      morse.dot();
      morse.c_space();
      break;
    case 'O':
    case 'o':
      morse.dash();
      morse.dash();
      morse.dash();
      morse.c_space();
      break;
    case 'P':
    case 'p':
      morse.dot();
      morse.dash();
      morse.dash();
      morse.dot();
      morse.c_space();
      break;
    case 'Q':
    case 'q':
      morse.dash();
      morse.dash();
      morse.dot();
      morse.dash();
      morse.c_space();
      break;
    case 'R':
    case 'r':
      morse.dot();
      morse.dash();
      morse.dot();
      morse.c_space();
      break;
    case 'S':
    case 's':
      morse.dot();
      morse.dot();
      morse.dot();
      morse.c_space();
      break;
    case 'T':
    case 't':
      morse.dash();
      morse.c_space();
      break;
    case 'U':
    case 'u':
      morse.dot();
      morse.dot();
      morse.dash();
      morse.c_space();
      break;
    case 'V':
    case 'v':
      morse.dot();
      morse.dot();
      morse.dot();
      morse.dash();
      morse.c_space();
      break;
    case 'W':
    case 'w':
      morse.dot();
      morse.dash();
      morse.dash();
      morse.c_space();
      break;
    case 'X':
    case 'x':
      morse.dash();
      morse.dot();
      morse.dot();
      morse.dash();
      morse.c_space();
      break;
    case 'Y':
    case 'y':
      morse.dash();
      morse.dot();
      morse.dash();
      morse.dash();
      morse.c_space();
      break;
    case 'Z':
    case 'z':
      morse.dash();
      morse.dash();
      morse.dot();
      morse.dot();
      morse.c_space();
      break;
    case ' ':
    case '\n':
    morse.w_space();
    break;
    default:
      break;
  }

}
