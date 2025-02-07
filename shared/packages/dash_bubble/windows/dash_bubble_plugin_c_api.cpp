#include "include/dash_bubble/dash_bubble_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "dash_bubble_plugin.h"

void DashBubblePluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  dash_bubble::DashBubblePlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
