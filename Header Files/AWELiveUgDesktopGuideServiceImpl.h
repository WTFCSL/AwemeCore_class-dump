//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveUgDesktopGuideServiceImpl : NSObject <IESLiveUgDesktopGuideService, AWEUGDesktopChannelGuideMessage, AWEUGSceneDesktopChannelGuideEvadeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackDesktopChannelGuideIfNeededWithAction:(id)arg0 params:(id)arg1;
- (void)desktopChannelGuideAlreadyShowWithScene:(id)arg0 enterFrom:(id)arg1 guideType:(id)arg2 extraParams:(id)arg3;
- (void)desktopChannelGuideShowFailedWithScene:(id)arg0 enterFrom:(id)arg1 guideType:(id)arg2 error:(id)arg3 extraParams:(id)arg4;
- (void)desktopChannelGuideClickWithScene:(id)arg0 enterFrom:(id)arg1 guideType:(id)arg2 clickTarget:(id)arg3;
- (void)checkCanShowWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)p_executeRoomExitAction;
- (void)injectSceneDesktopChannelGuideStrategyWithScene:(id)arg0 enterFrom:(id)arg1;
- (void)canShowDesktopGuideWithSceneParams:(id)arg0 completion:(id /* block */)arg1;
- (void)preloadDesktopChannelGuideDataWithSceneParams:(id)arg0 completion:(id /* block */)arg1;
- (void)showDesktopChannelGuideViewWithSceneParams:(id)arg0;

@end
