/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.tsccm.WaitingThreadAborter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class WaitingThread; } } } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/impl/conn/tsccm/WaitingThread.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class WaitingThreadAborter;
	class WaitingThreadAborter
		: public cpp_object<WaitingThreadAborter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit WaitingThreadAborter(jobject jobj)
		: cpp_object<WaitingThreadAborter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		WaitingThreadAborter();
		void abort();
		void setWaitingThread(local_ref< org::apache::http::impl::conn::tsccm::WaitingThread > const&);
	}; //class WaitingThreadAborter

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::tsccm::WaitingThreadAborter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


org::apache::http::impl::conn::tsccm::WaitingThreadAborter::WaitingThreadAborter()
: cpp_object<org::apache::http::impl::conn::tsccm::WaitingThreadAborter>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_CLASS_NAME, org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_METHOD_NAME(0), org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void org::apache::http::impl::conn::tsccm::WaitingThreadAborter::abort()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void org::apache::http::impl::conn::tsccm::WaitingThreadAborter::setWaitingThread(local_ref< org::apache::http::impl::conn::tsccm::WaitingThread > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::WaitingThreadAborter,"org/apache/http/impl/conn/tsccm/WaitingThreadAborter")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThreadAborter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThreadAborter,1,"abort","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThreadAborter,2,"setWaitingThread","(Lorg/apache/http/impl/conn/tsccm/WaitingThread;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION