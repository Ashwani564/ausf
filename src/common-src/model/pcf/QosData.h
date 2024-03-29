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
 * QosData.h
 *
 *
 */

#ifndef QosData_H_
#define QosData_H_

#include <string>
#include "Arp.h"
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
///
/// </summary>
class QosData {
 public:
  QosData();
  virtual ~QosData() = default;

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

  bool operator==(const QosData& rhs) const;
  bool operator!=(const QosData& rhs) const;

  /////////////////////////////////////////////
  /// QosData members

  /// <summary>
  /// Univocally identifies the QoS control policy data within a PDU session.
  /// </summary>
  std::string getQosId() const;
  void setQosId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  int32_t getR5qi() const;
  void setR5qi(int32_t const value);
  bool r5qiIsSet() const;
  void unsetr_5qi();
  /// <summary>
  ///
  /// </summary>
  std::string getMaxbrUl() const;
  void setMaxbrUl(std::string const& value);
  bool maxbrUlIsSet() const;
  void unsetMaxbrUl();
  /// <summary>
  ///
  /// </summary>
  std::string getMaxbrDl() const;
  void setMaxbrDl(std::string const& value);
  bool maxbrDlIsSet() const;
  void unsetMaxbrDl();
  /// <summary>
  ///
  /// </summary>
  std::string getGbrUl() const;
  void setGbrUl(std::string const& value);
  bool gbrUlIsSet() const;
  void unsetGbrUl();
  /// <summary>
  ///
  /// </summary>
  std::string getGbrDl() const;
  void setGbrDl(std::string const& value);
  bool gbrDlIsSet() const;
  void unsetGbrDl();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Arp getArp() const;
  void setArp(oai::model::common::Arp const& value);
  bool arpIsSet() const;
  void unsetArp();
  /// <summary>
  /// Indicates whether notifications are requested from 3GPP NG-RAN when the
  /// GFBR can no longer (or again) be guaranteed for a QoS Flow during the
  /// lifetime of the QoS Flow.
  /// </summary>
  bool isQnc() const;
  void setQnc(bool const value);
  bool qncIsSet() const;
  void unsetQnc();
  /// <summary>
  ///
  /// </summary>
  int32_t getPriorityLevel() const;
  void setPriorityLevel(int32_t const value);
  bool priorityLevelIsSet() const;
  void unsetPriorityLevel();
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
  /// Indicates whether the QoS information is reflective for the corresponding
  /// service data flow.
  /// </summary>
  bool isReflectiveQos() const;
  void setReflectiveQos(bool const value);
  bool reflectiveQosIsSet() const;
  void unsetReflectiveQos();
  /// <summary>
  /// Indicates, by containing the same value, what PCC rules may share resource
  /// in downlink direction.
  /// </summary>
  std::string getSharingKeyDl() const;
  void setSharingKeyDl(std::string const& value);
  bool sharingKeyDlIsSet() const;
  void unsetSharingKeyDl();
  /// <summary>
  /// Indicates, by containing the same value, what PCC rules may share resource
  /// in uplink direction.
  /// </summary>
  std::string getSharingKeyUl() const;
  void setSharingKeyUl(std::string const& value);
  bool sharingKeyUlIsSet() const;
  void unsetSharingKeyUl();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaxPacketLossRateDl() const;
  void setMaxPacketLossRateDl(int32_t const value);
  bool maxPacketLossRateDlIsSet() const;
  void unsetMaxPacketLossRateDl();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaxPacketLossRateUl() const;
  void setMaxPacketLossRateUl(int32_t const value);
  bool maxPacketLossRateUlIsSet() const;
  void unsetMaxPacketLossRateUl();
  /// <summary>
  /// Indicates that the dynamic PCC rule shall always have its binding with the
  /// QoS Flow associated with the default QoS rule
  /// </summary>
  bool isDefQosFlowIndication() const;
  void setDefQosFlowIndication(bool const value);
  bool defQosFlowIndicationIsSet() const;
  void unsetDefQosFlowIndication();
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
  int32_t getPacketDelayBudget() const;
  void setPacketDelayBudget(int32_t const value);
  bool packetDelayBudgetIsSet() const;
  void unsetPacketDelayBudget();
  /// <summary>
  ///
  /// </summary>
  std::string getPacketErrorRate() const;
  void setPacketErrorRate(std::string const& value);
  bool packetErrorRateIsSet() const;
  void unsetPacketErrorRate();

  friend void to_json(nlohmann::json& j, const QosData& o);
  friend void from_json(const nlohmann::json& j, QosData& o);

 protected:
  std::string m_QosId;

  int32_t m_r_5qi;
  bool m_r_5qiIsSet;
  std::string m_MaxbrUl;
  bool m_MaxbrUlIsSet;
  std::string m_MaxbrDl;
  bool m_MaxbrDlIsSet;
  std::string m_GbrUl;
  bool m_GbrUlIsSet;
  std::string m_GbrDl;
  bool m_GbrDlIsSet;
  oai::model::common::Arp m_Arp;
  bool m_ArpIsSet;
  bool m_Qnc;
  bool m_QncIsSet;
  int32_t m_PriorityLevel;
  bool m_PriorityLevelIsSet;
  int32_t m_AverWindow;
  bool m_AverWindowIsSet;
  int32_t m_MaxDataBurstVol;
  bool m_MaxDataBurstVolIsSet;
  bool m_ReflectiveQos;
  bool m_ReflectiveQosIsSet;
  std::string m_SharingKeyDl;
  bool m_SharingKeyDlIsSet;
  std::string m_SharingKeyUl;
  bool m_SharingKeyUlIsSet;
  int32_t m_MaxPacketLossRateDl;
  bool m_MaxPacketLossRateDlIsSet;
  int32_t m_MaxPacketLossRateUl;
  bool m_MaxPacketLossRateUlIsSet;
  bool m_DefQosFlowIndication;
  bool m_DefQosFlowIndicationIsSet;
  int32_t m_ExtMaxDataBurstVol;
  bool m_ExtMaxDataBurstVolIsSet;
  int32_t m_PacketDelayBudget;
  bool m_PacketDelayBudgetIsSet;
  std::string m_PacketErrorRate;
  bool m_PacketErrorRateIsSet;
};

}  // namespace oai::model::pcf

#endif /* QosData_H_ */
