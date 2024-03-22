//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommonCardArea;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppActionsPlugin : NSObject <IESLiveNativeAppActionsPlugin, IESLiveNativeAppFragmentLifeCycle, HTSLiveAnchorActions, IESLiveAnchorRoomStatusChangeEvents, IESLiveNativeAppPluginDataStreamHandler, IESLiveTopRightCardAction> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
    HTSLiveCommonCardArea *_importantCardArea;
    HTSLiveCommonCardArea *_waittingShowImportantCardArea;
}

@property (retain, nonatomic) HTSLiveCommonCardArea *importantCardArea;
@property (retain, nonatomic) HTSLiveCommonCardArea *waittingShowImportantCardArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)willStopLive;
- (void)willStopAnchorLive;
- (void)topRightCardData:(id)arg0;
- (void)topRightCardDidClosed:(id)arg0;
- (id)initWithDIContext:(id)arg0 pluginContext:(id)arg1;
- (void)tryShowImportantCardArea;
- (id)importantCardArea;
- (void)setImportantCardArea:(id)arg0;
- (id)waittingShowImportantCardArea;
- (void)setWaittingShowImportantCardArea:(id)arg0;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void).cxx_destruct;
- (id)pluginContext;

@end