// Generated by gencpp from file cob_phidgets/SetDataRate.msg
// DO NOT EDIT!


#ifndef COB_PHIDGETS_MESSAGE_SETDATARATE_H
#define COB_PHIDGETS_MESSAGE_SETDATARATE_H

#include <ros/service_traits.h>


#include <cob_phidgets/SetDataRateRequest.h>
#include <cob_phidgets/SetDataRateResponse.h>


namespace cob_phidgets
{

struct SetDataRate
{

typedef SetDataRateRequest Request;
typedef SetDataRateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetDataRate
} // namespace cob_phidgets


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_phidgets::SetDataRate > {
  static const char* value()
  {
    return "2fe4d4dafc6b478c7e506a02543a3197";
  }

  static const char* value(const ::cob_phidgets::SetDataRate&) { return value(); }
};

template<>
struct DataType< ::cob_phidgets::SetDataRate > {
  static const char* value()
  {
    return "cob_phidgets/SetDataRate";
  }

  static const char* value(const ::cob_phidgets::SetDataRate&) { return value(); }
};


// service_traits::MD5Sum< ::cob_phidgets::SetDataRateRequest> should match 
// service_traits::MD5Sum< ::cob_phidgets::SetDataRate > 
template<>
struct MD5Sum< ::cob_phidgets::SetDataRateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_phidgets::SetDataRate >::value();
  }
  static const char* value(const ::cob_phidgets::SetDataRateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_phidgets::SetDataRateRequest> should match 
// service_traits::DataType< ::cob_phidgets::SetDataRate > 
template<>
struct DataType< ::cob_phidgets::SetDataRateRequest>
{
  static const char* value()
  {
    return DataType< ::cob_phidgets::SetDataRate >::value();
  }
  static const char* value(const ::cob_phidgets::SetDataRateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_phidgets::SetDataRateResponse> should match 
// service_traits::MD5Sum< ::cob_phidgets::SetDataRate > 
template<>
struct MD5Sum< ::cob_phidgets::SetDataRateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_phidgets::SetDataRate >::value();
  }
  static const char* value(const ::cob_phidgets::SetDataRateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_phidgets::SetDataRateResponse> should match 
// service_traits::DataType< ::cob_phidgets::SetDataRate > 
template<>
struct DataType< ::cob_phidgets::SetDataRateResponse>
{
  static const char* value()
  {
    return DataType< ::cob_phidgets::SetDataRate >::value();
  }
  static const char* value(const ::cob_phidgets::SetDataRateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_PHIDGETS_MESSAGE_SETDATARATE_H
