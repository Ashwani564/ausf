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

#include "Property.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

Property::Property() {
  m_Name          = "";
  m_Required      = false;
  m_RequiredIsSet = false;
  m_Regex         = "";
  m_RegexIsSet    = false;
  m_Value         = "";
  m_ValueIsSet    = false;
}

void Property::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool Property::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool Property::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "Property" : pathPrefix;

  return success;
}

bool Property::operator==(const Property& rhs) const {
  return

      (getName() == rhs.getName()) &&

      ((!requiredIsSet() && !rhs.requiredIsSet()) ||
       (requiredIsSet() && rhs.requiredIsSet() &&
        isRequired() == rhs.isRequired())) &&

      ((!regexIsSet() && !rhs.regexIsSet()) ||
       (regexIsSet() && rhs.regexIsSet() && getRegex() == rhs.getRegex())) &&

      ((!valueIsSet() && !rhs.valueIsSet()) ||
       (valueIsSet() && rhs.valueIsSet() && getValue() == rhs.getValue()))

          ;
}

bool Property::operator!=(const Property& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Property& o) {
  j         = nlohmann::json();
  j["name"] = o.m_Name;
  if (o.requiredIsSet()) j["required"] = o.m_Required;
  if (o.regexIsSet()) j["regex"] = o.m_Regex;
  if (o.valueIsSet()) j["value"] = o.m_Value;
}

void from_json(const nlohmann::json& j, Property& o) {
  j.at("name").get_to(o.m_Name);
  if (j.find("required") != j.end()) {
    j.at("required").get_to(o.m_Required);
    o.m_RequiredIsSet = true;
  }
  if (j.find("regex") != j.end()) {
    j.at("regex").get_to(o.m_Regex);
    o.m_RegexIsSet = true;
  }
  if (j.find("value") != j.end()) {
    j.at("value").get_to(o.m_Value);
    o.m_ValueIsSet = true;
  }
}

std::string Property::getName() const {
  return m_Name;
}
void Property::setName(std::string const& value) {
  m_Name = value;
}
bool Property::isRequired() const {
  return m_Required;
}
void Property::setRequired(bool const value) {
  m_Required      = value;
  m_RequiredIsSet = true;
}
bool Property::requiredIsSet() const {
  return m_RequiredIsSet;
}
void Property::unsetRequired() {
  m_RequiredIsSet = false;
}
std::string Property::getRegex() const {
  return m_Regex;
}
void Property::setRegex(std::string const& value) {
  m_Regex      = value;
  m_RegexIsSet = true;
}
bool Property::regexIsSet() const {
  return m_RegexIsSet;
}
void Property::unsetRegex() {
  m_RegexIsSet = false;
}
std::string Property::getValue() const {
  return m_Value;
}
void Property::setValue(std::string const& value) {
  m_Value      = value;
  m_ValueIsSet = true;
}
bool Property::valueIsSet() const {
  return m_ValueIsSet;
}
void Property::unsetValue() {
  m_ValueIsSet = false;
}

}  // namespace oai::model::common
