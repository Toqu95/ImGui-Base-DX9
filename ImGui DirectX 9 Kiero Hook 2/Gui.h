#pragma once
#include "imgui/imgui.h"
#include "Styles.h"

namespace Gui
{
	inline void Menu()
	{
		ImGui::SetNextWindowPos(ImVec2(0, 0));
		ImGui::SetNextWindowSize(ImVec2(1920, 1080));

		Styles::UseHaze();

		ImGui::Begin("Overlay", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoBackground);
		
		auto pDrawList = ImGui::GetWindowDrawList();

		pDrawList->AddText(ImVec2(15, 15), ImColor(255, 50, 50), "Esp");
		pDrawList->AddCircle(ImVec2(1920/2, 1080/2), 10.f, ImColor(255, 50, 50), 12, 1.f);

		ImGui::End();
	}
}