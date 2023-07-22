#pragma once
#include <d3d11.h>
class SwapChain;
class DeviceContext;

class GraphicsEngine
{
public:
	bool init();
	bool release();
public:
	SwapChain* createSwapChain();
	DeviceContext* getImmediateDeviceContext();
public:
	static GraphicsEngine* get();
private:
	DeviceContext* m_imm_device_context;
private:
	ID3D11Device* m_d3d_device;
	D3D_FEATURE_LEVEL m_feature_level;
private:
	IDXGIDevice* m_dxgi_device;
	IDXGIAdapter* m_dxgi_adapter;
	IDXGIFactory* m_dxgi_factory;
private:
	friend class SwapChain;
};

