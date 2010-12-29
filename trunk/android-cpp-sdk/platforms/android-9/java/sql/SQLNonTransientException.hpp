/*================================================================================
  code generated by: java2cpp
  class: java.sql.SQLNonTransientException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLNONTRANSIENTEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SQL_SQLNONTRANSIENTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class SQLNonTransientException;
	class SQLNonTransientException
		: public cpp_object<SQLNonTransientException>
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

		SQLNonTransientException(jobject jobj)
		: cpp_object<SQLNonTransientException>(jobj)
		{
		}

	}; //class SQLNonTransientException

} //namespace sql
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLNONTRANSIENTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLNONTRANSIENTEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SQL_SQLNONTRANSIENTEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::sql::SQLNonTransientException > create< java::sql::SQLNonTransientException>()
{
	return local_ref< java::sql::SQLNonTransientException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME, java::sql::SQLNonTransientException::J2CPP_METHOD_NAME(0), java::sql::SQLNonTransientException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::sql::SQLNonTransientException > create< java::sql::SQLNonTransientException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::sql::SQLNonTransientException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME, java::sql::SQLNonTransientException::J2CPP_METHOD_NAME(1), java::sql::SQLNonTransientException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLNonTransientException > create< java::sql::SQLNonTransientException>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::sql::SQLNonTransientException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME, java::sql::SQLNonTransientException::J2CPP_METHOD_NAME(2), java::sql::SQLNonTransientException::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLNonTransientException > create< java::sql::SQLNonTransientException>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
{
	return local_ref< java::sql::SQLNonTransientException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME, java::sql::SQLNonTransientException::J2CPP_METHOD_NAME(3), java::sql::SQLNonTransientException::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLNonTransientException > create< java::sql::SQLNonTransientException>(local_ref< java::lang::Throwable > const &a0)
{
	return local_ref< java::sql::SQLNonTransientException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME, java::sql::SQLNonTransientException::J2CPP_METHOD_NAME(4), java::sql::SQLNonTransientException::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLNonTransientException > create< java::sql::SQLNonTransientException>(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return local_ref< java::sql::SQLNonTransientException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME, java::sql::SQLNonTransientException::J2CPP_METHOD_NAME(5), java::sql::SQLNonTransientException::J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLNonTransientException > create< java::sql::SQLNonTransientException>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Throwable > const &a2)
{
	return local_ref< java::sql::SQLNonTransientException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME, java::sql::SQLNonTransientException::J2CPP_METHOD_NAME(6), java::sql::SQLNonTransientException::J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLNonTransientException > create< java::sql::SQLNonTransientException>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, local_ref< java::lang::Throwable > const &a3)
{
	return local_ref< java::sql::SQLNonTransientException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLNonTransientException::J2CPP_CLASS_NAME, java::sql::SQLNonTransientException::J2CPP_METHOD_NAME(7), java::sql::SQLNonTransientException::J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::SQLNonTransientException,"java/sql/SQLNonTransientException")
J2CPP_DEFINE_METHOD(java::sql::SQLNonTransientException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::sql::SQLNonTransientException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLNonTransientException,2,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLNonTransientException,3,"<init>","(Ljava/lang/String;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::sql::SQLNonTransientException,4,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLNonTransientException,5,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLNonTransientException,6,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLNonTransientException,7,"<init>","(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLNONTRANSIENTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION