/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "BatteryIndication.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

BatteryIndication::BatteryIndication() {
  m_BatteryInd           = false;
  m_BatteryIndIsSet      = false;
  m_ReplaceableInd       = false;
  m_ReplaceableIndIsSet  = false;
  m_RechargeableInd      = false;
  m_RechargeableIndIsSet = false;
}

void BatteryIndication::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool BatteryIndication::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool BatteryIndication::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "BatteryIndication" : pathPrefix;

  return success;
}

bool BatteryIndication::operator==(const BatteryIndication& rhs) const {
  return

      ((!batteryIndIsSet() && !rhs.batteryIndIsSet()) ||
       (batteryIndIsSet() && rhs.batteryIndIsSet() &&
        isBatteryInd() == rhs.isBatteryInd())) &&

      ((!replaceableIndIsSet() && !rhs.replaceableIndIsSet()) ||
       (replaceableIndIsSet() && rhs.replaceableIndIsSet() &&
        isReplaceableInd() == rhs.isReplaceableInd())) &&

      ((!rechargeableIndIsSet() && !rhs.rechargeableIndIsSet()) ||
       (rechargeableIndIsSet() && rhs.rechargeableIndIsSet() &&
        isRechargeableInd() == rhs.isRechargeableInd()))

          ;
}

bool BatteryIndication::operator!=(const BatteryIndication& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const BatteryIndication& o) {
  j = nlohmann::json();
  if (o.batteryIndIsSet()) j["batteryInd"] = o.m_BatteryInd;
  if (o.replaceableIndIsSet()) j["replaceableInd"] = o.m_ReplaceableInd;
  if (o.rechargeableIndIsSet()) j["rechargeableInd"] = o.m_RechargeableInd;
}

void from_json(const nlohmann::json& j, BatteryIndication& o) {
  if (j.find("batteryInd") != j.end()) {
    j.at("batteryInd").get_to(o.m_BatteryInd);
    o.m_BatteryIndIsSet = true;
  }
  if (j.find("replaceableInd") != j.end()) {
    j.at("replaceableInd").get_to(o.m_ReplaceableInd);
    o.m_ReplaceableIndIsSet = true;
  }
  if (j.find("rechargeableInd") != j.end()) {
    j.at("rechargeableInd").get_to(o.m_RechargeableInd);
    o.m_RechargeableIndIsSet = true;
  }
}

bool BatteryIndication::isBatteryInd() const {
  return m_BatteryInd;
}
void BatteryIndication::setBatteryInd(bool const value) {
  m_BatteryInd      = value;
  m_BatteryIndIsSet = true;
}
bool BatteryIndication::batteryIndIsSet() const {
  return m_BatteryIndIsSet;
}
void BatteryIndication::unsetBatteryInd() {
  m_BatteryIndIsSet = false;
}
bool BatteryIndication::isReplaceableInd() const {
  return m_ReplaceableInd;
}
void BatteryIndication::setReplaceableInd(bool const value) {
  m_ReplaceableInd      = value;
  m_ReplaceableIndIsSet = true;
}
bool BatteryIndication::replaceableIndIsSet() const {
  return m_ReplaceableIndIsSet;
}
void BatteryIndication::unsetReplaceableInd() {
  m_ReplaceableIndIsSet = false;
}
bool BatteryIndication::isRechargeableInd() const {
  return m_RechargeableInd;
}
void BatteryIndication::setRechargeableInd(bool const value) {
  m_RechargeableInd      = value;
  m_RechargeableIndIsSet = true;
}
bool BatteryIndication::rechargeableIndIsSet() const {
  return m_RechargeableIndIsSet;
}
void BatteryIndication::unsetRechargeableInd() {
  m_RechargeableIndIsSet = false;
}

}  // namespace oai::model::common
