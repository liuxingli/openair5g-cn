/**
* AMF MT Service
* AMF Mobile Termination Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* EnableUEReachabilityApiImpl.h
*
* 
*/

#ifndef ENABLE_UE_REACHABILITY_API_IMPL_H_
#define ENABLE_UE_REACHABILITY_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <EnableUEReachabilityApi.h>

#include <pistache/optional.h>

#include "EnableUeReachabilityReqData.h"
#include "EnableUeReachabilityRspData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class EnableUEReachabilityApiImpl : public org::openapitools::server::api::EnableUEReachabilityApi {
public:
    EnableUEReachabilityApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~EnableUEReachabilityApiImpl() {}

    void enable_ue_reachability(const std::string &ueContextId, const EnableUeReachabilityReqData &enableUeReachabilityReqData, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif