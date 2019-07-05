int _dottime=300;

void setup()
{
  Serial.begin(9600);//波特率
  pinMode(8,OUTPUT);
}


/*String MORSE[26] = {
  ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
  ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
  "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."      A-Z的摩尔斯电码
  };
*/

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
       dot();
       dash();
       c_space();
      break;
    case 'B':
    case 'b':
       dash();
       dot();
       dot();
       dot();
       c_space();
      break;
    case 'C':
    case 'c':
       dash();
       dot();
       dash();
       dot();
       c_space();
      break;
    case 'D':
    case 'd':
       dash();
       dot();
       dot();
       c_space();
      break;
    case 'F':
    case 'f':
       dot();
       dot();
       dash();
       dot();
       c_space();
      break;
    case 'G':
    case 'g':
       dash();
       dash();
       dot();
       c_space();
      break;
    case 'H':
    case 'h':
       dot();
       dot();
       dot();
       dot();
       c_space();
      break;
    case 'I':
    case 'i':
       dot();
       dot();
       c_space();
      break;
    case 'J':
    case 'j':
       dot();
       dash();
       dash();
       dash();
       c_space();
      break;
    case 'K':
    case 'k':
       dash();
       dot();
       dash();
       c_space();
      break;
    case 'L':
    case 'l':
       dot();
       dash();
       dot();
       dot();
       c_space();
      break;
    case 'M':
    case 'm':
       dash();
       dash();
       c_space();
      break;
    case 'N':
    case 'n':
       dash();
       dot();
       c_space();
      break;
    case 'O':
    case 'o':
       dash();
       dash();
       dash();
       c_space();
      break;
    case 'P':
    case 'p':
       dot();
       dash();
       dash();
       dot();
       c_space();
      break;
    case 'Q':
    case 'q':
       dash();
       dash();
       dot();
       dash();
       c_space();
      break;
    case 'R':
    case 'r':
       dot();
       dash();
       dot();
       c_space();
      break;
    case 'S':
    case 's':
       dot();
       dot();
       dot();
       c_space();
      break;
    case 'T':
    case 't':
       dash();
       c_space();
      break;
    case 'U':
    case 'u':
       dot();
       dot();
       dash();
       c_space();
      break;
    case 'V':
    case 'v':
       dot();
       dot();
       dot();
       dash();
       c_space();
      break;
    case 'W':
    case 'w':
       dot();
       dash();
       dash();
       c_space();
      break;
    case 'X':
    case 'x':
       dash();
       dot();
       dot();
       dash();
       c_space();
      break;
    case 'Y':
    case 'y':
       dash();
       dot();
       dash();
       dash();
       c_space();
      break;
    case 'Z':
    case 'z':
       dash();
       dash();
       dot();
       dot();
       c_space();
      break;
    case ' ':
    case '\n':
      w_space();
    break;
    default:
      break;
  }

}
void dot()
{
	digitalWrite(8,HIGH);
	delay(_dottime);
	digitalWrite(8,LOW);
	delay(_dottime);
}

void dash()
{
	digitalWrite(8,HIGH);
	delay(_dottime*3);
	digitalWrite(8,LOW);
	delay(_dottime);
}

void c_space()
{
	digitalWrite(8,LOW);
	delay(_dottime*3);
}

void w_space()
{
	digitalWrite(8,LOW);
	delay(_dottime*7);
}