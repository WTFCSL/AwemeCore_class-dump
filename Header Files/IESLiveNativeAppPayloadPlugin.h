//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppPayloadPlugin : NSObject <IESLiveNativeAppPayloadPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    BOOL _isCommerceStarMounting;
    BOOL _isShootFromOpenPlatformTaskBox;
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (nonatomic) BOOL isCommerceStarMounting;
@property (nonatomic) BOOL isShootFromOpenPlatformTaskBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)arg0 pluginContext:(id)arg1;
- (BOOL)isCommerceStarMounting;
- (void)handleSourceParams;
- (void)updatePayloadToGuideModelWithShelfInfo:(id)arg0 isAppend:(BOOL)arg1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)appendRoomCreateParams;
- (void)setIsCommerceStarMounting:(BOOL)arg0;
- (void)setIsShootFromOpenPlatformTaskBox:(BOOL)arg0;
- (BOOL)isShootFromOpenPlatformTaskBox;
- (void).cxx_destruct;
- (id)pluginContext;

@end