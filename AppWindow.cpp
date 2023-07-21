#include "AppWindow.h"


void AppWindow::onCreate()
{
	GraphicsEngine::get()->init();
	m_swap_chain = GraphicsEngine::get()->createSwapChain();
	RECT rc = this->getClientWindowRect();
	m_swap_chain->init(this->m_hwnd, rc.right - rc.left, rc.bottom - rc.top);
}

void AppWindow::onUpdate()
{
}

void AppWindow::onDestroy()
{
	Window::onDestroy();
	m_swap_chain->release();
	GraphicsEngine::get()->release();
}
