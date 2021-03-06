// This file is auto-generated from anomaly.idl(1.0.6-6-g2cf96c3) with jenerator version 0.9.4-42-g70f7539/develop
// *** DO NOT EDIT ***

#ifndef JUBATUS_SERVER_SERVER_ANOMALY_TYPES_HPP_
#define JUBATUS_SERVER_SERVER_ANOMALY_TYPES_HPP_

#include <stdint.h>

#include <map>
#include <string>
#include <vector>
#include <utility>

#include "jubatus/core/fv_converter/datum.hpp"
#include <msgpack.hpp>

namespace jubatus {

struct id_with_score {
 public:
  MSGPACK_DEFINE(id, score);
  std::string id;
  double score;
  id_with_score() {
  }
  id_with_score(const std::string& id, double score)
    : id(id), score(score) {
  }
};

}  // namespace jubatus

#endif  // JUBATUS_SERVER_SERVER_ANOMALY_TYPES_HPP_
