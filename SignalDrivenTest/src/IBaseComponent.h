#ifndef BASE_COMPONENT_H
#define I_BASE_COMPONENT_H

class IBaseComponent {
public:
    virtual void notify(String message) = 0;
};

#endif // I_BASE_COMPONENT_H