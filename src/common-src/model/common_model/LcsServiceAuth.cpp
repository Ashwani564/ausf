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

#include "LcsServiceAuth.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

LcsServiceAuth::LcsServiceAuth() {}

void LcsServiceAuth::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool LcsServiceAuth::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool LcsServiceAuth::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "LcsServiceAuth" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool LcsServiceAuth::operator==(const LcsServiceAuth& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool LcsServiceAuth::operator!=(const LcsServiceAuth& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const LcsServiceAuth& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, LcsServiceAuth& o) {
  from_json(j, o.m_value);
}

LcsServiceAuth_anyOf LcsServiceAuth::getValue() const {
  return m_value;
}

void LcsServiceAuth::setValue(LcsServiceAuth_anyOf value) {
  m_value = value;
}

LcsServiceAuth_anyOf::eLcsServiceAuth_anyOf LcsServiceAuth::getEnumValue()
    const {
  return m_value.getValue();
}

void LcsServiceAuth::setEnumValue(
    LcsServiceAuth_anyOf::eLcsServiceAuth_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::common
