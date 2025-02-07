#ifndef FLUTTER_PLUGIN_BUBBLE_PLUGIN_H_
#define FLUTTER_PLUGIN_BUBBLE_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace bubble {

class BubblePlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  BubblePlugin();

  virtual ~BubblePlugin();

  // Disallow copy and assign.
  BubblePlugin(const BubblePlugin&) = delete;
  BubblePlugin& operator=(const BubblePlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace bubble

#endif  // FLUTTER_PLUGIN_BUBBLE_PLUGIN_H_
