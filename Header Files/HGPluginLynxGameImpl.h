//
//     Generated by private class-dump
//

@class NSString;

@interface HGPluginLynxGameImpl : NSObject <HGLynxGamePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)openWithUrl:(id)arg0 rawGameScheme:(id)arg1 completion:(id /* block */)arg2;

@end
