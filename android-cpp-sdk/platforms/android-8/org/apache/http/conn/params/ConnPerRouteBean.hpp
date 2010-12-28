/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.params.ConnPerRouteBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/util/Map.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace params {

	class ConnPerRouteBean;
	class ConnPerRouteBean
		: public cpp_object<ConnPerRouteBean>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_FIELD(0)

		ConnPerRouteBean(jobject jobj)
		: cpp_object<ConnPerRouteBean>(jobj)
		{
		}

		cpp_int getDefaultMax();
		void setDefaultMaxPerRoute(cpp_int const&);
		void setMaxForRoute(local_ref< org::apache::http::conn::routing::HttpRoute > const&, cpp_int const&);
		cpp_int getMaxForRoute(local_ref< org::apache::http::conn::routing::HttpRoute > const&);
		void setMaxForRoutes(local_ref< java::util::Map > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DEFAULT_MAX_CONNECTIONS_PER_ROUTE;
	}; //class ConnPerRouteBean

} //namespace params
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::conn::params::ConnPerRouteBean > create< org::apache::http::conn::params::ConnPerRouteBean>(cpp_int const &a0)
{
	return local_ref< org::apache::http::conn::params::ConnPerRouteBean >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME, org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_NAME(0), org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< org::apache::http::conn::params::ConnPerRouteBean > create< org::apache::http::conn::params::ConnPerRouteBean>()
{
	return local_ref< org::apache::http::conn::params::ConnPerRouteBean >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME, org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_NAME(1), org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int org::apache::http::conn::params::ConnPerRouteBean::getDefaultMax()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void org::apache::http::conn::params::ConnPerRouteBean::setDefaultMaxPerRoute(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::conn::params::ConnPerRouteBean::setMaxForRoute(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int org::apache::http::conn::params::ConnPerRouteBean::getMaxForRoute(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::conn::params::ConnPerRouteBean::setMaxForRoutes(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME,
	org::apache::http::conn::params::ConnPerRouteBean::J2CPP_FIELD_NAME(0),
	org::apache::http::conn::params::ConnPerRouteBean::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> org::apache::http::conn::params::ConnPerRouteBean::DEFAULT_MAX_CONNECTIONS_PER_ROUTE;


J2CPP_DEFINE_CLASS(org::apache::http::conn::params::ConnPerRouteBean,"org/apache/http/conn/params/ConnPerRouteBean")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,1,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,2,"getDefaultMax","()I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,3,"setDefaultMaxPerRoute","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,4,"setMaxForRoute","(Lorg/apache/http/conn/routing/HttpRoute;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,5,"getMaxForRoute","(Lorg/apache/http/conn/routing/HttpRoute;)I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,6,"setMaxForRoutes","(Ljava/util/Map;)V")
J2CPP_DEFINE_FIELD(org::apache::http::conn::params::ConnPerRouteBean,0,"DEFAULT_MAX_CONNECTIONS_PER_ROUTE","I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION