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
/*
 * WirelineArea.h
 *
 *
 */

#ifndef WirelineArea_H_
#define WirelineArea_H_

#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class WirelineArea {
 public:
  WirelineArea();
  virtual ~WirelineArea() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const WirelineArea& rhs) const;
  bool operator!=(const WirelineArea& rhs) const;

  /////////////////////////////////////////////
  /// WirelineArea members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> getGlobalLineIds() const;
  void setGlobalLineIds(std::vector<std::string> const& value);
  bool globalLineIdsIsSet() const;
  void unsetGlobalLineIds();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> getHfcNIds() const;
  void setHfcNIds(std::vector<std::string> const& value);
  bool hfcNIdsIsSet() const;
  void unsetHfcNIds();
  /// <summary>
  ///
  /// </summary>
  std::string getAreaCodeB() const;
  void setAreaCodeB(std::string const& value);
  bool areaCodeBIsSet() const;
  void unsetAreaCodeB();
  /// <summary>
  ///
  /// </summary>
  std::string getAreaCodeC() const;
  void setAreaCodeC(std::string const& value);
  bool areaCodeCIsSet() const;
  void unsetAreaCodeC();

  friend void to_json(nlohmann::json& j, const WirelineArea& o);
  friend void from_json(const nlohmann::json& j, WirelineArea& o);

 protected:
  std::vector<std::string> m_GlobalLineIds;
  bool m_GlobalLineIdsIsSet;
  std::vector<std::string> m_HfcNIds;
  bool m_HfcNIdsIsSet;
  std::string m_AreaCodeB;
  bool m_AreaCodeBIsSet;
  std::string m_AreaCodeC;
  bool m_AreaCodeCIsSet;
};

}  // namespace oai::model::common

#endif /* WirelineArea_H_ */
