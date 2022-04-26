#pragma once

#include "PubSubClient.h"

class NetworkDevice
{
public:
    explicit NetworkDevice(const String& hostname)
    : _hostname(hostname)
    {}

    virtual PubSubClient* mqttClient() = 0;

    virtual void initialize() = 0;
    virtual void reconfigure() = 0;

    virtual bool isConnected() = 0;

protected:
    const String _hostname;
};