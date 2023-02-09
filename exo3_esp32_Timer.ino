                     
                     /* This program allows us to associat Deep Sleep model of ESP 32 with Timer Wake Up*/
//Variables
int usToSecConvertorFactor=1000000;   // Conversion factor for micro seconds to seconds
//int SleepingTime=600;                   // Time ESP32 will go to sleep (in seconds)(10min=10*60=600s)
int SleepingTime=10;                   // Time ESP32 will go to sleep (in seconds)
int led=4; 
//While the ESP32 is in deep sleep mode the RTC memory also remains powered on, and  we could store data in the RTC memory to access peripheral devices
RTC_DATA_ATTR int bootCount=0;        // counter of ESP restart 

void setup()
{
  pinMode(led,OUTPUT);
  Serial.begin(115200);
  delay(1000); //Take some time to open up the Serial Monitor
  bootCount=bootCount+1;
  Serial.println("Boot number: "+ String(bootCount));
  esp_sleep_enable_timer_wakeup(SleepingTime * usToSecConvertorFactor);//Enabling the ESP32 to wake up after a predefined amount of time 
  Serial.println("Setup ESP32 to sleep for every " + String(SleepingTime) + " Seconds");
//============( here you can write what you need from esp do after wakeup)=======
   //for exemple we can send an email or light up a sensor 
                   digitalWrite(led,HIGH);
//===============================================================================
  Serial.println("Going to sleep now");
  delay(1000);
  Serial.flush(); 
  esp_deep_sleep_start();// function to put your ESP32 into deep sleep mode.
}

void loop()
{
  //This is not going to be called  
}
