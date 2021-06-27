#define LOG_LEVEL LOG_LEVEL_TRACE

#include <Arduino.h>
#include <gtest/gtest.h>
#include <logging.h>

TEST(logging, test_logging_works_in_embedded_env) {
  Serial.println();

  TRACE("test");
  TRACEF("test : %d", 2);
  DEBUG("test");
  DEBUGF("test : %d", 2);
  INFO("test");
  INFOF("test : %d", 2);
  NOTICE("test");
  NOTICEF("test : %d", 2);
  WARNING("test");
  WARNINGF("test : %d", 2);
  ERROR("test");
  ERRORF("test : %d", 2);
  CRITICAL("test");
  CRITICALF("test : %d", 2);
  ALERT("test");
  ALERTF("test : %d", 2);
  EMERGENCY("test");
  EMERGENCYF("test : %d", 2);
}