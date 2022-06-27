#include "DHT.h"
#define DHTTYPE DHT22
#define DHT22_Pin A1

DHT dht(DHT22_Pin, DHTTYPE);
float humidity, temperature;

void setup()
{
    Serial.begin(9600);
    dht.begin();
    delay(500);
}

void loop()
{
    humidity = dht.readHumidity();
    temperature = dht.readTemperature();

    //Serial.print("Luftfeuchte: ");
    Serial.print(humidity);
    Serial.print(",");
    //Serial.print("Temperatur: ");
    Serial.print(temperature);
    Serial.println();

    delay(1000);
}
