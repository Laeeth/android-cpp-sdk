/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.KeyGenerator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_KEYGENERATOR_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_KEYGENERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }
namespace j2cpp { namespace javax { namespace crypto { class SecretKey; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Provider.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>
#include <javax/crypto/SecretKey.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class KeyGenerator;
	class KeyGenerator
		: public object<KeyGenerator>
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

		explicit KeyGenerator(jobject jobj)
		: object<KeyGenerator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getAlgorithm();
		local_ref< java::security::Provider > getProvider();
		static local_ref< javax::crypto::KeyGenerator > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< javax::crypto::KeyGenerator > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< javax::crypto::KeyGenerator > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< javax::crypto::SecretKey > generateKey();
		void init(local_ref< java::security::spec::AlgorithmParameterSpec >  const&);
		void init(local_ref< java::security::spec::AlgorithmParameterSpec >  const&, local_ref< java::security::SecureRandom >  const&);
		void init(jint);
		void init(jint, local_ref< java::security::SecureRandom >  const&);
		void init(local_ref< java::security::SecureRandom >  const&);
	}; //class KeyGenerator

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_KEYGENERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_KEYGENERATOR_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_KEYGENERATOR_HPP_IMPL

namespace j2cpp {



javax::crypto::KeyGenerator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > javax::crypto::KeyGenerator::getAlgorithm()
{
	return call_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(1),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::security::Provider > javax::crypto::KeyGenerator::getProvider()
{
	return call_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(2),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::Provider >
	>(get_jobject());
}

local_ref< javax::crypto::KeyGenerator > javax::crypto::KeyGenerator::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(3),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< javax::crypto::KeyGenerator >
	>(a0);
}

local_ref< javax::crypto::KeyGenerator > javax::crypto::KeyGenerator::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(4),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< javax::crypto::KeyGenerator >
	>(a0, a1);
}

local_ref< javax::crypto::KeyGenerator > javax::crypto::KeyGenerator::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(5),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< javax::crypto::KeyGenerator >
	>(a0, a1);
}

local_ref< javax::crypto::SecretKey > javax::crypto::KeyGenerator::generateKey()
{
	return call_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(6),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< javax::crypto::SecretKey >
	>(get_jobject());
}

void javax::crypto::KeyGenerator::init(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0)
{
	return call_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(7),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void javax::crypto::KeyGenerator::init(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0, local_ref< java::security::SecureRandom > const &a1)
{
	return call_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(8),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

void javax::crypto::KeyGenerator::init(jint a0)
{
	return call_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(9),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void javax::crypto::KeyGenerator::init(jint a0, local_ref< java::security::SecureRandom > const &a1)
{
	return call_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(10),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1);
}

void javax::crypto::KeyGenerator::init(local_ref< java::security::SecureRandom > const &a0)
{
	return call_method<
		javax::crypto::KeyGenerator::J2CPP_CLASS_NAME,
		javax::crypto::KeyGenerator::J2CPP_METHOD_NAME(11),
		javax::crypto::KeyGenerator::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::crypto::KeyGenerator,"javax/crypto/KeyGenerator")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,0,"<init>","(Ljavax/crypto/KeyGeneratorSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,1,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,2,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,3,"getInstance","(Ljava/lang/String;)Ljavax/crypto/KeyGenerator;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,4,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,5,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyGenerator;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,6,"generateKey","()Ljavax/crypto/SecretKey;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,7,"init","(Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,8,"init","(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,9,"init","(I)V")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,10,"init","(ILjava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::KeyGenerator,11,"init","(Ljava/security/SecureRandom;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_KEYGENERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
