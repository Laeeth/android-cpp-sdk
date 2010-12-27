/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.entity.UrlEncodedFormEntity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace entity {

	class UrlEncodedFormEntity;
	class UrlEncodedFormEntity
		: public cpp_object<UrlEncodedFormEntity>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		UrlEncodedFormEntity(jobject jobj)
		: cpp_object<UrlEncodedFormEntity>(jobj)
		{
		}

	}; //class UrlEncodedFormEntity

} //namespace entity
} //namespace client
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::client::entity::UrlEncodedFormEntity > create< org::apache::http::client::entity::UrlEncodedFormEntity>(local_ref< java::util::List > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< org::apache::http::client::entity::UrlEncodedFormEntity >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_CLASS_NAME, org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_METHOD_NAME(0), org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< org::apache::http::client::entity::UrlEncodedFormEntity > create< org::apache::http::client::entity::UrlEncodedFormEntity>(local_ref< java::util::List > const &a0)
{
	return local_ref< org::apache::http::client::entity::UrlEncodedFormEntity >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_CLASS_NAME, org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_METHOD_NAME(1), org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::entity::UrlEncodedFormEntity,"org/apache/http/client/entity/UrlEncodedFormEntity")
J2CPP_DEFINE_METHOD(org::apache::http::client::entity::UrlEncodedFormEntity,0,"<init>","(Ljava/util/List;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::entity::UrlEncodedFormEntity,1,"<init>","(Ljava/util/List;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION