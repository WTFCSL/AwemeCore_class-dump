//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppTrackerPlugin : NSObject <IESLiveNativeAppTrackerPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler, IESLiveNativeAppSquareTracker> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)arg0 pluginContext:(id)arg1;
- (void)trackBaseEvent:(id)arg0 extraBlock:(id /* block */)arg1;
- (void)trackTimorItem:(id)arg0 isShowOrClick:(BOOL)arg1;
- (void)trackBubble:(id)arg0 showWithShelfInfo:(id)arg1;
- (void)trackShelfModifiedWithShelfInfo:(id)arg0;
- (void)trackShelfRemovedWithShelfInfo:(id)arg0 source:(id)arg1;
- (void)trackShelfCardModifyResultWithShelfInfo:(id)arg0 result:(id)arg1 createInfo:(id)arg2;
- (void)trackShelfCardModifySubmitWithShelfInfo:(id)arg0 shelfCardInfo:(id)arg1 createInfo:(id)arg2;
- (void)trackCloseNativeAppLoadWithSource:(id)arg0 shelfInfo:(id)arg1;
- (void)trackCouponWithEvent:(id)arg0 extra:(id)arg1;
- (void)trackCardExplainWithShelfInfo:(id)arg0 isStart:(BOOL)arg1 isChange:(BOOL)arg2;
- (void)trackPanelViewSaveWithShelfInfo:(id)arg0;
- (void)trackNativeAppGiveupReminderWithShelfInfo:(id)arg0 isFirstAdd:(BOOL)arg1;
- (void)trackItemShowMsgWithID:(id)arg0 fromSource:(long long)arg1;
- (void)trackBeforeLiveTimorIcon:(BOOL)arg0 liveType:(id)arg1 source:(id)arg2;
- (void)trackNativeAppAddWithFirstAddType:(BOOL)arg0 addType:(id)arg1 shelfInfo:(id)arg2;
- (void)trackCloseNativeAppWithShelfInfo:(id)arg0;
- (void)trackExitConfirmAlertWithExitSource:(id)arg0 clickSource:(id)arg1 shelfInfo:(id)arg2;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (id)extraDictForIESLiveNativeAppSquareTracker;
- (void).cxx_destruct;
- (id)pluginContext;

@end
