//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppMountPlugin : NSObject <IESLiveNativeAppMountPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)nativeAppMountDidFinishForLevel:(long long)arg0;
- (id)initWithDIContext:(id)arg0 pluginContext:(id)arg1;
- (void)mountShelfInfo:(id)arg0;
- (void)mountNativeAppInfo:(id)arg0;
- (void)removeCurrentMountingDirectlyAndToast:(BOOL)arg0 extra:(id)arg1;
- (void)unmountNativeAppNeedToast:(BOOL)arg0 extra:(id)arg1;
- (void)cacheMountDataIfNeeded;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)nativeAppShelfInfoDidChange:(id)arg0 oldVersion:(id)arg1;
- (void)onShelfInfoUpdated;
- (void)mountNativeAppIfNeeded;
- (void).cxx_destruct;
- (id)pluginContext;

@end
