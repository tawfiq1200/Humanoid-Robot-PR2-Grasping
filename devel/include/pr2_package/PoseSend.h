// Generated by gencpp from file pr2_package/PoseSend.msg
// DO NOT EDIT!


#ifndef PR2_PACKAGE_MESSAGE_POSESEND_H
#define PR2_PACKAGE_MESSAGE_POSESEND_H

#include <ros/service_traits.h>


#include <pr2_package/PoseSendRequest.h>
#include <pr2_package/PoseSendResponse.h>


namespace pr2_package
{

struct PoseSend
{

typedef PoseSendRequest Request;
typedef PoseSendResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PoseSend
} // namespace pr2_package


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pr2_package::PoseSend > {
  static const char* value()
  {
    return "13b6acafcbb10a69d84fefe81c5723a8";
  }

  static const char* value(const ::pr2_package::PoseSend&) { return value(); }
};

template<>
struct DataType< ::pr2_package::PoseSend > {
  static const char* value()
  {
    return "pr2_package/PoseSend";
  }

  static const char* value(const ::pr2_package::PoseSend&) { return value(); }
};


// service_traits::MD5Sum< ::pr2_package::PoseSendRequest> should match 
// service_traits::MD5Sum< ::pr2_package::PoseSend > 
template<>
struct MD5Sum< ::pr2_package::PoseSendRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pr2_package::PoseSend >::value();
  }
  static const char* value(const ::pr2_package::PoseSendRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pr2_package::PoseSendRequest> should match 
// service_traits::DataType< ::pr2_package::PoseSend > 
template<>
struct DataType< ::pr2_package::PoseSendRequest>
{
  static const char* value()
  {
    return DataType< ::pr2_package::PoseSend >::value();
  }
  static const char* value(const ::pr2_package::PoseSendRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pr2_package::PoseSendResponse> should match 
// service_traits::MD5Sum< ::pr2_package::PoseSend > 
template<>
struct MD5Sum< ::pr2_package::PoseSendResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pr2_package::PoseSend >::value();
  }
  static const char* value(const ::pr2_package::PoseSendResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pr2_package::PoseSendResponse> should match 
// service_traits::DataType< ::pr2_package::PoseSend > 
template<>
struct DataType< ::pr2_package::PoseSendResponse>
{
  static const char* value()
  {
    return DataType< ::pr2_package::PoseSend >::value();
  }
  static const char* value(const ::pr2_package::PoseSendResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PR2_PACKAGE_MESSAGE_POSESEND_H
