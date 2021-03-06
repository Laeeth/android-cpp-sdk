/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.cookie.BasicClientCookie2
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCLIENTCOOKIE2_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCLIENTCOOKIE2_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class SetCookie2; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class SetCookie; } } } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class ClientCookie; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace cookie { class BasicClientCookie; } } } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>
#include <org/apache/http/cookie/ClientCookie.hpp>
#include <org/apache/http/cookie/Cookie.hpp>
#include <org/apache/http/cookie/SetCookie.hpp>
#include <org/apache/http/cookie/SetCookie2.hpp>
#include <org/apache/http/impl/cookie/BasicClientCookie.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class BasicClientCookie2;
	class BasicClientCookie2
		: public object<BasicClientCookie2>
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
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)

		explicit BasicClientCookie2(jobject jobj)
		: object<BasicClientCookie2>(jobj)
		{
		}

		operator local_ref<org::apache::http::cookie::Cookie>() const;
		operator local_ref<org::apache::http::cookie::SetCookie2>() const;
		operator local_ref<org::apache::http::cookie::SetCookie>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::cookie::ClientCookie>() const;
		operator local_ref<org::apache::http::impl::cookie::BasicClientCookie>() const;


		BasicClientCookie2(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< array<jint,1> > getPorts();
		void setPorts(local_ref< array<jint,1> >  const&);
		local_ref< java::lang::String > getCommentURL();
		void setCommentURL(local_ref< java::lang::String >  const&);
		void setDiscard(jboolean);
		jboolean isPersistent();
		jboolean isExpired(local_ref< java::util::Date >  const&);
		local_ref< java::lang::Object > clone();
	}; //class BasicClientCookie2

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCLIENTCOOKIE2_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCLIENTCOOKIE2_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCLIENTCOOKIE2_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::cookie::BasicClientCookie2::operator local_ref<org::apache::http::cookie::Cookie>() const
{
	return local_ref<org::apache::http::cookie::Cookie>(get_jobject());
}

org::apache::http::impl::cookie::BasicClientCookie2::operator local_ref<org::apache::http::cookie::SetCookie2>() const
{
	return local_ref<org::apache::http::cookie::SetCookie2>(get_jobject());
}

org::apache::http::impl::cookie::BasicClientCookie2::operator local_ref<org::apache::http::cookie::SetCookie>() const
{
	return local_ref<org::apache::http::cookie::SetCookie>(get_jobject());
}

org::apache::http::impl::cookie::BasicClientCookie2::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

org::apache::http::impl::cookie::BasicClientCookie2::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::cookie::BasicClientCookie2::operator local_ref<org::apache::http::cookie::ClientCookie>() const
{
	return local_ref<org::apache::http::cookie::ClientCookie>(get_jobject());
}

org::apache::http::impl::cookie::BasicClientCookie2::operator local_ref<org::apache::http::impl::cookie::BasicClientCookie>() const
{
	return local_ref<org::apache::http::impl::cookie::BasicClientCookie>(get_jobject());
}


org::apache::http::impl::cookie::BasicClientCookie2::BasicClientCookie2(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<org::apache::http::impl::cookie::BasicClientCookie2>(
	call_new_object<
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< array<jint,1> > org::apache::http::impl::cookie::BasicClientCookie2::getPorts()
{
	return call_method<
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array<jint,1> >
	>(get_jobject());
}

void org::apache::http::impl::cookie::BasicClientCookie2::setPorts(local_ref< array<jint,1> > const &a0)
{
	return call_method<
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::impl::cookie::BasicClientCookie2::getCommentURL()
{
	return call_method<
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::apache::http::impl::cookie::BasicClientCookie2::setCommentURL(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::cookie::BasicClientCookie2::setDiscard(jboolean a0)
{
	return call_method<
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

jboolean org::apache::http::impl::cookie::BasicClientCookie2::isPersistent()
{
	return call_method<
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}

jboolean org::apache::http::impl::cookie::BasicClientCookie2::isExpired(local_ref< java::util::Date > const &a0)
{
	return call_method<
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > org::apache::http::impl::cookie::BasicClientCookie2::clone()
{
	return call_method<
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::cookie::BasicClientCookie2::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::Object >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::BasicClientCookie2,"org/apache/http/impl/cookie/BasicClientCookie2")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicClientCookie2,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicClientCookie2,1,"getPorts","()[I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicClientCookie2,2,"setPorts","([I)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicClientCookie2,3,"getCommentURL","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicClientCookie2,4,"setCommentURL","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicClientCookie2,5,"setDiscard","(Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicClientCookie2,6,"isPersistent","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicClientCookie2,7,"isExpired","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicClientCookie2,8,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCLIENTCOOKIE2_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
