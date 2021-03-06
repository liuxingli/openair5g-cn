/**
* AMF Communicaiton Service
* AMF Communication Service
*
* OpenAPI spec version: 1.R15.0.0
*
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "AMFStatusChangeUnSubscribeApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

AMFStatusChangeUnSubscribeApiImpl::AMFStatusChangeUnSubscribeApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : AMFStatusChangeUnSubscribeApi(rtr)
    { }

void AMFStatusChangeUnSubscribeApiImpl::a_mf_status_change_un_subscribe(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic AMFStatusChangeUnsubscribeApiImpl.\n");
}

}
}
}
}

