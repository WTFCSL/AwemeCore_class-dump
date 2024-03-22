//
//     Generated by private class-dump
//

@class BDSCProgressInfo, NSString, AWEScreenCastControlViewConfig, AWEScreenCastAwemeImpl, NSDictionary, AWEScreenCastJSBridgeImpl, NSMutableArray;
@protocol AWEScreenCastShortConfigService, AWEScreenCastFloatingViewService;

@interface AWEScreenCastModuleService : HTSService <AWEScreenCastModuleService, AWESCSearchMutuallyExclusiveTaskDelegate> {
    BOOL needShowSearchViewAfterForceUpdateToPortrait;
    BOOL _allowBusinessPlayer;
    NSString *_sceneID;
    AWEScreenCastControlViewConfig *_awemeControlViewConfig;
    AWEScreenCastAwemeImpl *_awemeImpl;
    AWEScreenCastJSBridgeImpl *_jsbridgeImp;
    NSDictionary *_playInfo;
    id<AWEScreenCastFloatingViewService> _floatingViewService;
    id<AWEScreenCastShortConfigService> _shortConfigService;
    NSMutableArray *_searchTasks;
}

@property (copy, nonatomic) NSString *sceneID;
@property (retain, nonatomic) AWEScreenCastControlViewConfig *awemeControlViewConfig;
@property (retain, nonatomic) AWEScreenCastAwemeImpl *awemeImpl;
@property (retain, nonatomic) AWEScreenCastJSBridgeImpl *jsbridgeImp;
@property (nonatomic) BOOL allowBusinessPlayer;
@property (retain, nonatomic) NSDictionary *playInfo;
@property (retain, nonatomic) id<AWEScreenCastFloatingViewService> floatingViewService;
@property (retain, nonatomic) id<AWEScreenCastShortConfigService> shortConfigService;
@property (retain, nonatomic) NSMutableArray *searchTasks;
@property (readonly, nonatomic) BDSCProgressInfo *curProgressInfo;
@property (readonly, nonatomic) unsigned long long playStatus;
@property (readonly, nonatomic) AWEScreenCastControlViewConfig *currentBizConfig;
@property (nonatomic) BOOL needShowSearchViewAfterForceUpdateToPortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)playStatus;
- (void)setPlayInfo:(id)arg0;
- (id)playInfo;
- (BOOL)checkIsValid:(id)arg0;
- (id)curSceneString;
- (id)floatingViewService;
- (BOOL)isSearchViewShowing;
- (BOOL)checkCanCastLongVideoWithModel:(id)arg0;
- (void)showCastSearchDevicesView;
- (void)showCastSearchDevicesViewWithDelay;
- (void)closeSearchDeviceViewController;
- (BOOL)mediumLandscapeCastEnable:(BOOL)arg0;
- (BOOL)longVideoSupportCast:(BOOL)arg0;
- (BOOL)longVideoEnableOnlySupportXsg:(BOOL)arg0;
- (id)shortVideoCastConfig:(BOOL)arg0;
- (BOOL)shortVideoCastEnableWithReferString:(id)arg0;
- (BOOL)landscapeNewEnableWithReferString:(id)arg0;
- (id)byteScreenCastContext;
- (id)controlViewConfig;
- (void)updateDayMode:(BOOL)arg0;
- (void)updateXsgIndentifyStatusWithModel:(id)arg0;
- (BOOL)isScreenCasting;
- (void)showCastControlViewWithConfig:(id)arg0;
- (void)updateControlViewWithConfig:(id)arg0;
- (void)startupScreenCastIfNeed;
- (void)closeScreenCast;
- (void)closeScreenCast:(BOOL)arg0 disconnect:(BOOL)arg1;
- (void)closeScreenCastOnlyRemoveCastControlView;
- (BOOL)isCastViewShowing;
- (BOOL)isCastControlViewShowing;
- (void)seekToProgress:(double)arg0;
- (BOOL)isInLVScreenCasting;
- (BOOL)isInShortScreenCasting;
- (void)preSearch;
- (void)stopPreSearchIfNeeded;
- (void)activeListenerWith:(id)arg0;
- (void)invokeWithArgs:(id)arg0;
- (id)invokeWithAction:(id)arg0 uuid:(id)arg1 params:(id)arg2;
- (void)openFeedBackPage;
- (BOOL)needEnterCastPageForModel:(id)arg0;
- (BOOL)needForbidWithModel:(id)arg0;
- (void)startScreenCastWithVideoModel:(id)arg0 progressInfo:(id)arg1;
- (void)updateCastPlayVideoList:(id)arg0;
- (void)appendCastPlayVideoList:(id)arg0;
- (BOOL)checkCanCastShortVideoWith:(id)arg0;
- (BOOL)checkLandscapeCanCastWith:(id)arg0;
- (void)preCheckForVideoInfo:(id)arg0 albumID:(id)arg1;
- (void)preCheckForVideoInfo:(id)arg0 albumID:(id)arg1 authorID:(id)arg2;
- (BOOL)canContinuePlay;
- (id)bizSettingConfig;
- (void)updateScreenScreenBottomDistance:(id)arg0;
- (void)trackScreenCastButtonShowed:(id)arg0 awemeModel:(id)arg1 extraParams:(id)arg2;
- (void)trackScreenCastButtonClicked:(id)arg0 awemeModel:(id)arg1 extraParams:(id)arg2;
- (void)trackFloatingViewShowed:(id)arg0 awemeModel:(id)arg1 extraParams:(id)arg2;
- (void)trackFloatingViewClicked:(id)arg0 awemeModel:(id)arg1 extraParams:(id)arg2;
- (void)trackScreenCastButtonActionForbidden:(id)arg0 extraParams:(id)arg1;
- (void)trackControlPageReturnClickedWithExtraParams:(id)arg0;
- (void)sendEvent:(id)arg0 extraParams:(id)arg1;
- (id)commonEventParamsWithAwemeModel:(id)arg0;
- (id)shortConfigService;
- (void)addSearchTask:(id)arg0;
- (void)performBonjourBlock:(id /* block */)arg0;
- (id)curProgressInfo;
- (id)currentBizConfig;
- (BOOL)allowBusinessPlayer;
- (void)setAllowBusinessPlayer:(BOOL)arg0;
- (BOOL)needShowSearchViewAfterForceUpdateToPortrait;
- (void)setNeedShowSearchViewAfterForceUpdateToPortrait:(BOOL)arg0;
- (id)commonEventParams;
- (BOOL)canStopOtherTask:(id)arg0;
- (void)willChangeState:(unsigned long long)arg0 task:(id)arg1;
- (id)awemeImpl;
- (BOOL)shortVideoCastConfigSupportPortrait:(BOOL)arg0 referString:(id)arg1;
- (id)awemeControlViewConfig;
- (void)setAwemeControlViewConfig:(id)arg0;
- (id)searchTasks;
- (void)setAwemeImpl:(id)arg0;
- (id)jsbridgeImp;
- (id)extraParamsWithSceneID:(id)arg0;
- (void)setJsbridgeImp:(id)arg0;
- (void)setFloatingViewService:(id)arg0;
- (void)setShortConfigService:(id)arg0;
- (void)setSearchTasks:(id)arg0;
- (void)setSceneID:(id)arg0;
- (void).cxx_destruct;
- (id)sceneID;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)updateSceneID:(id)arg0;

@end