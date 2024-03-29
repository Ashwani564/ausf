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
 * Dynamic5Qi.h
 *
 *
 */

#ifndef Dynamic5Qi_H_
#define Dynamic5Qi_H_

#include "QosResourceType.h"
#include <string>
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class Dynamic5Qi {
 public:
  Dynamic5Qi();
  virtual ~Dynamic5Qi() = default;

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

  bool operator==(const Dynamic5Qi& rhs) const;
  bool operator!=(const Dynamic5Qi& rhs) const;

  /////////////////////////////////////////////
  /// Dynamic5Qi members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::QosResourceType getResourceType() const;
  void setResourceType(oai::model::common::QosResourceType const& value);
  /// <summary>
  ///
  /// </summary>
  int32_t getPriorityLevel() const;
  void setPriorityLevel(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getPacketDelayBudget() const;
  void setPacketDelayBudget(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::string getPacketErrRate() const;
  void setPacketErrRate(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  int32_t getAverWindow() const;
  void setAverWindow(int32_t const value);
  bool averWindowIsSet() const;
  void unsetAverWindow();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaxDataBurstVol() const;
  void setMaxDataBurstVol(int32_t const value);
  bool maxDataBurstVolIsSet() const;
  void unsetMaxDataBurstVol();
  /// <summary>
  ///
  /// </summary>
  int32_t getExtMaxDataBurstVol() const;
  void setExtMaxDataBurstVol(int32_t const value);
  bool extMaxDataBurstVolIsSet() const;
  void unsetExtMaxDataBurstVol();
  /// <summary>
  ///
  /// </summary>
  int32_t getExtPacketDelBudget() const;
  void setExtPacketDelBudget(int32_t const value);
  bool extPacketDelBudgetIsSet() const;
  void unsetExtPacketDelBudget();
  /// <summary>
  ///
  /// </summary>
  int32_t getCnPacketDelayBudgetDl() const;
  void setCnPacketDelayBudgetDl(int32_t const value);
  bool cnPacketDelayBudgetDlIsSet() const;
  void unsetCnPacketDelayBudgetDl();
  /// <summary>
  ///
  /// </summary>
  int32_t getCnPacketDelayBudgetUl() const;
  void setCnPacketDelayBudgetUl(int32_t const value);
  bool cnPacketDelayBudgetUlIsSet() const;
  void unsetCnPacketDelayBudgetUl();

  friend void to_json(nlohmann::json& j, const Dynamic5Qi& o);
  friend void from_json(const nlohmann::json& j, Dynamic5Qi& o);

 protected:
  oai::model::common::QosResourceType m_ResourceType;

  int32_t m_PriorityLevel;

  int32_t m_PacketDelayBudget;

  std::string m_PacketErrRate;

  int32_t m_AverWindow;
  bool m_AverWindowIsSet;
  int32_t m_MaxDataBurstVol;
  bool m_MaxDataBurstVolIsSet;
  int32_t m_ExtMaxDataBurstVol;
  bool m_ExtMaxDataBurstVolIsSet;
  int32_t m_ExtPacketDelBudget;
  bool m_ExtPacketDelBudgetIsSet;
  int32_t m_CnPacketDelayBudgetDl;
  bool m_CnPacketDelayBudgetDlIsSet;
  int32_t m_CnPacketDelayBudgetUl;
  bool m_CnPacketDelayBudgetUlIsSet;
};

}  // namespace oai::model::common

#endif /* Dynamic5Qi_H_ */
