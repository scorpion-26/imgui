// ImGui Renderer for: DirectX10
// This needs to be used along with a Platform Binding (e.g. Win32)

// Implemented features:
//  [X] User texture binding. Use 'ID3D10ShaderResourceView*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.

// You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui

struct ID3D10Device;

IMGUI_API bool        ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_API void        ImGui_ImplDX10_Shutdown();
IMGUI_API void        ImGui_ImplDX10_NewFrame();
IMGUI_API void        ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);

// Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX10_CreateDeviceObjects();
