/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.auth.BasicScheme
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/auth/Credentials.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace auth {

	class BasicScheme;
	class BasicScheme
		: public cpp_object<BasicScheme>
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

		BasicScheme(jobject jobj)
		: cpp_object<BasicScheme>(jobj)
		{
		}

		local_ref< java::lang::String > getSchemeName();
		void processChallenge(local_ref< org::apache::http::Header > const&);
		cpp_boolean isComplete();
		cpp_boolean isConnectionBased();
		local_ref< org::apache::http::Header > authenticate(local_ref< org::apache::http::auth::Credentials > const&, local_ref< org::apache::http::HttpRequest > const&);
		static local_ref< org::apache::http::Header > authenticate(local_ref< org::apache::http::auth::Credentials > const&, local_ref< java::lang::String > const&, cpp_boolean const&);
	}; //class BasicScheme

} //namespace auth
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::auth::BasicScheme > create< org::apache::http::impl::auth::BasicScheme>()
{
	return local_ref< org::apache::http::impl::auth::BasicScheme >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::auth::BasicScheme::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::auth::BasicScheme::J2CPP_CLASS_NAME, org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_NAME(0), org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::impl::auth::BasicScheme::getSchemeName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void org::apache::http::impl::auth::BasicScheme::processChallenge(local_ref< org::apache::http::Header > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::auth::BasicScheme::isComplete()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean org::apache::http::impl::auth::BasicScheme::isConnectionBased()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< org::apache::http::Header > org::apache::http::impl::auth::BasicScheme::authenticate(local_ref< org::apache::http::auth::Credentials > const &a0, local_ref< org::apache::http::HttpRequest > const &a1)
{
	return local_ref< org::apache::http::Header >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::Header > org::apache::http::impl::auth::BasicScheme::authenticate(local_ref< org::apache::http::auth::Credentials > const &a0, local_ref< java::lang::String > const &a1, cpp_boolean const &a2)
{
	return local_ref< org::apache::http::Header >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::auth::BasicScheme,"org/apache/http/impl/auth/BasicScheme")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,1,"getSchemeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,2,"processChallenge","(Lorg/apache/http/Header;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,3,"isComplete","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,4,"isConnectionBased","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,5,"authenticate","(Lorg/apache/http/auth/Credentials;Lorg/apache/http/HttpRequest;)Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,6,"authenticate","(Lorg/apache/http/auth/Credentials;Ljava/lang/String;Z)Lorg/apache/http/Header;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION