#include "PixelShader.h"
#include "GraphicsEngine.h"
void PixelShader::release()
{
	m_ps->Release();
	delete this;
}

bool PixelShader::init(void* shader_byte_code, size_t byte_code_size)
{
	if (!SUCCEEDED(GraphicsEngine::get()->m_d3d_device->CreatePixelShader(shader_byte_code, byte_code_size, nullptr, &m_ps)))
		return false;
	return true;
}