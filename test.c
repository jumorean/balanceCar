#include <wiringPi.h>
	
int main(int argc, char ** argv)
{
	wiringPiSetup();
	pinMode(0, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(2, OUTPUT);
	digitalWrite(0, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(2, LOW);
	return 0;
}
