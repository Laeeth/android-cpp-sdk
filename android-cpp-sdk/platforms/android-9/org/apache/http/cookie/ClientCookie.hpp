/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.cookie.ClientCookie
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_CLIENTCOOKIE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_CLIENTCOOKIE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/cookie/Cookie.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace cookie {

	class ClientCookie;
	class ClientCookie
		: public object<ClientCookie>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)

		explicit ClientCookie(jobject jobj)
		: object<ClientCookie>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::cookie::Cookie>() const;


		local_ref< java::lang::String > getAttribute(local_ref< java::lang::String >  const&);
		jboolean containsAttribute(local_ref< java::lang::String >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > VERSION_ATTR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > PATH_ATTR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > DOMAIN_ATTR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > MAX_AGE_ATTR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > SECURE_ATTR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > COMMENT_ATTR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > EXPIRES_ATTR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > PORT_ATTR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > COMMENTURL_ATTR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > DISCARD_ATTR;
	}; //class ClientCookie

} //namespace cookie
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_CLIENTCOOKIE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_CLIENTCOOKIE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_CLIENTCOOKIE_HPP_IMPL

namespace j2cpp {



org::apache::http::cookie::ClientCookie::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::cookie::ClientCookie::operator local_ref<org::apache::http::cookie::Cookie>() const
{
	return local_ref<org::apache::http::cookie::Cookie>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::cookie::ClientCookie::getAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
		org::apache::http::cookie::ClientCookie::J2CPP_METHOD_NAME(0),
		org::apache::http::cookie::ClientCookie::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jboolean org::apache::http::cookie::ClientCookie::containsAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
		org::apache::http::cookie::ClientCookie::J2CPP_METHOD_NAME(1),
		org::apache::http::cookie::ClientCookie::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}


static_field<
	org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_NAME(0),
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::cookie::ClientCookie::VERSION_ATTR;

static_field<
	org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_NAME(1),
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> org::apache::http::cookie::ClientCookie::PATH_ATTR;

static_field<
	org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_NAME(2),
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> org::apache::http::cookie::ClientCookie::DOMAIN_ATTR;

static_field<
	org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_NAME(3),
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> org::apache::http::cookie::ClientCookie::MAX_AGE_ATTR;

static_field<
	org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_NAME(4),
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> org::apache::http::cookie::ClientCookie::SECURE_ATTR;

static_field<
	org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_NAME(5),
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> org::apache::http::cookie::ClientCookie::COMMENT_ATTR;

static_field<
	org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_NAME(6),
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> org::apache::http::cookie::ClientCookie::EXPIRES_ATTR;

static_field<
	org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_NAME(7),
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> org::apache::http::cookie::ClientCookie::PORT_ATTR;

static_field<
	org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_NAME(8),
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> org::apache::http::cookie::ClientCookie::COMMENTURL_ATTR;

static_field<
	org::apache::http::cookie::ClientCookie::J2CPP_CLASS_NAME,
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_NAME(9),
	org::apache::http::cookie::ClientCookie::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> org::apache::http::cookie::ClientCookie::DISCARD_ATTR;


J2CPP_DEFINE_CLASS(org::apache::http::cookie::ClientCookie,"org/apache/http/cookie/ClientCookie")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::ClientCookie,0,"getAttribute","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::ClientCookie,1,"containsAttribute","(Ljava/lang/String;)Z")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::ClientCookie,0,"VERSION_ATTR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::ClientCookie,1,"PATH_ATTR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::ClientCookie,2,"DOMAIN_ATTR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::ClientCookie,3,"MAX_AGE_ATTR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::ClientCookie,4,"SECURE_ATTR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::ClientCookie,5,"COMMENT_ATTR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::ClientCookie,6,"EXPIRES_ATTR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::ClientCookie,7,"PORT_ATTR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::ClientCookie,8,"COMMENTURL_ATTR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::ClientCookie,9,"DISCARD_ATTR","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_CLIENTCOOKIE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
