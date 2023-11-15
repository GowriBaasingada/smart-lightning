#include<DHT.h>
#define DHTPIN 13
# define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop ()
{
  delay(2000);
  float humidity=dht.readHumidity();
  float temperature =dht.readTemperature();
  if (isnan(humidity) || isnan(temperature)) //non an number 
  {
    Serial.println("failed to read from DHT sensor!");
    return;
  }
  Serial.print("temperature :");
  Serial.print(temperature);
  Serial.println(" *C ");

  Serial.print("Humidity:");
  Serial.print(humidity);
  Serial.println("%");

  Serial.println();
  delay(2000);

}