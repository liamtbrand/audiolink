/*
  PairConfig.h - Config used to create a pair.
  Created by Liam T. Brand, March 30, 2018.
*/
#ifndef PairConfig_h
#define PairConfig_h

// ---- PAIR CONFIGURATION ---- //

/**
 * You need to configure each pair of ESP8266 devices you load the software on.
 * The way to do this is to simply change the paid_id for each new pair.
 */

/**
 * You should change this for each new pair you create.
 * It can be any string to uniquely identify the audiolink.
 * CHANGE
 */
#define PAIR_UID "default"

/**
 * You should change this for each new pair you create.
 * Make it random and complicated. Nobody needs to access this.
 * CHANGE
 */
#define PAIR_PASSWORD "password"

/**
 * This is the AP SSID prefix of the pair.
 * OPTIONAL CHANGE
 */
#define AP_SSID_PREFIX "audiolink_"

#endif
