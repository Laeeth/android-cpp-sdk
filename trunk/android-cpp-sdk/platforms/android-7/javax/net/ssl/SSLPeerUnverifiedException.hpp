/*================================================================================
  code generated by: java2cpp
  class: javax.net.ssl.SSLPeerUnverifiedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLPEERUNVERIFIEDEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLPEERUNVERIFIEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLException; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <javax/net/ssl/SSLException.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLPeerUnverifiedException;
	class SSLPeerUnverifiedException
		: public cpp_object<SSLPeerUnverifiedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit SSLPeerUnverifiedException(jobject jobj)
		: cpp_object<SSLPeerUnverifiedException>(jobj)
		{
		}

		operator local_ref<javax::net::ssl::SSLException>() const;


		SSLPeerUnverifiedException(local_ref< java::lang::String > const&);
	}; //class SSLPeerUnverifiedException

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLPEERUNVERIFIEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLPEERUNVERIFIEDEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLPEERUNVERIFIEDEXCEPTION_HPP_IMPL

namespace j2cpp {



javax::net::ssl::SSLPeerUnverifiedException::operator local_ref<javax::net::ssl::SSLException>() const
{
	return local_ref<javax::net::ssl::SSLException>(get_jtype());
}


javax::net::ssl::SSLPeerUnverifiedException::SSLPeerUnverifiedException(local_ref< java::lang::String > const &a0)
: cpp_object<javax::net::ssl::SSLPeerUnverifiedException>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::net::ssl::SSLPeerUnverifiedException::J2CPP_CLASS_NAME>(),
		get_method_id<javax::net::ssl::SSLPeerUnverifiedException::J2CPP_CLASS_NAME, javax::net::ssl::SSLPeerUnverifiedException::J2CPP_METHOD_NAME(0), javax::net::ssl::SSLPeerUnverifiedException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(javax::net::ssl::SSLPeerUnverifiedException,"javax/net/ssl/SSLPeerUnverifiedException")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLPeerUnverifiedException,0,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLPEERUNVERIFIEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION