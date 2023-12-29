#pragma once
#include <d3d11.h>

class DeviceContext;

class ConstantBuffer
{
public:
	bool load(void* buffer, UINT size_buffer);
	void update(DeviceContext* context, void* buffer);
	bool release();
private:
	ID3D11Buffer* m_buffer;
private:
	friend class DeviceContext;
};
