#include <Arduino.h>

#include "src/EventManager.h"
#include "src/SomeComponent.h"

EventManager eventManager;


void setup()
{
    Serial.begin(9600);
    Serial.println("Hello World!");

    SomeComponent* c = new SomeComponent();
    eventManager.addComponent(c);

}

void loop()
{
    // Notify an event every 1 second
    static int i = 0;
    delay(1000);
    eventManager.notify('b', ++i== 10 ? 0 : i);
}
