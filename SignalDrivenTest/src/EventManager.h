#ifndef EVENT_MANAGER_H
#define EVENT_MANAGER_H

#include <Arduino.h>
#include "IBaseComponent.h"
#include <Streaming.h>
#include <Vector.h>

class EventManager
{
private:
  Vector<IBaseComponent*> components;

public:
  void addComponent(BaseComponent* component);
  void notify(char command, int value);
};

#endif // EVENT_MANAGER_H