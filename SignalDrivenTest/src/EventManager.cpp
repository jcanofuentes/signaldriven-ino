#include "EventManager.h"

void EventManager::addComponent(BaseComponent *component)
{
  components.push_back(component);
}
void EventManager::notify(char command, int value)
{
  // Serial << "EventManager notify: " << command << " " << value << endl;

  for (int i = 0; i < components.size(); i++)
  {
    String data = String(command) + " " + String(value);
    components[i]->notify(data);
  }
}
