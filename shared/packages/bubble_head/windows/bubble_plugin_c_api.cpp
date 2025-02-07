#include "include/bubble/bubble_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "bubble_plugin.h"

void BubblePluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  bubble::BubblePlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
