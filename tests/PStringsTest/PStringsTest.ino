#line 2 "PStringsTest.ino"

#include <AUnit.h>
#include <AceCommon.h>

using namespace aunit;
using namespace ace_common;

// --------------------------------------------------------------------------
// strcmp_PP()
// --------------------------------------------------------------------------

test(strcmp_PP, nullptr) {
  assertEqual(strcmp_PP(nullptr, nullptr), 0);
  assertMore(strcmp_PP("", nullptr), 0);
  assertLess(strcmp_PP(nullptr, ""), 0);
}

test(strcmp_PP, not_null) {
  assertEqual(strcmp_PP("", ""), 0);
  assertEqual(strcmp_PP("a", "a"), 0);
  assertMore(strcmp_PP("ab", "a"), 0);
  assertLess(strcmp_PP("a", "ab"), 0);
}

// --------------------------------------------------------------------------
// strchr_P() and strrchr_P() are missing on ESP8266 and ESP32.
// --------------------------------------------------------------------------

#if defined(ESP8266) || defined(ESP32)

const char STRING[] PROGMEM = "abcd abcd";

test(strchr_P) {
  const char* s = STRING;
  const char* p = strchr_P(s, 'b');
  assertEqual(1, p - s);
}

test(strchr_P, notfound) {
  const char* s = STRING;
  const char* p = strchr_P(s, 'e');
  assertEqual(p, nullptr);
}

test (strrchr_P) {
  const char* s = STRING;
  const char* p = strrchr_P(s, 'b');
  assertEqual(6, p - s);
}

test (strrchr_P, notfound) {
  const char* s = STRING;
  const char* p = strrchr_P(s, 'e');
  assertEqual(p, nullptr);
}

#endif

// --------------------------------------------------------------------------

void setup() {
#if ! defined(UNIX_HOST_DUINO)
  delay(1000); // wait to prevent garbage on SERIAL_PORT_MONITOR
#endif

  SERIAL_PORT_MONITOR.begin(115200);
  while(!SERIAL_PORT_MONITOR); // Arduino Leonardo/Micro only
}

void loop() {
  TestRunner::run();
}
