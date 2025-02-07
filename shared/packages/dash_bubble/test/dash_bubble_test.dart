// import 'package:flutter_test/flutter_test.dart';
// import 'package:dash_bubble/dash_bubble.dart';
// import 'package:dash_bubble/dash_bubble_platform_interface.dart';
// import 'package:dash_bubble/dash_bubble_method_channel.dart';
// import 'package:plugin_platform_interface/plugin_platform_interface.dart';

// class MockDashBubblePlatform
//     with MockPlatformInterfaceMixin
//     implements DashBubblePlatform {

//   @override
//   Future<String?> getPlatformVersion() => Future.value('42');
// }

// void main() {
//   final DashBubblePlatform initialPlatform = DashBubblePlatform.instance;

//   test('$MethodChannelDashBubble is the default instance', () {
//     expect(initialPlatform, isInstanceOf<MethodChannelDashBubble>());
//   });

//   test('getPlatformVersion', () async {
//     DashBubble dashBubblePlugin = DashBubble();
//     MockDashBubblePlatform fakePlatform = MockDashBubblePlatform();
//     DashBubblePlatform.instance = fakePlatform;

//     expect(await dashBubblePlugin.getPlatformVersion(), '42');
//   });
// }
