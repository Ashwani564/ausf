/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service.   © 2022, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RecordMeta.h
 *
 * Meta data of a Record
 */

#ifndef RecordMeta_H_
#define RecordMeta_H_

#include <string>
#include <map>
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::model::udsf {

/// <summary>
/// Meta data of a Record
/// </summary>
class RecordMeta {
 public:
  RecordMeta();
  virtual ~RecordMeta() = default;

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

  bool operator==(const RecordMeta& rhs) const;
  bool operator!=(const RecordMeta& rhs) const;

  /////////////////////////////////////////////
  /// RecordMeta members

  /// <summary>
  /// string with format &#39;date-time&#39; as defined in OpenAPI.
  /// </summary>
  std::string getTtl() const;
  void setTtl(std::string const& value);
  bool ttlIsSet() const;
  void unsetTtl();
  /// <summary>
  /// String providing an URI formatted according to RFC 3986.
  /// </summary>
  std::string getCallbackReference() const;
  void setCallbackReference(std::string const& value);
  bool callbackReferenceIsSet() const;
  void unsetCallbackReference();
  /// <summary>
  /// A dictionary of {\&quot;tagName\&quot;: [ \&quot;tagValue\&quot;, ...] }.
  /// A tag name can be used to retrieve a Record. The tagValue are unique.
  /// </summary>
  std::map<std::string, std::vector<std::string>> getTags() const;
  void setTags(std::map<std::string, std::vector<std::string>> const& value);
  bool tagsIsSet() const;
  void unsetTags();

  friend void to_json(nlohmann::json& j, const RecordMeta& o);
  friend void from_json(const nlohmann::json& j, RecordMeta& o);

 protected:
  std::string m_Ttl;
  bool m_TtlIsSet;
  std::string m_CallbackReference;
  bool m_CallbackReferenceIsSet;
  std::map<std::string, std::vector<std::string>> m_Tags;
  bool m_TagsIsSet;
};

}  // namespace oai::model::udsf

#endif /* RecordMeta_H_ */