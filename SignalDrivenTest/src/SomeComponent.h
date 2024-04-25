#ifndef SOME_COMPONENT_H
#define SOME_COMPONENT_H

#include <Arduino.h>
#include "IBaseComponent.h"

class SomeComponent : public IBaseComponent{
public:
    void notify(String event)
    {
        Serial.print("MotionController notify: ");
        Serial.println(event);
    };
};

#endif // SOME_COMPONENT_H