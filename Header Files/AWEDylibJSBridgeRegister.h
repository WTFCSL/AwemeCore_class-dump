//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDylibJSBridgeRegister : NSObject <BCAABundleListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerDylibJSBridge:(id /* block */)arg0;
+ (void)registerAWEJS2NativeHandler:(id /* block */)arg0;
+ (void)registerDylibLynxBridge:(id /* block */)arg0;
+ (void)ensureSegmentInfoLoaded;
+ (id)sharedInstance;

@end
