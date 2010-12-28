/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.cookie.Cookie
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace cookie {

	class Cookie;
	class Cookie
		: public cpp_object<Cookie>
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
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)

		explicit Cookie(jobject jobj)
		: cpp_object<Cookie>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getValue();
		local_ref< java::lang::String > getComment();
		local_ref< java::lang::String > getCommentURL();
		local_ref< java::util::Date > getExpiryDate();
		cpp_boolean isPersistent();
		local_ref< java::lang::String > getDomain();
		local_ref< java::lang::String > getPath();
		local_ref< cpp_int_array<1> > getPorts();
		cpp_boolean isSecure();
		cpp_int getVersion();
		cpp_boolean isExpired(local_ref< java::util::Date > const&);
	}; //class Cookie

} //namespace cookie
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIE_HPP_IMPL

namespace j2cpp {



org::apache::http::cookie::Cookie::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

local_ref< java::lang::String > org::apache::http::cookie::Cookie::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::cookie::Cookie::getValue()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::cookie::Cookie::getComment()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::cookie::Cookie::getCommentURL()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::util::Date > org::apache::http::cookie::Cookie::getExpiryDate()
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean org::apache::http::cookie::Cookie::isPersistent()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::cookie::Cookie::getDomain()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::cookie::Cookie::getPath()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< cpp_int_array<1> > org::apache::http::cookie::Cookie::getPorts()
{
	return local_ref< cpp_int_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_boolean org::apache::http::cookie::Cookie::isSecure()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int org::apache::http::cookie::Cookie::getVersion()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_boolean org::apache::http::cookie::Cookie::isExpired(local_ref< java::util::Date > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::cookie::Cookie,"org/apache/http/cookie/Cookie")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,0,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,1,"getValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,2,"getComment","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,3,"getCommentURL","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,4,"getExpiryDate","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,5,"isPersistent","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,6,"getDomain","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,7,"getPath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,8,"getPorts","()[I")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,9,"isSecure","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,10,"getVersion","()I")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::Cookie,11,"isExpired","(Ljava/util/Date;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION