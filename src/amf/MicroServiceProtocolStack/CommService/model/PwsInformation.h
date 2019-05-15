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
/*
 * PwsInformation.h
 *
 * 
 */

#ifndef PwsInformation_H_
#define PwsInformation_H_


#include "ModelBase.h"

#include "N2InfoContent.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PwsInformation
    : public ModelBase
{
public:
    PwsInformation();
    virtual ~PwsInformation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PwsInformation members

    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageIdentifier() const;
    void setMessageIdentifier(int32_t const value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getSerialNumber() const;
    void setSerialNumber(int32_t const value);
        /// <summary>
    /// 
    /// </summary>
    N2InfoContent getPwsContainer() const;
    void setPwsContainer(N2InfoContent const& value);
        /// <summary>
    /// 
    /// </summary>
    bool isSendN2Container() const;
    void setSendN2Container(bool const value);
    bool sendN2ContainerIsSet() const;
    void unsetSendN2Container();
    /// <summary>
    /// 
    /// </summary>
    std::string getOmcId() const;
    void setOmcId(std::string const& value);
    bool omcIdIsSet() const;
    void unsetOmcId();

protected:
    int32_t m_MessageIdentifier;

    int32_t m_SerialNumber;

    N2InfoContent m_PwsContainer;

    bool m_SendN2Container;
    bool m_SendN2ContainerIsSet;
    std::string m_OmcId;
    bool m_OmcIdIsSet;
};

}
}
}
}

#endif /* PwsInformation_H_ */