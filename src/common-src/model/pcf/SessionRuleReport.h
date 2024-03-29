/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SessionRuleReport.h
 *
 *
 */

#ifndef SessionRuleReport_H_
#define SessionRuleReport_H_

#include "RuleStatus.h"
#include "PolicyDecisionFailureCode.h"
#include <string>
#include "SessionRuleFailureCode.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
///
/// </summary>
class SessionRuleReport {
 public:
  SessionRuleReport();
  virtual ~SessionRuleReport() = default;

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

  bool operator==(const SessionRuleReport& rhs) const;
  bool operator!=(const SessionRuleReport& rhs) const;

  /////////////////////////////////////////////
  /// SessionRuleReport members

  /// <summary>
  /// Contains the identifier of the affected session rule(s).
  /// </summary>
  std::vector<std::string> getRuleIds() const;
  void setRuleIds(std::vector<std::string> const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::pcf::RuleStatus getRuleStatus() const;
  void setRuleStatus(oai::model::pcf::RuleStatus const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::pcf::SessionRuleFailureCode getSessRuleFailureCode() const;
  void setSessRuleFailureCode(
      oai::model::pcf::SessionRuleFailureCode const& value);
  bool sessRuleFailureCodeIsSet() const;
  void unsetSessRuleFailureCode();
  /// <summary>
  /// Contains the type(s) of failed policy decision and/or condition data.
  /// </summary>
  std::vector<oai::model::pcf::PolicyDecisionFailureCode>
  getPolicyDecFailureReports() const;
  void setPolicyDecFailureReports(
      std::vector<oai::model::pcf::PolicyDecisionFailureCode> const& value);
  bool policyDecFailureReportsIsSet() const;
  void unsetPolicyDecFailureReports();

  friend void to_json(nlohmann::json& j, const SessionRuleReport& o);
  friend void from_json(const nlohmann::json& j, SessionRuleReport& o);

 protected:
  std::vector<std::string> m_RuleIds;

  oai::model::pcf::RuleStatus m_RuleStatus;

  oai::model::pcf::SessionRuleFailureCode m_SessRuleFailureCode;
  bool m_SessRuleFailureCodeIsSet;
  std::vector<oai::model::pcf::PolicyDecisionFailureCode>
      m_PolicyDecFailureReports;
  bool m_PolicyDecFailureReportsIsSet;
};

}  // namespace oai::model::pcf

#endif /* SessionRuleReport_H_ */
