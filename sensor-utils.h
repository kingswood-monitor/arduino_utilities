#pragma once

namespace utils
{
void printBanner(const char *firmware_name,
                 const char *firmware_slug,
                 const char *firmware_version,
                 const char *deviceID)
{
    Serial.println();
    Serial.println("======================================================================");
    Serial.print("# ");
    Serial.println(firmware_name);
    Serial.println("----------------------------------------------------------------------");

    Serial.print("Firmware  : ");
    Serial.print(firmware_slug);
    Serial.print(" V");
    Serial.println(firmware_version);

    Serial.print("Device ID : ");
    Serial.println(deviceID);
    Serial.println("======================================================================");
    Serial.println();
}

}