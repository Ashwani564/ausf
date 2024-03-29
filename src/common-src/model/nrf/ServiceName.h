/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServiceName.h
 *
 *
 */

#ifndef ServiceName_H_
#define ServiceName_H_

#include <nlohmann/json.hpp>

namespace oai::model::nrf {

/// <summary>
///
/// </summary>
class ServiceName {
 public:
  ServiceName();
  virtual ~ServiceName();

  void validate();

  /////////////////////////////////////////////
  /// ServiceName members

  friend void to_json(nlohmann::json& j, const ServiceName& o);
  friend void from_json(const nlohmann::json& j, ServiceName& o);

 protected:
};

}  // namespace oai::model::nrf

#endif /* ServiceName_H_ */
