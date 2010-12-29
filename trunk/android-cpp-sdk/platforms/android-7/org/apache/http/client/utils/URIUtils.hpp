/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.utils.URIUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URIUTILS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URIUTILS_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/URI.hpp>
#include <org/apache/http/HttpHost.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace utils {

	class URIUtils;
	class URIUtils
		: public cpp_object<URIUtils>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit URIUtils(jobject jobj)
		: cpp_object<URIUtils>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::net::URI > createURI(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_int const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< java::net::URI > rewriteURI(local_ref< java::net::URI > const&, local_ref< org::apache::http::HttpHost > const&, cpp_boolean const&);
		static local_ref< java::net::URI > rewriteURI(local_ref< java::net::URI > const&, local_ref< org::apache::http::HttpHost > const&);
		static local_ref< java::net::URI > resolve(local_ref< java::net::URI > const&, local_ref< java::lang::String > const&);
		static local_ref< java::net::URI > resolve(local_ref< java::net::URI > const&, local_ref< java::net::URI > const&);
	}; //class URIUtils

} //namespace utils
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URIUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URIUTILS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URIUTILS_HPP_IMPL

namespace j2cpp {



org::apache::http::client::utils::URIUtils::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


local_ref< java::net::URI > org::apache::http::client::utils::URIUtils::createURI(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4, local_ref< java::lang::String > const &a5)
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

local_ref< java::net::URI > org::apache::http::client::utils::URIUtils::rewriteURI(local_ref< java::net::URI > const &a0, local_ref< org::apache::http::HttpHost > const &a1, cpp_boolean const &a2)
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::net::URI > org::apache::http::client::utils::URIUtils::rewriteURI(local_ref< java::net::URI > const &a0, local_ref< org::apache::http::HttpHost > const &a1)
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::net::URI > org::apache::http::client::utils::URIUtils::resolve(local_ref< java::net::URI > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::net::URI > org::apache::http::client::utils::URIUtils::resolve(local_ref< java::net::URI > const &a0, local_ref< java::net::URI > const &a1)
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::utils::URIUtils,"org/apache/http/client/utils/URIUtils")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URIUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URIUtils,1,"createURI","(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/URI;")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URIUtils,2,"rewriteURI","(Ljava/net/URI;Lorg/apache/http/HttpHost;Z)Ljava/net/URI;")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URIUtils,3,"rewriteURI","(Ljava/net/URI;Lorg/apache/http/HttpHost;)Ljava/net/URI;")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URIUtils,4,"resolve","(Ljava/net/URI;Ljava/lang/String;)Ljava/net/URI;")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URIUtils,5,"resolve","(Ljava/net/URI;Ljava/net/URI;)Ljava/net/URI;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URIUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION