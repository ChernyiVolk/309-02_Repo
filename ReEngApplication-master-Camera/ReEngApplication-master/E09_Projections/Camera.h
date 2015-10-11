
#include "AppClass.h"
#include "RE\ReEngAppClass.h"
#include <SFML\Graphics.hpp>

class Camera
{
public:
	Camera();
	matrix4 GetView(void);
	matrix4 GetProjection(bool bOrthographic);
	void SetPosition(vector3 v3Position);
	void SetTarget(vector3 v3Target);
	void SetUp(vector3 v3Up);
	void MoveForward(float fIncrement);
	void MoveSideways(float fIncrement);
	void MoveVertical(float fIncrement);
	void ChangePitch(float fIncrement);
	void ChangeRoll(float fIncrement);
	void ChangeYaw(float fIncrement);
	~Camera();

private:

};

Camera::Camera()
{
	
}

matrix4 Camera::GetView(void)
{

}
matrix4 Camera::GetProjection(bool bOrthographic)
{

}
void Camera::SetPosition(vector3 v3Position)
{

}
void Camera::SetTarget(vector3 v3Target)
{

}
void Camera::SetUp(vector3 v3Up)
{

}
void Camera::MoveForward(float fIncrement)
{

}
void Camera::MoveSideways(float fIncrement)
{

}
void Camera::MoveVertical(float fIncrement)
{

}
void Camera::ChangePitch(float fIncrement)
{

}
void Camera::ChangeRoll(float fIncrement)
{

}
void Camera::ChangeYaw(float fIncrement)
{

}

Camera::~Camera()
{
}