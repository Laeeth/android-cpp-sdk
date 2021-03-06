#ifndef CAMERA_TEST_H
#define CAMERA_TEST_H

#include <j2cpp/j2cpp.hpp>
#include <android/app/Activity.hpp>
#include <android/hardware/Camera.hpp>
#include <android/opengl/GLSurfaceView.hpp>


using namespace j2cpp;

class CameraTest
: public j2cpp::object<CameraTest>
{
public:
	J2CPP_DECLARE_CLASS
	J2CPP_DECLARE_FIELD(0)
	J2CPP_DECLARE_FIELD(1)
	J2CPP_DECLARE_FIELD(2)
	J2CPP_DECLARE_FIELD(3)
	J2CPP_DECLARE_FIELD(4)
	J2CPP_DECLARE_FIELD(5)
	J2CPP_DECLARE_FIELD(6)

	explicit CameraTest(jobject jobj);

	operator local_ref<android::app::Activity>() const;
	operator local_ref<android::hardware::Camera::PreviewCallback>() const;


	field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref<android::opengl::GLSurfaceView> >		m_GLSurfaceView;
	field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref<android::hardware::Camera> >			m_Camera;
	field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint >											m_TextureWidth;
	field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint >											m_TextureHeight;
	field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< array<jbyte, 1> > >					m_TextureBuffer;
	field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint >											m_TexId;
	field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jboolean >										m_TexIsDirty;
};

#endif //CAMERA_TEST_H
