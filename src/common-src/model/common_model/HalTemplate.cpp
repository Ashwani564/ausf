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

#include "HalTemplate.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

HalTemplate::HalTemplate() {
  m_Title            = "";
  m_TitleIsSet       = false;
  m_ContentType      = "";
  m_ContentTypeIsSet = false;
  m_PropertiesIsSet  = false;
}

void HalTemplate::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool HalTemplate::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool HalTemplate::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "HalTemplate" : pathPrefix;

  if (propertiesIsSet()) {
    const std::vector<oai::model::common::Property>& value = m_Properties;
    const std::string currentValuePath = _pathPrefix + ".properties";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::Property& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".properties") && success;

        i++;
      }
    }
  }

  return success;
}

bool HalTemplate::operator==(const HalTemplate& rhs) const {
  return

      ((!titleIsSet() && !rhs.titleIsSet()) ||
       (titleIsSet() && rhs.titleIsSet() && getTitle() == rhs.getTitle())) &&

      (getMethod() == rhs.getMethod()) &&

      ((!contentTypeIsSet() && !rhs.contentTypeIsSet()) ||
       (contentTypeIsSet() && rhs.contentTypeIsSet() &&
        getContentType() == rhs.getContentType())) &&

      ((!propertiesIsSet() && !rhs.propertiesIsSet()) ||
       (propertiesIsSet() && rhs.propertiesIsSet() &&
        getProperties() == rhs.getProperties()))

          ;
}

bool HalTemplate::operator!=(const HalTemplate& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const HalTemplate& o) {
  j = nlohmann::json();
  if (o.titleIsSet()) j["title"] = o.m_Title;
  j["method"] = o.m_Method;
  if (o.contentTypeIsSet()) j["contentType"] = o.m_ContentType;
  if (o.propertiesIsSet() || !o.m_Properties.empty())
    j["properties"] = o.m_Properties;
}

void from_json(const nlohmann::json& j, HalTemplate& o) {
  if (j.find("title") != j.end()) {
    j.at("title").get_to(o.m_Title);
    o.m_TitleIsSet = true;
  }
  j.at("method").get_to(o.m_Method);
  if (j.find("contentType") != j.end()) {
    j.at("contentType").get_to(o.m_ContentType);
    o.m_ContentTypeIsSet = true;
  }
  if (j.find("properties") != j.end()) {
    j.at("properties").get_to(o.m_Properties);
    o.m_PropertiesIsSet = true;
  }
}

std::string HalTemplate::getTitle() const {
  return m_Title;
}
void HalTemplate::setTitle(std::string const& value) {
  m_Title      = value;
  m_TitleIsSet = true;
}
bool HalTemplate::titleIsSet() const {
  return m_TitleIsSet;
}
void HalTemplate::unsetTitle() {
  m_TitleIsSet = false;
}
oai::model::common::HttpMethod HalTemplate::getMethod() const {
  return m_Method;
}
void HalTemplate::setMethod(oai::model::common::HttpMethod const& value) {
  m_Method = value;
}
std::string HalTemplate::getContentType() const {
  return m_ContentType;
}
void HalTemplate::setContentType(std::string const& value) {
  m_ContentType      = value;
  m_ContentTypeIsSet = true;
}
bool HalTemplate::contentTypeIsSet() const {
  return m_ContentTypeIsSet;
}
void HalTemplate::unsetContentType() {
  m_ContentTypeIsSet = false;
}
std::vector<oai::model::common::Property> HalTemplate::getProperties() const {
  return m_Properties;
}
void HalTemplate::setProperties(
    std::vector<oai::model::common::Property> const& value) {
  m_Properties      = value;
  m_PropertiesIsSet = true;
}
bool HalTemplate::propertiesIsSet() const {
  return m_PropertiesIsSet;
}
void HalTemplate::unsetProperties() {
  m_PropertiesIsSet = false;
}

}  // namespace oai::model::common
