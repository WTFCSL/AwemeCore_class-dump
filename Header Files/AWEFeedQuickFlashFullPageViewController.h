//
//     Generated by private class-dump
//

@class BDXBridgeEventSubscriber, AWEFeedQuickFlashFullPageView, UILabel, NSDictionary, NSObject, AWEQuickFlashListDataController, UIView, NSString, DUXLoadingParticleView, NSArray, AWEAwemeModel, AWEQuickFlashStickerModel, AWEFeedQuickFlashPanelStyleConfig, UIPanGestureRecognizer;
@protocol AFDPineappleRedPacketManagerProtocol, AWEFeedStickerDisplayDelegate;

@interface AWEFeedQuickFlashFullPageViewController : UIViewController <AWEFeedQuickFlashFullPageViewDelegate, UIGestureRecognizerDelegate, AWEPreviewable, AWEZoomTransitionOuterContextProvider, AWEQuickFlashListDataControllerDelegate, BDXContainerLifecycleProtocol, AWEFeedQuickFlashFullPageViewControllerProtocol> {
    BOOL _isFromJSBridge;
    BOOL _canLoadMore;
    BOOL _isFavoriteRequestOnAir;
    BOOL _hasMore;
    BOOL _hasInsertFeedVideo;
    AWEAwemeModel *awemeModel;
    NSString *enterFrom;
    NSDictionary *logExtraDict;
    NSDictionary *activicyDic;
    NSDictionary *trackContext;
    id /* block */ dismissBlock;
    AWEFeedQuickFlashPanelStyleConfig *styleConfig;
    id<AWEFeedStickerDisplayDelegate> hideDelegate;
    AWEQuickFlashStickerModel *_quickFlashStickerModel;
    NSObject<AFDPineappleRedPacketManagerProtocol> *_redPacketManager;
    AWEFeedQuickFlashFullPageView *_quickFlashFullPageView;
    DUXLoadingParticleView *_loadingView;
    NSArray *_fullPageModelList;
    NSArray *_tagList;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILabel *_hintText;
    UIView *_errorView;
    AWEQuickFlashListDataController *_quickFlashListDataController;
    UIView *_shadowView;
    NSString *_schema;
    BDXBridgeEventSubscriber *_subscriber;
    long long _cursor;
    double _fullPageTime;
    double _hasUploadedDuration;
}

@property (retain, nonatomic) NSObject<AFDPineappleRedPacketManagerProtocol> *redPacketManager;
@property (retain, nonatomic) AWEFeedQuickFlashFullPageView *quickFlashFullPageView;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) NSArray *fullPageModelList;
@property (retain, nonatomic) NSArray *tagList;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UILabel *hintText;
@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) AWEQuickFlashListDataController *quickFlashListDataController;
@property (retain, nonatomic) UIView *shadowView;
@property (nonatomic) BOOL canLoadMore;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL isFavoriteRequestOnAir;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasInsertFeedVideo;
@property (nonatomic) double fullPageTime;
@property (nonatomic) double hasUploadedDuration;
@property (nonatomic) BOOL isFromJSBridge;
@property (retain, nonatomic) AWEQuickFlashStickerModel *quickFlashStickerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) NSDictionary *activicyDic;
@property (copy, nonatomic) NSDictionary *trackContext;
@property (retain, nonatomic) AWEFeedQuickFlashPanelStyleConfig *styleConfig;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (weak, nonatomic) id<AWEFeedStickerDisplayDelegate> hideDelegate;

- (id)awemeModel;
- (void)containerOnShow:(id)arg0 sourceParam:(id)arg1;
- (void)containerOnHide:(id)arg0 sourceParam:(id)arg1;
- (void)containerWillStartLoading:(id)arg0;
- (void)containerDidFirstScreen:(id)arg0;
- (void)containerDidClose:(id)arg0;
- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (void)setEnterFrom:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)enterFrom;
- (void)showOnView:(id)arg0 animated:(BOOL)arg1;
- (void)addNotifications;
- (id)tagList;
- (void)setTagList:(id)arg0;
- (id)hintText;
- (void)preloadWithSchema:(id)arg0;
- (void)prefetchWithSchema:(id)arg0;
- (BOOL)canLoadMore;
- (id)quickFlashStickerModel;
- (void)setQuickFlashStickerModel:(id)arg0;
- (id)previewingViewControllerForView:(id)arg0 atPoint:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForView:(id)arg0 atPoint:(struct CGPoint { double x0; double x1; })arg1;
- (void)favoriteItemChanged:(id)arg0;
- (void)backButtonDidClicked:(id)arg0;
- (void)onAwemeDeleteNotification:(id)arg0;
- (void)setStyleConfig:(id)arg0;
- (void)favoriteButtonDidClicked:(id)arg0;
- (id)styleConfig;
- (void)closeButtonDidClicked:(id)arg0;
- (id)fullPageModelList;
- (void)trackWillJumpToRecorderWithModel:(id)arg0;
- (void)jumpToVideoListWithDefaultVideoID:(long long)arg0;
- (void)didSelectRecommendTitleAtIndex:(long long)arg0;
- (void)fetchFullPageModelList;
- (void)trackRecommandTagShowWithIndex:(long long)arg0;
- (void)setFullPageModelList:(id)arg0;
- (void)jumpToFlashback;
- (void)joinQuickFlashClickedisNewQuickFlash:(BOOL)arg0;
- (void)setQuickFlashListDataController:(id)arg0;
- (id)quickFlashListDataController;
- (void)setCanLoadMore:(BOOL)arg0;
- (void)setFullPageTime:(double)arg0;
- (id)quickFlashFullPageView;
- (void)trackInfoWithEvent:(id)arg0 Model:(id)arg1 Track:(id)arg2;
- (void)panContentView:(id)arg0;
- (void)setupRefreshHeaderAndFooter;
- (id)activicyDic;
- (id)redPacketManager;
- (id)hideDelegate;
- (double)hasUploadedDuration;
- (double)fullPageTime;
- (void)setHasUploadedDuration:(double)arg0;
- (void)p_dismiss;
- (void)bgTapAction:(id)arg0;
- (void)rankListButtonDidClicked:(id)arg0;
- (id)basicTrackInfoFromTag:(BOOL)arg0 isNew:(BOOL)arg1;
- (BOOL)isFavoriteRequestOnAir;
- (void)setIsFavoriteRequestOnAir:(BOOL)arg0;
- (void)entureLoginWithFavoriteFlashMobWithCompletion:(id /* block */)arg0;
- (void)fetchFullPageModelListForInpage:(id /* block */)arg0;
- (void)showShadowView;
- (void)setActivicyDic:(id)arg0;
- (void)setHideDelegate:(id)arg0;
- (double)panelViewHeight;
- (double)panelContentViewHeight;
- (BOOL)isFromJSBridge;
- (void)setIsFromJSBridge:(BOOL)arg0;
- (void)setRedPacketManager:(id)arg0;
- (void)setQuickFlashFullPageView:(id)arg0;
- (BOOL)hasInsertFeedVideo;
- (void)setHasInsertFeedVideo:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (long long)cursor;
- (void)setPanGestureRecognizer:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (id)panGestureRecognizer;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (id)shadowView;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void *)identifier;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setShadowView:(id)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)subscriber;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)schema;
- (void)removeNotifications;
- (void)setCursor:(long long)arg0;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setSubscriber:(id)arg0;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (void)setHintText:(id)arg0;

@end
