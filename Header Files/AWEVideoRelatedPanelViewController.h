//
//     Generated by private class-dump
//

@class AWEVideoDescriptionPanelViewModel, AWEFeedRVSingleListSlideUpGuideManager, AWEPlayInteractionViewController, DUXPartialSheet, UIView, AWEPlayInteractionContext, AWEVideoRelatedContainerViewController, NSString, AWEFeedPanelBottomInteractionZone, NSTimer, AWEFeedCollectionContainerContext, AWERelatedRecomendListDataController, AWEAwemeModel, AWEVideoRelatedPanelTopBarView, UIScrollView, AWEVideoRelatedPanelManager;

@interface AWEVideoRelatedPanelViewController : UIViewController <UIScrollViewDelegate, AWEFeedCollectionContainerViewControllerDelegate, AWEListSectionControllerDelegate, AWEFeedCollectionContainerRelatedRecommendSectionDelegate, UINavigationControllerDelegate, AWEVideoRelatedContainerPanelDelegate, AWEFeedRVSingleListSlideUpGuideManagerDelegate> {
    BOOL _hasEnterFullPage;
    BOOL _relatedSectionVisibleInPanel;
    BOOL _closeTypeSwipeVertical;
    BOOL _needStartToPlayAuto;
    BOOL _shouldTrackForSlide;
    BOOL _viewIsOnScreen;
    BOOL _hasFirstVideoStartPlay;
    AWEPlayInteractionContext *_context;
    NSString *_referString;
    AWEAwemeModel *_model;
    AWEPlayInteractionViewController *_container;
    DUXPartialSheet *_sheet;
    AWEVideoRelatedPanelManager *_panelManager;
    UIScrollView *_contentScrollView;
    AWEFeedRVSingleListSlideUpGuideManager *_guideManager;
    long long _slideUpToTopType;
    AWERelatedRecomendListDataController *_relatedRecommedDataController;
    AWEVideoRelatedContainerViewController *_relatedContainer;
    AWEFeedCollectionContainerContext *_panelContext;
    AWEFeedPanelBottomInteractionZone *_bottomInteractionZone;
    UIView *_bottomInteractionZoneContentView;
    AWEVideoRelatedPanelTopBarView *_topBarView;
    double _enterTimestamp;
    NSTimer *_secondRequestTimer;
    AWEVideoDescriptionPanelViewModel *_panelViewModel;
    double _stayTimeStamp;
    UIView *_gradientBackground;
    double _headerHeight;
}

@property (retain, nonatomic) AWERelatedRecomendListDataController *relatedRecommedDataController;
@property (retain, nonatomic) AWEVideoRelatedContainerViewController *relatedContainer;
@property (retain, nonatomic) AWEFeedCollectionContainerContext *panelContext;
@property (retain, nonatomic) AWEFeedPanelBottomInteractionZone *bottomInteractionZone;
@property (retain, nonatomic) UIView *bottomInteractionZoneContentView;
@property (retain, nonatomic) AWEVideoRelatedPanelTopBarView *topBarView;
@property (nonatomic) double enterTimestamp;
@property (nonatomic) BOOL closeTypeSwipeVertical;
@property (retain, nonatomic) NSTimer *secondRequestTimer;
@property (retain, nonatomic) AWEVideoDescriptionPanelViewModel *panelViewModel;
@property (weak, nonatomic) UIScrollView *contentScrollView;
@property (nonatomic) BOOL needStartToPlayAuto;
@property (nonatomic) BOOL shouldTrackForSlide;
@property (nonatomic) BOOL viewIsOnScreen;
@property (nonatomic) double stayTimeStamp;
@property (retain, nonatomic) UIView *gradientBackground;
@property (nonatomic) BOOL hasFirstVideoStartPlay;
@property (nonatomic) double headerHeight;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPlayInteractionViewController *container;
@property (weak, nonatomic) DUXPartialSheet *sheet;
@property (weak, nonatomic) AWEVideoRelatedPanelManager *panelManager;
@property (nonatomic) BOOL hasEnterFullPage;
@property (nonatomic) BOOL relatedSectionVisibleInPanel;
@property (retain, nonatomic) AWEFeedRVSingleListSlideUpGuideManager *guideManager;
@property (nonatomic) long long slideUpToTopType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (void)listDidReloadDataWithCollectionView:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)sectionViewModels;
- (double)enterTimestamp;
- (void)setEnterTimestamp:(double)arg0;
- (void)partialSheetDidDismiss:(id)arg0;
- (void)partialSheet:(id)arg0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 withUserInteraction:(BOOL)arg2;
- (void)partialSheetWillExpanded:(id)arg0;
- (void)partialSheetWillDismiss:(id)arg0;
- (id)initWithDataController:(id)arg0;
- (id)panelManager;
- (id)guideManager;
- (void)setGuideManager:(id)arg0;
- (void)setPanelManager:(id)arg0;
- (id)panelViewModel;
- (void)videoStartPlay;
- (void)setPanelViewModel:(id)arg0;
- (void)addGradientBackground;
- (void)detailVCWillPopToFeed;
- (void)playerWillStartPlay;
- (BOOL)hasEnterFullPage;
- (BOOL)isRelatedSectionVisible;
- (id)gradientBackground;
- (void)setGradientBackground:(id)arg0;
- (id)relatedRecommedDataController;
- (void)setRelatedRecommedDataController:(id)arg0;
- (double)stayTimeStamp;
- (void)setStayTimeStamp:(double)arg0;
- (void)trackForStayTime;
- (void)trackForPanelClose:(long long)arg0;
- (id)bottomInteractionZoneContentView;
- (id)relatedContainer;
- (void)setupBottomInteractZone;
- (void)setupRelatedContainer;
- (id)panelContext;
- (void)setBottomInteractionZone:(id)arg0;
- (id)bottomInteractionZone;
- (void)setBottomInteractionZoneContentView:(id)arg0;
- (void)relatedPanelDismiss;
- (BOOL)enterFullPage;
- (void)enterFullPageForClick:(id /* block */)arg0;
- (void)setRelatedContainer:(id)arg0;
- (void)setPanelContext:(id)arg0;
- (BOOL)relatedSectionVisibleInPanel;
- (void)foldedFromFullScreen;
- (void)willEnterFullPageByClickVideo;
- (void)didChangeFrameToFullScreen;
- (void)upSlideOptimizeForPanelExpandWithTransaction:(BOOL)arg0;
- (void)videoStop;
- (id)getLastPlayModel;
- (void)partialSheetWillShowUnModal:(id)arg0;
- (double)interactionZoneHeight;
- (void)partialSheetWillFolded:(id)arg0;
- (void)partialSheetDidFolded:(id)arg0;
- (void)trackForStayTimeFromWillResignActiveNotification;
- (void)resetTimeStamp;
- (void)setNeedStartToPlayAuto:(BOOL)arg0;
- (void)setShouldTrackForSlide:(BOOL)arg0;
- (void)showSlideUpGuideButtonIfNeeded;
- (void)setViewIsOnScreen:(BOOL)arg0;
- (void)setCloseTypeSwipeVertical:(BOOL)arg0;
- (void)addRequestTimer;
- (void)removeRequestTimer;
- (void)setHasFirstVideoStartPlay:(BOOL)arg0;
- (BOOL)closeTypeSwipeVertical;
- (BOOL)needStartToPlayAuto;
- (BOOL)shouldTrackForSlide;
- (void)trackForSilde;
- (void)setHasEnterFullPage:(BOOL)arg0;
- (void)willExpandToFullScreen;
- (void)postSecondRequest;
- (void)setRelatedSectionVisibleInPanel:(BOOL)arg0;
- (BOOL)hasFirstVideoStartPlay;
- (void)setSlideUpToTopType:(long long)arg0;
- (BOOL)hasRecommendSection;
- (void)returnClick;
- (void)searchClick;
- (void)setSecondRequestTimer:(id)arg0;
- (id)secondRequestTimer;
- (BOOL)viewIsOnScreen;
- (long long)slideUpToTopType;
- (void)setUpTopBarView;
- (id)container;
- (void)setModel:(id)arg0;
- (void)didMoveToParentViewController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setContainer:(id)arg0;
- (double)headerViewHeight;
- (void)setup;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)context;
- (double)headerHeight;
- (id)contentScrollView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setHeaderHeight:(double)arg0;
- (void)setContentScrollView:(id)arg0;
- (id)topBarView;
- (void)setTopBarView:(id)arg0;
- (id)sheet;
- (id)layoutConfig;
- (void)setSheet:(id)arg0;

@end
