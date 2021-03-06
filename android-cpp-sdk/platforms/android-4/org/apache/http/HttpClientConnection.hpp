/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HttpClientConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPCLIENTCONNECTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPCLIENTCONNECTION_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpConnection.hpp>
#include <org/apache/http/HttpEntityEnclosingRequest.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpResponse.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpClientConnection;
	class HttpClientConnection
		: public object<HttpClientConnection>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit HttpClientConnection(jobject jobj)
		: object<HttpClientConnection>(jobj)
		{
		}

		operator local_ref<org::apache::http::HttpConnection>() const;
		operator local_ref<java::lang::Object>() const;


		jboolean isResponseAvailable(jint);
		void sendRequestHeader(local_ref< org::apache::http::HttpRequest >  const&);
		void sendRequestEntity(local_ref< org::apache::http::HttpEntityEnclosingRequest >  const&);
		local_ref< org::apache::http::HttpResponse > receiveResponseHeader();
		void receiveResponseEntity(local_ref< org::apache::http::HttpResponse >  const&);
		void flush();
	}; //class HttpClientConnection

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPCLIENTCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPCLIENTCONNECTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPCLIENTCONNECTION_HPP_IMPL

namespace j2cpp {



org::apache::http::HttpClientConnection::operator local_ref<org::apache::http::HttpConnection>() const
{
	return local_ref<org::apache::http::HttpConnection>(get_jobject());
}

org::apache::http::HttpClientConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean org::apache::http::HttpClientConnection::isResponseAvailable(jint a0)
{
	return call_method<
		org::apache::http::HttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpClientConnection::J2CPP_METHOD_NAME(0),
		org::apache::http::HttpClientConnection::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}

void org::apache::http::HttpClientConnection::sendRequestHeader(local_ref< org::apache::http::HttpRequest > const &a0)
{
	return call_method<
		org::apache::http::HttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpClientConnection::J2CPP_METHOD_NAME(1),
		org::apache::http::HttpClientConnection::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::HttpClientConnection::sendRequestEntity(local_ref< org::apache::http::HttpEntityEnclosingRequest > const &a0)
{
	return call_method<
		org::apache::http::HttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpClientConnection::J2CPP_METHOD_NAME(2),
		org::apache::http::HttpClientConnection::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

local_ref< org::apache::http::HttpResponse > org::apache::http::HttpClientConnection::receiveResponseHeader()
{
	return call_method<
		org::apache::http::HttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpClientConnection::J2CPP_METHOD_NAME(3),
		org::apache::http::HttpClientConnection::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::HttpResponse >
	>(get_jobject());
}

void org::apache::http::HttpClientConnection::receiveResponseEntity(local_ref< org::apache::http::HttpResponse > const &a0)
{
	return call_method<
		org::apache::http::HttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpClientConnection::J2CPP_METHOD_NAME(4),
		org::apache::http::HttpClientConnection::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::HttpClientConnection::flush()
{
	return call_method<
		org::apache::http::HttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpClientConnection::J2CPP_METHOD_NAME(5),
		org::apache::http::HttpClientConnection::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::HttpClientConnection,"org/apache/http/HttpClientConnection")
J2CPP_DEFINE_METHOD(org::apache::http::HttpClientConnection,0,"isResponseAvailable","(I)Z")
J2CPP_DEFINE_METHOD(org::apache::http::HttpClientConnection,1,"sendRequestHeader","(Lorg/apache/http/HttpRequest;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpClientConnection,2,"sendRequestEntity","(Lorg/apache/http/HttpEntityEnclosingRequest;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpClientConnection,3,"receiveResponseHeader","()Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpClientConnection,4,"receiveResponseEntity","(Lorg/apache/http/HttpResponse;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpClientConnection,5,"flush","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPCLIENTCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
