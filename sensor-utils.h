#pragma once

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

}