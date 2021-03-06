// Generated by gencpp from file pr2_package/PoseSendRequest.msg
// DO NOT EDIT!


#ifndef PR2_PACKAGE_MESSAGE_POSESENDREQUEST_H
#define PR2_PACKAGE_MESSAGE_POSESENDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_package
{
template <class ContainerAllocator>
struct PoseSendRequest_
{
  typedef PoseSendRequest_<ContainerAllocator> Type;

  PoseSendRequest_()
    : a(0.0)
    , b(0.0)
    , c(0.0)
    , d(0.0)
    , e(0.0)
    , f(0.0)
    , g(0.0)  {
    }
  PoseSendRequest_(const ContainerAllocator& _alloc)
    : a(0.0)
    , b(0.0)
    , c(0.0)
    , d(0.0)
    , e(0.0)
    , f(0.0)
    , g(0.0)  {
  (void)_alloc;
    }



   typedef double _a_type;
  _a_type a;

   typedef double _b_type;
  _b_type b;

   typedef double _c_type;
  _c_type c;

   typedef double _d_type;
  _d_type d;

   typedef double _e_type;
  _e_type e;

   typedef double _f_type;
  _f_type f;

   typedef double _g_type;
  _g_type g;




  typedef boost::shared_ptr< ::pr2_package::PoseSendRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_package::PoseSendRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PoseSendRequest_

typedef ::pr2_package::PoseSendRequest_<std::allocator<void> > PoseSendRequest;

typedef boost::shared_ptr< ::pr2_package::PoseSendRequest > PoseSendRequestPtr;
typedef boost::shared_ptr< ::pr2_package::PoseSendRequest const> PoseSendRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_package::PoseSendRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_package::PoseSendRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_package

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'pr2_package': ['/home/tawfiq/pr2_ws/src/pr2_package/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_package::PoseSendRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_package::PoseSendRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_package::PoseSendRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_package::PoseSendRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_package::PoseSendRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_package::PoseSendRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_package::PoseSendRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b8cb445f984bca1921746f1cc8aacde";
  }

  static const char* value(const ::pr2_package::PoseSendRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b8cb445f984bca1ULL;
  static const uint64_t static_value2 = 0x921746f1cc8aacdeULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_package::PoseSendRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_package/PoseSendRequest";
  }

  static const char* value(const ::pr2_package::PoseSendRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_package::PoseSendRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 a\n\
float64 b\n\
float64 c\n\
float64 d\n\
float64 e\n\
float64 f\n\
float64 g\n\
";
  }

  static const char* value(const ::pr2_package::PoseSendRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_package::PoseSendRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
      stream.next(m.c);
      stream.next(m.d);
      stream.next(m.e);
      stream.next(m.f);
      stream.next(m.g);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PoseSendRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_package::PoseSendRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_package::PoseSendRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<double>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<double>::stream(s, indent + "  ", v.b);
    s << indent << "c: ";
    Printer<double>::stream(s, indent + "  ", v.c);
    s << indent << "d: ";
    Printer<double>::stream(s, indent + "  ", v.d);
    s << indent << "e: ";
    Printer<double>::stream(s, indent + "  ", v.e);
    s << indent << "f: ";
    Printer<double>::stream(s, indent + "  ", v.f);
    s << indent << "g: ";
    Printer<double>::stream(s, indent + "  ", v.g);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_PACKAGE_MESSAGE_POSESENDREQUEST_H
