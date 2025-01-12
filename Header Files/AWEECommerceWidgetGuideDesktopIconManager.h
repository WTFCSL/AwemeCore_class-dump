//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, AWEECommerceWidgetGuideEntranceModel;

@interface AWEECommerceWidgetGuideDesktopIconManager : NSObject <AWEUGDesktopChannelGuideMessage, AWEUGSceneDesktopChannelGuideEvadeProtocol, AWEECommerceWidgetGuideManagerService> {
    BOOL _passFrequencyDebugSwitch;
    AWEECommerceWidgetGuideEntranceModel *_entranceModel;
    NSString *_sceneType;
    NSMutableArray *_hasPreloadEntranceList;
}

@property (retain, nonatomic) AWEECommerceWidgetGuideEntranceModel *entranceModel;
@property (copy, nonatomic) NSString *sceneType;
@property (retain, nonatomic) NSMutableArray *hasPreloadEntranceList;
@property (nonatomic) BOOL passFrequencyDebugSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)preloadConfig;
- (void)desktopChannelGuideAlreadyShowWithScene:(id)arg0 enterFrom:(id)arg1 guideType:(id)arg2 extraParams:(id)arg3;
- (void)desktopChannelGuideShowFailedWithScene:(id)arg0 enterFrom:(id)arg1 guideType:(id)arg2 error:(id)arg3 extraParams:(id)arg4;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)arg0 enterFrom:(id)arg1;
- (void)setPassFrequencyDebugSwitch:(BOOL)arg0;
- (void)setHasPreloadEntranceList:(id)arg0;
- (id)hasPreloadEntranceList;
- (BOOL)passFrequencyDebugSwitch;
- (void)trackerWithAction:(id)arg0 state:(id)arg1 entrance:(id)arg2;
- (void)setEntranceModel:(id)arg0;
- (id)entranceModel;
- (void)checkCanShowWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)showGuidePanelWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)preloadWithEntrance:(id)arg0 completion:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)sceneType;
- (void)setSceneType:(id)arg0;

@end
