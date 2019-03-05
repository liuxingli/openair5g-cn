/**
* Namf_EventExposure Service
* AMF Event Exposure Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "NrLocation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NrLocation::NrLocation()
{
    m_AgeOfLocationInformation = 0;
    m_AgeOfLocationInformationIsSet = false;
    m_UeLocationTimestamp = "";
    m_UeLocationTimestampIsSet = false;
    m_GeographicalInformation = "";
    m_GeographicalInformationIsSet = false;
    m_GeodeticInformation = "";
    m_GeodeticInformationIsSet = false;
    m_GlobalGnbIdIsSet = false;
    
}

NrLocation::~NrLocation()
{
}

void NrLocation::validate()
{
    // TODO: implement validation
}

nlohmann::json NrLocation::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["tai"] = ModelBase::toJson(m_Tai);
    val["ncgi"] = ModelBase::toJson(m_Ncgi);
    if(m_AgeOfLocationInformationIsSet)
    {
        val["ageOfLocationInformation"] = m_AgeOfLocationInformation;
    }
    if(m_UeLocationTimestampIsSet)
    {
        val["ueLocationTimestamp"] = ModelBase::toJson(m_UeLocationTimestamp);
    }
    if(m_GeographicalInformationIsSet)
    {
        val["geographicalInformation"] = ModelBase::toJson(m_GeographicalInformation);
    }
    if(m_GeodeticInformationIsSet)
    {
        val["geodeticInformation"] = ModelBase::toJson(m_GeodeticInformation);
    }
    if(m_GlobalGnbIdIsSet)
    {
        val["globalGnbId"] = ModelBase::toJson(m_GlobalGnbId);
    }
    

    return val;
}

void NrLocation::fromJson(const nlohmann::json& val)
{
    if(val.find("ageOfLocationInformation") != val.end())
    {
        setAgeOfLocationInformation(val.at("ageOfLocationInformation"));
    }
    if(val.find("ueLocationTimestamp") != val.end())
    {
        setUeLocationTimestamp(val.at("ueLocationTimestamp"));
        
    }
    if(val.find("geographicalInformation") != val.end())
    {
        setGeographicalInformation(val.at("geographicalInformation"));
    }
    if(val.find("geodeticInformation") != val.end())
    {
        setGeodeticInformation(val.at("geodeticInformation"));
    }
    if(val.find("globalGnbId") != val.end())
    {
        if(!val["globalGnbId"].is_null())
        {
            GlobalRanNodeId newItem;
            newItem.fromJson(val["globalGnbId"]);
            setGlobalGnbId( newItem );
        }
        
    }
    
}


Tai NrLocation::getTai() const
{
    return m_Tai;
}
void NrLocation::setTai(Tai const& value)
{
    m_Tai = value;
    
}
Ncgi NrLocation::getNcgi() const
{
    return m_Ncgi;
}
void NrLocation::setNcgi(Ncgi const& value)
{
    m_Ncgi = value;
    
}
int32_t NrLocation::getAgeOfLocationInformation() const
{
    return m_AgeOfLocationInformation;
}
void NrLocation::setAgeOfLocationInformation(int32_t const value)
{
    m_AgeOfLocationInformation = value;
    m_AgeOfLocationInformationIsSet = true;
}
bool NrLocation::ageOfLocationInformationIsSet() const
{
    return m_AgeOfLocationInformationIsSet;
}
void NrLocation::unsetAgeOfLocationInformation()
{
    m_AgeOfLocationInformationIsSet = false;
}
std::string NrLocation::getUeLocationTimestamp() const
{
    return m_UeLocationTimestamp;
}
void NrLocation::setUeLocationTimestamp(std::string const& value)
{
    m_UeLocationTimestamp = value;
    m_UeLocationTimestampIsSet = true;
}
bool NrLocation::ueLocationTimestampIsSet() const
{
    return m_UeLocationTimestampIsSet;
}
void NrLocation::unsetUeLocationTimestamp()
{
    m_UeLocationTimestampIsSet = false;
}
std::string NrLocation::getGeographicalInformation() const
{
    return m_GeographicalInformation;
}
void NrLocation::setGeographicalInformation(std::string const& value)
{
    m_GeographicalInformation = value;
    m_GeographicalInformationIsSet = true;
}
bool NrLocation::geographicalInformationIsSet() const
{
    return m_GeographicalInformationIsSet;
}
void NrLocation::unsetGeographicalInformation()
{
    m_GeographicalInformationIsSet = false;
}
std::string NrLocation::getGeodeticInformation() const
{
    return m_GeodeticInformation;
}
void NrLocation::setGeodeticInformation(std::string const& value)
{
    m_GeodeticInformation = value;
    m_GeodeticInformationIsSet = true;
}
bool NrLocation::geodeticInformationIsSet() const
{
    return m_GeodeticInformationIsSet;
}
void NrLocation::unsetGeodeticInformation()
{
    m_GeodeticInformationIsSet = false;
}
GlobalRanNodeId NrLocation::getGlobalGnbId() const
{
    return m_GlobalGnbId;
}
void NrLocation::setGlobalGnbId(GlobalRanNodeId const& value)
{
    m_GlobalGnbId = value;
    m_GlobalGnbIdIsSet = true;
}
bool NrLocation::globalGnbIdIsSet() const
{
    return m_GlobalGnbIdIsSet;
}
void NrLocation::unsetGlobalGnbId()
{
    m_GlobalGnbIdIsSet = false;
}

}
}
}
}
