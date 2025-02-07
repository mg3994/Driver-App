#ifndef FLUTTER_PLUGIN_DASH_BUBBLE_PLUGIN_H_
#define FLUTTER_PLUGIN_DASH_BUBBLE_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace dash_bubble {

class DashBubblePlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  DashBubblePlugin();

  virtual ~DashBubblePlugin();

  // Disallow copy and assign.
  DashBubblePlugin(const DashBubblePlugin&) = delete;
  DashBubblePlugin& operator=(const DashBubblePlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace dash_bubble

#endif  // FLUTTER_PLUGIN_DASH_BUBBLE_PLUGIN_H_
