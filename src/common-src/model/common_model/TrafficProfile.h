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
 * TrafficProfile.h
 *
 * Possible values are - SINGLE_TRANS_UL: Uplink single packet transmission. -
 * SINGLE_TRANS_DL: Downlink single packet transmission. - DUAL_TRANS_UL_FIRST:
 * Dual packet transmission, firstly uplink packet transmission with subsequent
 * downlink packet transmission. - DUAL_TRANS_DL_FIRST: Dual packet
 * transmission, firstly downlink packet transmission with subsequent uplink
 * packet transmission.
 */

#ifndef TrafficProfile_H_
#define TrafficProfile_H_

#include "TrafficProfile_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
/// Possible values are - SINGLE_TRANS_UL: Uplink single packet transmission. -
/// SINGLE_TRANS_DL: Downlink single packet transmission. - DUAL_TRANS_UL_FIRST:
/// Dual packet transmission, firstly uplink packet transmission with subsequent
/// downlink packet transmission. - DUAL_TRANS_DL_FIRST: Dual packet
/// transmission, firstly downlink packet transmission with subsequent uplink
/// packet transmission.
/// </summary>
class TrafficProfile {
 public:
  TrafficProfile();
  virtual ~TrafficProfile() = default;

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

  bool operator==(const TrafficProfile& rhs) const;
  bool operator!=(const TrafficProfile& rhs) const;

  /////////////////////////////////////////////
  /// TrafficProfile members

  TrafficProfile_anyOf getValue() const;
  void setValue(TrafficProfile_anyOf value);
  TrafficProfile_anyOf::eTrafficProfile_anyOf getEnumValue() const;
  void setEnumValue(TrafficProfile_anyOf::eTrafficProfile_anyOf value);
  friend void to_json(nlohmann::json& j, const TrafficProfile& o);
  friend void from_json(const nlohmann::json& j, TrafficProfile& o);
  friend void to_json(nlohmann::json& j, const TrafficProfile_anyOf& o);
  friend void from_json(const nlohmann::json& j, TrafficProfile_anyOf& o);

 protected:
  TrafficProfile_anyOf m_value;
};

}  // namespace oai::model::common

#endif /* TrafficProfile_H_ */
