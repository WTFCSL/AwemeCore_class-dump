//
//     Generated by private class-dump
//

@class UIView, NSString, IESLiveFlexInteractStore, IESLivePublicScreenInfoModel, NSMutableDictionary, IESLiveRightBottomMutuallyExclusiveItem, IESLiveFlexInteractBannerView, IESLiveBannerListModel;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveFlexInteractFragment : IESLiveRoomComponent <IESLiveFlexInteractReaction, IESLiveSeekAction, IESLiveAutoRotateAction, IESLiveFlexInteractBannerDelegate, IESLiveFlexInteractRouter, IESLiveCustomAutoHideAnimAction, IESLivePublicScreenLifeCircleAction> {
    BOOL _isLandscape;
    BOOL _isShowing;
    BOOL _isUISetuped;
    BOOL _isBannerLoad;
    BOOL _enableMoveFlex;
    BOOL _isSideMode;
    NSMutableDictionary *interactDict;
    IESLiveFlexInteractStore *_store;
    IESLiveFlexInteractBannerView *_interactView;
    IESLiveRightBottomMutuallyExclusiveItem *_rightBottomItem;
    id<IESLiveURLSchemaHandler> _schemaHandler;
    UIView *_emptyReplaceView;
    double _rightControlSpacing;
    IESLiveBannerListModel *_bannerModel;
    IESLivePublicScreenInfoModel *_currentPublicScreenInfo;
}

@property (retain, nonatomic) IESLiveFlexInteractStore *store;
@property (retain, nonatomic) IESLiveFlexInteractBannerView *interactView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (weak, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isUISetuped;
@property (nonatomic) BOOL isBannerLoad;
@property (nonatomic) BOOL enableMoveFlex;
@property (retain, nonatomic) UIView *emptyReplaceView;
@property (nonatomic) double rightControlSpacing;
@property (retain, nonatomic) IESLiveBannerListModel *bannerModel;
@property (retain, nonatomic) IESLivePublicScreenInfoModel *currentPublicScreenInfo;
@property (nonatomic) BOOL isSideMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *interactDict;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)isMixed;

- (void)setIsShowing:(BOOL)arg0;
- (id)bannerModel;
- (void)setBannerModel:(id)arg0;
- (id)interactView;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)remoteRoomDataReady:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)onStreamPause;
- (void)onStreamPlay;
- (void)onStreamProgressUpdate:(double)arg0 start:(double)arg1 latest:(double)arg2;
- (void)setInteractView:(id)arg0;
- (id)schemaHandler;
- (void)setSchemaHandler:(id)arg0;
- (void)createHybridContainer;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)willAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)didAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)landscapeViewsTransformToHidden:(BOOL)arg0;
- (void)portraitViewsTransformToHidden:(BOOL)arg0;
- (void)renderBanner:(id)arg0;
- (void)didReceiveBannerMessage:(id)arg0;
- (void)publicScreenWillAppearWithInfoModel:(id)arg0;
- (void)onSeekEnd;
- (void)notifyAvoidIsSideMode:(BOOL)arg0;
- (id)rightBottomItem;
- (void)setRightBottomItem:(id)arg0;
- (id)currentPublicScreenInfo;
- (id)interactDict;
- (void)setInteractDict:(id)arg0;
- (void)notifyAvoidRightControl:(double)arg0;
- (void)bannerDidFinishLoadFalse:(id)arg0;
- (void)bannerViewDidCreated:(BOOL)arg0;
- (void)bannerViewDidRecieveError:(id)arg0;
- (void)setIsUISetuped:(BOOL)arg0;
- (void)setEnableMoveFlex:(BOOL)arg0;
- (id)getPlayData;
- (void)changeRoomInteractStatus:(long long)arg0 data:(id)arg1;
- (void)setCurrentPublicScreenInfo:(id)arg0;
- (void)interactReportTrace:(id)arg0 params:(id)arg1;
- (void)showInteractiveView;
- (void)disappearInteractiveView;
- (void)refreshInteractStatus:(long long)arg0 toPublicScreenType:(unsigned long long)arg1;
- (BOOL)shouldInsertChatTab;
- (void)p_layoutInteractiveWithLandscape:(BOOL)arg0;
- (BOOL)isUISetuped;
- (BOOL)enableMoveFlex;
- (id)emptyReplaceView;
- (void)retainInteractViewOnMediaContainer;
- (BOOL)isEcommerceCardShowing;
- (void)hideEcommerceCard;
- (BOOL)isSideMode;
- (double)rightControlSpacing;
- (void)setIsSideMode:(BOOL)arg0;
- (void)sendHybridEvent:(id)arg0 params:(id)arg1;
- (void)setRightControlSpacing:(double)arg0;
- (void)setIsBannerLoad:(BOOL)arg0;
- (BOOL)isBannerLoad;
- (void)receiveMessageReportTrack:(id)arg0;
- (void)didReceiveInteractiveMessage:(id)arg0;
- (void)flexInteractStatusDidChange:(long long)arg0;
- (void)refreshInteractStatus:(long long)arg0;
- (void)statusErrorOccur:(long long)arg0 hiddenReason:(long long)arg1;
- (void)bannerDidFinishLoadSuccess:(BOOL)arg0 url:(id)arg1;
- (void)setEmptyReplaceView:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setIsLandscape:(BOOL)arg0;
- (BOOL)isShowing;
- (void)setStore:(id)arg0;
- (BOOL)isLandscape;
- (void)setupUI;
- (double)bottomOffset;
- (void)layoutUI;

@end
