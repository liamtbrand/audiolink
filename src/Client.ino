
/*
 * Date: 30/03/2018
 * Author: Liam T. Brand
 * Description:
 *
 * This software is designed to run on the ESP8266.
 * NodeMCU 1.0 (ESP-12E Module)
 *
 */

#include <ESP8266WiFi.h>
#include "Arduino.h"
#include "Settings.h"

void setup( void ) {

  Serial.begin( SERIAL_BAUDRATE );
  Serial.println();
  randomSeed( analogRead(0) );

  // Set mode to station mode.
  WiFi.mode( WIFI_STA );

}

void loop( void ) {

  Serial.println( "Attempting to connect to '" AP_SSID_PREFIX PAIR_UID "'." );

  // Begin trying to connect to the access point.
  WiFi.begin( AP_SSID_PREFIX PAIR_UID, PAIR_PASSWORD );

  while ( WiFi.status() != WL_CONNECTED ) {
    delay( 1000 );
    Serial.print( "." );
  }

  Serial.println( "" );
  Serial.println( "WiFi connected." );
  Serial.println( "My IP address: " );
  Serial.println( WiFi.localIP() );

  // Clear AD buffer?

  while ( WiFi.status() == WL_CONNECTED ) {

    // Collect bits from AD buffer.

    // Send bits from AD buffer.

  }

  Serial.println( "Connection dropped." );

}
