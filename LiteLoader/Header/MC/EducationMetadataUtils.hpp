// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/EducationMetadataUtilsAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace EducationMetadataUtils {
#include "Extra/EducationMetadataUtilsAPI.hpp"

MCAPI struct EducationMetadata
parse(std::string const &, std::vector<std::string> &, class PackReport &);
MCAPI void parseEducationMetadataContent(class Json::Value const &,
                                         std::vector<std::string> &,
                                         struct EducationMetadata &,
                                         class PackReport &);

} // namespace EducationMetadataUtils