#pragma once

// Pin assignments for a 4-wire LED for status indication
#define RED_LED A1 //
#define GREEN_LED A2
#define BLUE_LED A3

#define OFF (0)
#define RED (1)
#define BLUE (2)
#define GREEN (3)

namespace utils 
{
void printBanner(const char *firmware_title, const char *firmware_version, const char *device_os, 
                 const char *firmware_filename, const char *json_protocol_version, const char *deviceID)
{
    Serial.println();
    Serial.println("======================================================================");
    Serial.print("# ");
    Serial.print(firmware_title);
    Serial.print(" V");
    Serial.println(firmware_version);
    Serial.println("----------------------------------------------------------------------");
    Serial.print("Firmware filename : ");
    Serial.println(firmware_filename);
    Serial.print("Operating system  : ");
    Serial.println(device_os);
    Serial.print("Protocol version  : ");
    Serial.println(json_protocol_version);
    Serial.print("Device ID         : ");
    Serial.println(deviceID);
    Serial.println("======================================================================");
    Serial.println();
}

void setLedColour(int colour)
{
    switch (colour)
    {
    case RED:
        digitalWrite(RED_LED, HIGH);
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(BLUE_LED, LOW);
        break;

    case BLUE:
        digitalWrite(RED_LED, LOW);
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(BLUE_LED, HIGH);
        break;

    case GREEN:
        digitalWrite(RED_LED, LOW);
        digitalWrite(GREEN_LED, HIGH);
        digitalWrite(BLUE_LED, LOW);
        break;

    case OFF:
        digitalWrite(RED_LED, LOW);
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(BLUE_LED, LOW);
        break;
    }
}
}