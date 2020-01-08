#pragma once

// Pin assignments for a 4-wire LED for status indication
// #define RED_LED A1 //
// #define GREEN_LED A2
// #define BLUE_LED A3

// #define OFF (0)
// #define RED (1)
// #define BLUE (2)
// #define GREEN (3)

namespace utils
{
void printBanner(const char *firmware_name,
                 const char *firmware_version,
                 const char *firmware_slug,
                 const char *json_protocol_version,
                 const char *mcu,
                 const char *firmware_os,
                 const char *deviceID)
{
    Serial.println();
    Serial.println("======================================================================");
    Serial.print("# ");
    Serial.print(firmware_name);
    Serial.print(" V");
    Serial.println(firmware_version);
    Serial.println("----------------------------------------------------------------------");

    Serial.print("Firmware  : ");
    Serial.println(firmware_slug);

    Serial.print("Protocol  : ");
    Serial.println(json_protocol_version);

    Serial.print("MCU       : ");
    Serial.println(mcu);

    Serial.print("OS        : ");
    Serial.println(firmware_os);

    Serial.print("Device ID : ");
    Serial.println(deviceID);
    Serial.println("======================================================================");
    Serial.println();
}

// void setLedColour(int colour)
// {
//     switch (colour)
//     {
//     case RED:
//         digitalWrite(RED_LED, HIGH);
//         digitalWrite(GREEN_LED, LOW);
//         digitalWrite(BLUE_LED, LOW);
//         break;

//     case BLUE:
//         digitalWrite(RED_LED, LOW);
//         digitalWrite(GREEN_LED, LOW);
//         digitalWrite(BLUE_LED, HIGH);
//         break;

//     case GREEN:
//         digitalWrite(RED_LED, LOW);
//         digitalWrite(GREEN_LED, HIGH);
//         digitalWrite(BLUE_LED, LOW);
//         break;

//     case OFF:
//         digitalWrite(RED_LED, LOW);
//         digitalWrite(GREEN_LED, LOW);
//         digitalWrite(BLUE_LED, LOW);
//         break;
//     }
// }
}