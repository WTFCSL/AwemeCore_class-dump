//
//     Generated by private class-dump
//

@class AWEAwemeModel, AWEDanmakuBaseControllerViewModel, AWEPlayInteractionDanmakuPlayer, NSString, NSMutableDictionary, XIGDanmakuItemDescriptor, AWEDanmakuBaseContext, NSMutableArray, AWEDanmakuFlowTrackLayer, NSMutableOrderedSet, AWEDanmakuMaskLayer, UIImageView;
@protocol AWEDanmakuBaseControllerDelegate;

@interface AWEDanmakuBaseController : NSObject <AWEPlayInteractionDanmakuControllerViewModelDelegate, XIGDanmakuPlayerDelegate, AWEDanmakuBaseControllerViewModelDelegate, XIGDanmakuPlayerTimeSynchronizer, AWEPlayInteractionDanmakuPlayerDelegate, AWEPlayInteractionDanmakuPlayerDelegate, AWEDanmakuUnitViewRecognizeHandleDelegate, AWEDanmakuItemViewDelegate, AWEDanmakuBaseControllerProtocol, AWEDanmakuBaseLandScapeControllerProtocol> {
    BOOL _hasTrackFirstDanmakuShow;
    BOOL _hasReceiveMaskInfo;
    BOOL _hasSetMask;
    AWEPlayInteractionDanmakuPlayer *_danmakuPlayer;
    AWEDanmakuFlowTrackLayer *_flowTrackLayer;
    id<AWEDanmakuBaseControllerDelegate> _delegate;
    AWEDanmakuBaseControllerViewModel *_danmakuViewModel;
    AWEDanmakuBaseContext *_context;
    AWEAwemeModel *_model;
    long long _sceneType;
    double _currentDanmakuRate;
    NSMutableArray *_postDanmaKuIds;
    XIGDanmakuItemDescriptor *_currentSelectDanmaku;
    NSMutableOrderedSet *_displayedDanmakuIdList;
    NSMutableArray *_videoTimeList;
    long long _danmakuPlayCount;
    long long _danmakuDropCount;
    NSMutableDictionary *_playTypeDic;
    AWEDanmakuMaskLayer *_maskLayer;
    double _previousSVGStartTime;
    UIImageView *_selectDanmakuImage;
}

@property (retain, nonatomic) AWEPlayInteractionDanmakuPlayer *danmakuPlayer;
@property (retain, nonatomic) AWEDanmakuFlowTrackLayer *flowTrackLayer;
@property (weak, nonatomic) id<AWEDanmakuBaseControllerDelegate> delegate;
@property (retain, nonatomic) AWEDanmakuBaseControllerViewModel *danmakuViewModel;
@property (retain, nonatomic) AWEDanmakuBaseContext *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long sceneType;
@property (nonatomic) double currentDanmakuRate;
@property (retain, nonatomic) NSMutableArray *postDanmaKuIds;
@property (retain, nonatomic) XIGDanmakuItemDescriptor *currentSelectDanmaku;
@property (nonatomic) BOOL hasTrackFirstDanmakuShow;
@property (retain, nonatomic) NSMutableOrderedSet *displayedDanmakuIdList;
@property (retain, nonatomic) NSMutableArray *videoTimeList;
@property (nonatomic) long long danmakuPlayCount;
@property (nonatomic) long long danmakuDropCount;
@property (retain, nonatomic) NSMutableDictionary *playTypeDic;
@property (retain, nonatomic) AWEDanmakuMaskLayer *maskLayer;
@property (nonatomic) BOOL hasReceiveMaskInfo;
@property (nonatomic) double previousSVGStartTime;
@property (nonatomic) BOOL hasSetMask;
@property (retain, nonatomic) UIImageView *selectDanmakuImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedContainerViewControllerCommonAdapterClass;

- (double)currentPlayTime;
- (id)aAWEPadModuleAdapter;
- (double)playPercent;
- (void)didDroppedDanmakus:(id)arg0;
- (void)willDispatchDanmaku:(id)arg0;
- (void)didDisplayDanmaku:(id)arg0 inContainerView:(id)arg1;
- (void)didEndDisplayDanmaku:(id)arg0 inContainerView:(id)arg1;
- (void)didTappedDanmaku:(id)arg0 inContainerView:(id)arg1;
- (id)aAWEFeedContainerViewControllerCommonAdapter;
- (void)setEvent;
- (id)danmakuContainerView;
- (void)onMaskInfoUpdate:(id)arg0 pts:(unsigned long long)arg1;
- (void)showDanmakuInputViewWithExtraDic:(id)arg0 dismissBlock:(id /* block */)arg1;
- (long long)videoPlayState;
- (double)currentPlayRate;
- (void)showLoginPageWithBackVertical;
- (void)reportWithDanmakuModel:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)pauseDanmakuPlayer;
- (BOOL)shouldReceiveDanmakuMaskInfo;
- (BOOL)hasReceiveMaskInfo;
- (void)pauseDanmakuForFPSOptIfNeed;
- (void)clearDanmakuMaskIfNeed;
- (id)currentDanmakuCount;
- (void)refreshDanmakuWithShieldWordChange;
- (void)clearDanmakuMask;
- (id)allVisibleViews;
- (void)reportDanmaku:(id)arg0;
- (id)danmakuPlayer;
- (void)setDanmakuPlayer:(id)arg0;
- (BOOL)isFromMessage;
- (BOOL)isDanmakuViewShowing;
- (id)danmakuViewModel;
- (void)handleDanmakuMessageNoticeWithNewData:(id)arg0;
- (id)postDanmaKuIds;
- (void)setHasTrackFirstDanmakuShow:(BOOL)arg0;
- (BOOL)shouldCurrentModelShowDanmaku;
- (void)updateDanmakuViewStatus:(BOOL)arg0;
- (void)trackDanmakuPlayResultIfNeed;
- (double)currentDanmakuRate;
- (void)setCurrentDanmakuRate:(double)arg0;
- (void)resumeSelectedDanmaView;
- (void)setCurrentSelectDanmaku:(id)arg0;
- (id)displayedDanmakuIdList;
- (id)videoTimeList;
- (BOOL)isLandScapeDanmakuScene;
- (void)setDanmakuDropCount:(long long)arg0;
- (void)setDanmakuPlayCount:(long long)arg0;
- (id)playTypeDic;
- (void)resumeDanmakuPlayer;
- (id)getCurrentDanmakuStylesInfo;
- (id)currentSelectDanmaku;
- (long long)danmakuPlayCount;
- (BOOL)hasTrackFirstDanmakuShow;
- (void)trackFirstDanmakuShow:(id)arg0;
- (void)setDisplayedDanmakuIdList:(id)arg0;
- (void)setVideoTimeList:(id)arg0;
- (void)trackOfficialDanmakuShowIfNeed:(id)arg0;
- (long long)danmakuDropCount;
- (void)updateDanmakuPlayerStatus;
- (void)updateDanmakuPlaySpeedChangeIfNeed;
- (void)resetDanmakuPlayerForLoopPlay;
- (void)handleProgressTouchEnd;
- (void)updateDanmaKuStyleIfNeed;
- (void)trackDanmakuImpressionIfNeed;
- (void)updateAllDisplayingDanmakuAlpha;
- (BOOL)checkIsPad;
- (id)flowTrackLayer;
- (double)getDanmakuTopMargin;
- (BOOL)isMVChannelDanmakuScene;
- (void)stopDanmakuPlayer;
- (void)updateLandScapeDanmaKuStyleIfNeed;
- (void)updateVerticalDanmaKuStyleIfNeed;
- (void)refreshDanmakuLayOut;
- (void)didTappedDanmakuBaseAction:(id)arg0;
- (void)changeUIWithTappedDanmaku:(id)arg0;
- (void)covertDanmakuToImageIfNeed:(id)arg0;
- (void)handleDanmakuTapWithShowBubble:(id)arg0;
- (void)handleDanmakuTapWithShowDigNumView:(id)arg0;
- (void)didTappedDanmaku:(id)arg0;
- (void)didTappedDanmakuDiggNumView:(id)arg0;
- (void)updateDanmakuPlayStatus;
- (id)getRequestLogID:(id)arg0;
- (void)setHasReceiveMaskInfo:(BOOL)arg0;
- (void)setPreviousSVGStartTime:(double)arg0;
- (id)getSVGHandleQueue;
- (void)transfromSVGToImage:(id)arg0;
- (void)setDanmakuMaskSVGImage:(id)arg0;
- (id)createDanmakuMaskLayer;
- (id)getMaskTargetView;
- (void)caculateContentLayerSize;
- (void)setHasSetMask:(BOOL)arg0;
- (BOOL)hasSetMask;
- (double)previousSVGStartTime;
- (BOOL)shouldCovertDanmakuToImage;
- (id)selectDanmakuImage;
- (void)setSelectDanmakuImage:(id)arg0;
- (void)updateFlowTrackLayer;
- (long long)getDanmakuScene;
- (void)didReceivedNewData:(id)arg0;
- (void)didReceivedAppendData:(id)arg0;
- (void)deleteDanmakuWithBlock:(id /* block */)arg0;
- (id)currentDanmakuPlayer;
- (void)sendDanmakuWithInputModel:(id)arg0 postScene:(long long)arg1;
- (id)getPlayTrackParams;
- (BOOL)canHandleDanmaKuTap:(id)arg0;
- (void)handleDanmakuViewTap:(id)arg0;
- (void)handleDanmakuDigViewTap:(id)arg0;
- (double)danmakuTotalLifeTime;
- (double)danmakuSpeedFactor;
- (void)resumeDanmakuPlayerForFPSOpt;
- (id)getDanmakuMaskLayer;
- (BOOL)needPopupShowMask;
- (void)setFlowTrackLayer:(id)arg0;
- (void)setDanmakuViewModel:(id)arg0;
- (void)setPostDanmaKuIds:(id)arg0;
- (void)setPlayTypeDic:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)playerController;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (id)context;
- (double)currentTime;
- (double)videoDuration;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)reset;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg0;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;
- (void)updateWithModel:(id)arg0;

@end