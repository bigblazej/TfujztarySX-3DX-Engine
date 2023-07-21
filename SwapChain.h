#pragma once
#include <d3d11.h>


class SwapChain
{
public:
	bool init(HWND hwnd, UINT width, UINT height);
	bool release();
private:
	IDXGISwapChain* m_swap_chain;
};

