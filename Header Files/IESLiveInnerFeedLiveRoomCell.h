//
//     Generated by private class-dump
//

@class IESLiveBackgroundView, IESLiveInnerFeedLiveRoomItemModel, HTSEventContext, IESLiveInnerPlayerStreamPreloader, IESLiveInnerFeedLiveRoomAudienceDelegateImpl, NSString, HTSLiveAudienceControllerFactory, UIViewController, IESLiveDynamicBackgroundUpdater, HTSLiveAudienceViewController, IESLiveEnterRoomAisle;

@interface IESLiveInnerFeedLiveRoomCell : UICollectionViewCell <IESLiveInnerFeedCellProtocol, IESLiveInnerFeedPreloadCellProtocol> {
    BOOL _isLoaded;
    BOOL _audienceVCIsInReuse;
    BOOL _preloadMountCell;
    BOOL _enterRoomComplete;
    BOOL _scrollEnd;
    IESLiveInnerFeedLiveRoomItemModel *_itemModel;
    IESLiveBackgroundView *_backgroundImageView;
    IESLiveDynamicBackgroundUpdater *_backgroundUpdater;
    HTSLiveAudienceControllerFactory *_roomFactory;
    HTSLiveAudienceViewController *_audienceVC;
    UIViewController *_finishViewController;
    HTSEventContext *_eventContext;
    long long _index;
    long long _preloadType;
    IESLiveInnerPlayerStreamPreloader *_playStreamPreloader;
    IESLiveInnerFeedLiveRoomAudienceDelegateImpl *_audienceDelegateImpl;
    IESLiveEnterRoomAisle *_roomAisle;
    double _scrollDraggingEndTime;
}

@property (retain, nonatomic) IESLiveInnerFeedLiveRoomItemModel *itemModel;
@property (retain, nonatomic) IESLiveBackgroundView *backgroundImageView;
@property (retain, nonatomic) IESLiveDynamicBackgroundUpdater *backgroundUpdater;
@property (retain, nonatomic) HTSLiveAudienceControllerFactory *roomFactory;
@property (retain, nonatomic) HTSLiveAudienceViewController *audienceVC;
@property (retain, nonatomic) UIViewController *finishViewController;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) long long index;
@property (nonatomic) long long preloadType;
@property (nonatomic) BOOL isLoaded;
@property (nonatomic) BOOL audienceVCIsInReuse;
@property (retain, nonatomic) IESLiveInnerPlayerStreamPreloader *playStreamPreloader;
@property (retain, nonatomic) IESLiveInnerFeedLiveRoomAudienceDelegateImpl *audienceDelegateImpl;
@property (nonatomic) BOOL preloadMountCell;
@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (nonatomic) BOOL enterRoomComplete;
@property (nonatomic) BOOL scrollEnd;
@property (nonatomic) double scrollDraggingEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)itemModel;
- (void)setItemModel:(id)arg0;
- (void)setPreloadType:(long long)arg0;
- (void)setEventContext:(id)arg0;
- (id)audienceVC;
- (void)setAudienceVC:(id)arg0;
- (void)didEndDisplayCell;
- (id)roomAisle;
- (void)setRoomAisle:(id)arg0;
- (void)setBackgroundUpdater:(id)arg0;
- (void)p_trackLiveShow;
- (void)updateWithItemModel:(id)arg0;
- (void)preloadCell;
- (id)backgroundUpdater;
- (void)mountCell;
- (void)unMountCell:(long long)arg0;
- (void)scrollWillEndPreMountCell;
- (void)scrollDidEndMountCell;
- (BOOL)canPreloadEnterRoom;
- (void)probePlayerStream;
- (void)clearPreloadCellInfo;
- (id)getAttchedAudienceViewControllerPageContext;
- (id)audienceDelegateImpl;
- (id)roomFactory;
- (void)setRoomFactory:(id)arg0;
- (void)setAudienceDelegateImpl:(id)arg0;
- (void)showFinishVCWithParam:(id)arg0 completionBlock:(id /* block */)arg1;
- (BOOL)preloadMountCell;
- (void)setPreloadMountCell:(BOOL)arg0;
- (void)setEnterRoomComplete:(BOOL)arg0;
- (void)setScrollEnd:(BOOL)arg0;
- (id)p_buildEventContextWithItemModel:(id)arg0;
- (void)_updateBackgoundImage:(id)arg0 defaultImage:(id)arg1;
- (void)createStreamPreloaderIfNeeded;
- (id)playStreamPreloader;
- (BOOL)isInShowEventWhiteList;
- (void)p_trackHideLast;
- (void)p_trackRecPlay;
- (void)enterRoomWithPlayer:(id)arg0 pageContext:(id)arg1 monitorContext:(id)arg2;
- (void)setAudienceVCIsInReuse:(BOOL)arg0;
- (void)clearAudienceVC:(BOOL)arg0;
- (void)cancelProbePlayerStream;
- (unsigned long long)getLandscapeScene;
- (BOOL)scrollEnd;
- (void)checkAudienceBecomeNewInstance;
- (void)setFinishViewController:(id)arg0;
- (id)finishViewController;
- (void)setScrollDraggingEndTime:(double)arg0;
- (void)tracePreEnterInterval;
- (double)scrollDraggingEndTime;
- (BOOL)enterRoomComplete;
- (BOOL)audienceVCIsInReuse;
- (BOOL)isProbeEnable:(id)arg0;
- (id)attachedViewController;
- (long long)currentAudienceVCComponentLoadState;
- (void)setPlayStreamPreloader:(id)arg0;
- (void)setIndex:(long long)arg0;
- (BOOL)isLoaded;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setIsLoaded:(BOOL)arg0;
- (long long)index;
- (id)eventContext;
- (void)prepareForReuse;
- (void)loadViews;
- (void)setBackgroundImageView:(id)arg0;
- (void)willDisplayCell;
- (BOOL)isMounted;
- (void)initData;
- (long long)preloadType;

@end
