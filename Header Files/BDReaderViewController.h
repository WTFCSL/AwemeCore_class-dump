//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, BDReaderOpenParameters, BDReaderPageContext, BDPageViewController, BDNewScrollViewController, UIViewController, BDReaderModel, BDReaderLineContext, UIView, NSMutableArray, NSString, BDReaderPageChangeInfo, NSOperation, NSTimer, UILongPressGestureRecognizer, NSObject, NSArray, BDRScrollView, BDPageControllManager;
@protocol BDReaderInsertViewProtocol;

@interface BDReaderViewController : UIViewController <BDReaderActionDelegate, BDReaderAbstractContentVCProtocol, BDPageViewControllerDataSource, BDPageViewControllerDelegate, BDCurlViewControllerDelegate, BDNewScrollViewControllerDelegate, BDNewScrollViewControllerDelegate, BDPageControllDelegate, BDRScrollViewDelegate, BDReaderAbstractContentVCProtocol, UIGestureRecognizerDelegate> {
    BOOL _enableFastClick;
    BOOL _hasAppeared;
    BOOL _needRefresh;
    BOOL _bouncesForward;
    BOOL _isVCAppear;
    NSOperation *_layoutChangeOperation;
    BDPageViewController *_pageVC;
    BDPageControllManager *_pageControllManager;
    BDReaderModel *_readerModel;
    BDReaderPageContext *_readerCurrentPageContext;
    BDReaderLineContext *_lineContext;
    NSTimer *_selectionStayTimer;
    UILongPressGestureRecognizer *_selectionLongPressGes;
    UIPanGestureRecognizer *_selectionPanGes;
    NSMutableArray *_loadingVCs;
    NSObject<BDReaderInsertViewProtocol> *_loadingViewObj;
    NSObject<BDReaderInsertViewProtocol> *_errorViewObj;
    BDReaderOpenParameters *_layoutParams;
    unsigned long long _reloadTime;
    unsigned long long _whiteScreenCheckTime;
    unsigned long long _enterTime;
    BDRScrollView *_boundsView;
    id _textPageRenderDidFinishNotificationObserver;
    id /* block */ _bdreader_first_enter_duration_block;
    double _stayTime;
    long long _originOrientation;
    NSArray *_insertedViewObjs;
    NSArray *_bouncesInsertedViewObjs;
    NSArray *_bottomBannerInsertedViewObjs;
    unsigned long long _pageChangeFrom;
    unsigned long long _pageActionType;
    BDReaderPageChangeInfo *_pageChangeInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *readerView;
@property (readonly, nonatomic) UIView *pageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id textPageRenderDidFinishNotificationObserver;
@property (copy, nonatomic) id /* block */ bdreader_first_enter_duration_block;
@property (nonatomic) double stayTime;
@property (nonatomic) BOOL bouncesForward;
@property (nonatomic) long long originOrientation;
@property (copy, nonatomic) NSArray *insertedViewObjs;
@property (copy, nonatomic) NSArray *bouncesInsertedViewObjs;
@property (copy, nonatomic) NSArray *bottomBannerInsertedViewObjs;
@property (nonatomic) BOOL isVCAppear;
@property (nonatomic) unsigned long long pageChangeFrom;
@property (nonatomic) unsigned long long pageActionType;
@property (retain, nonatomic) BDReaderPageChangeInfo *pageChangeInfo;
@property (weak, nonatomic) NSOperation *layoutChangeOperation;
@property (retain, nonatomic) BDPageViewController *pageVC;
@property (retain, nonatomic) BDPageControllManager *pageControllManager;
@property (retain, nonatomic) BDReaderModel *readerModel;
@property (readonly, nonatomic) UIViewController *curViewController;
@property (readonly, nonatomic) NSArray *curSubViewControllers;
@property (nonatomic) BOOL enableFastClick;
@property (readonly, nonatomic) BDReaderPageContext *readerCurrentPageContext;
@property (readonly, nonatomic) BDNewScrollViewController *scrollPageVC;
@property (retain, nonatomic) BDReaderLineContext *lineContext;
@property (retain, nonatomic) NSTimer *selectionStayTimer;
@property (retain, nonatomic) UILongPressGestureRecognizer *selectionLongPressGes;
@property (retain, nonatomic) UIPanGestureRecognizer *selectionPanGes;
@property (retain, nonatomic) NSMutableArray *loadingVCs;
@property (retain, nonatomic) NSObject<BDReaderInsertViewProtocol> *loadingViewObj;
@property (retain, nonatomic) NSObject<BDReaderInsertViewProtocol> *errorViewObj;
@property (retain, nonatomic) BDReaderOpenParameters *layoutParams;
@property (nonatomic) unsigned long long reloadTime;
@property (nonatomic) unsigned long long whiteScreenCheckTime;
@property (nonatomic) unsigned long long enterTime;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL needRefresh;
@property (retain, nonatomic) BDRScrollView *boundsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *readerView;
@property (readonly, nonatomic) UIView *pageView;

- (void)setNeedRefresh:(BOOL)arg0;
- (BOOL)scrollView:(id)arg0 shoundBeginGesture:(id)arg1;
- (id)loadingViewObj;
- (void)setLoadingViewObj:(id)arg0;
- (void)hideLoading;
- (id)readerModel;
- (void)setReaderModel:(id)arg0;
- (id)initWithReaderModel:(id)arg0;
- (id)pageVC;
- (id)errorViewObj;
- (void)setErrorViewObj:(id)arg0;
- (void)loadPageVC;
- (void)loadInsertViews;
- (id)insertedViewObjs;
- (void)removeInsertViews;
- (void)setInsertedViewObjs:(id)arg0;
- (void)setPageVC:(id)arg0;
- (id)readerActionGetAbstractContentVC;
- (unsigned long long)pageActionType;
- (id)chapterDataFromCache:(id)arg0;
- (id)readerCurrentViewController;
- (void)readerActionCleanChapterInfoCacheWithChapterId:(id)arg0;
- (void)readerActionRelayoutChapterInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)readerActionReloadChapterInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)readerActionCleanChapterInfoCache;
- (void)readerActionReloadBookInfoData;
- (void)readerActionReLayoutWithCurChapterInfo;
- (void)setOriginOrientation:(long long)arg0;
- (void)readerActionScrollForwardPage;
- (void)readerActionScrollBackwardPage;
- (BOOL)isBDReaderViewController:(id)arg0;
- (long long)originOrientation;
- (void)readerRemoveAllLineInfos;
- (void)readerActionRefreshCurrentPage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })readerCalculateLineInfoRect:(id)arg0 inView:(id)arg1;
- (void)readerAddLineInfos:(id)arg0 chapterId:(id)arg1;
- (id)readerCurrentPageContext;
- (id)readerCurrentPageContext;
- (void)readerScrollOffsetInScrollMode:(double)arg0 animated:(BOOL)arg1;
- (id)readerGetPageContextWithLineInfo:(id)arg0 chapterId:(id)arg1;
- (id)readerCurrentPageContexts;
- (void)readerAutoScrollRate:(float)arg0;
- (void)readerAutoReadStart;
- (void)readerAutoReadPause;
- (void)readerActionManualJumpWithOpenParameters:(id)arg0;
- (id)readerGetReaderVisableLayoutLines;
- (id)readerGetPageContextAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)readerRemoveLineInfos:(id)arg0 chapterId:(id)arg1;
- (void)onConfigThemeChange:(id)arg0;
- (void)onConfigLayoutChange:(id)arg0;
- (void)onConfigPageModeChange:(unsigned long long)arg0;
- (id)readImageWithImgAtt:(id)arg0 chapterId:(id)arg1;
- (void)readerActionRefreshWithCurChapterInfoWithExtra:(id)arg0;
- (void)refreshCurrentPage:(id)arg0 extra:(id)arg1;
- (void)readerActionSetNeedRefreshWithCurChapterInfoWithExtra:(id)arg0;
- (BOOL)readerScrollIsDragging;
- (void)readerActionRefreshWithCurChapterInfo;
- (id)readerChapterInfoCacheList;
- (void)switchPageWithControlPageType:(unsigned long long)arg0;
- (void)onConfigPageModeChange:(unsigned long long)arg0 extra:(id)arg1;
- (void)reloadCurrentPageAndClearCacheWithExtra:(id)arg0;
- (void)onConfigLayoutChange:(id)arg0 extra:(id)arg1;
- (id)getPageContextWithVC:(id)arg0;
- (void)readerRemoveLineInfosInChapter:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateLineInfoRect:(id)arg0 inView:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateParaInfoTopRect:(id)arg0 inView:(id)arg1 pageContext:(id)arg2;
- (id)paraInfoAtPoint:(struct CGPoint { double x0; double x1; })arg0 inView:(id)arg1;
- (id)getReaderVisableLayoutLines;
- (id)getReaderPageContextLayoutLines:(id)arg0;
- (BOOL)containReaderVisableLayoutLinesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollOffsetInScrollMode:(double)arg0 animated:(BOOL)arg1;
- (void)scrollOffsetInScrollMode:(double)arg0 duration:(double)arg1;
- (BOOL)scrollIsDragging;
- (BOOL)scrollIsDecelerating;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageContextOffset:(id)arg0;
- (void)readerActionReloadReaderUI;
- (void)readerActionRefreshPage:(id)arg0;
- (void)readerActionSetNeedRefreshWithCurChapterInfo;
- (void)readerActionRelayoutChapterInfo:(id)arg0 pageIndex:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)readerActionReLayoutChapterInfoWithChapterId:(id)arg0 completion:(id /* block */)arg1;
- (void)readerActionCleanChapterInfoCacheExcept:(id)arg0;
- (void)setContentVCInteractionEnabled:(BOOL)arg0;
- (void)onChapterTitleDataReady;
- (void)onConfigAutoReadRateChange:(float)arg0;
- (void)reloadCurrentPageAndClearCache;
- (id)readerCurrentViewControllers;
- (BOOL)isReaderAutoReadPaused;
- (void)readerCancelTextSelecting;
- (BOOL)isReaderTextSelecting;
- (void)readerActionRefreshLineInfos;
- (void)readerRemoveLineInfosInChapter:(id)arg0 exceptLineIds:(id)arg1;
- (void)readerReplaceLineInfos:(id)arg0 chapterId:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })readerCalculateParaInfoTopRect:(id)arg0 inView:(id)arg1 pageContext:(id)arg2;
- (id)readerGetParaInfoInView:(id)arg0 atPoint:(struct CGPoint { double x0; double x1; })arg1;
- (id)readerGetReaderLayoutLinesWithPageContext:(id)arg0;
- (id)readerGetReaderVisableLayoutLineWithPosition:(id)arg0;
- (id)readerGetVisableLayoutLinesWithStart:(unsigned long long)arg0 end:(unsigned long long)arg1;
- (BOOL)readerContainVisableLayoutLineInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)readerGetInsertViewObjsWithPageContext:(id)arg0;
- (id)readerGetContentInsertViewObjsWithPageContext:(id)arg0;
- (void)readerScrollOffsetInScrollMode:(double)arg0 duration:(double)arg1;
- (void)readerActionManualReportReadingTime;
- (void)readerActionResetReportReadingTime;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })readerPageContextOffset:(id)arg0;
- (struct CGPoint { double x0; double x1; })readerCurrentScrollOffset;
- (id)textVCInlocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)removePageVC;
- (void)addPageVC;
- (id)getPreviousVC:(id)arg0 extra:(id)arg1;
- (id)getNextVC:(id)arg0 extra:(id)arg1;
- (void)willBeginTransitionToViewController:(id)arg0;
- (void)makeViewsUserDisable:(id)arg0 enableAgain:(BOOL)arg1;
- (void)didFinishTransitionWithPreviousViewController:(id)arg0;
- (void)didCancelTransitionWithPreviousViewController:(id)arg0;
- (void)setViewController:(id)arg0 direction:(long long)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 extra:(id)arg2;
- (id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 extra:(id)arg2;
- (void)curlViewControllerPagerException:(id)arg0 cacheCount:(int)arg1;
- (BOOL)pageViewControllerShouldInterruptAction:(id)arg0;
- (BOOL)pageViewControllerShouldBeginTransitionAtPoint:(struct CGPoint { double x0; double x1; })arg0 translation:(struct CGPoint { double x0; double x1; })arg1 direction:(long long)arg2;
- (void)pageViewControllerWillBeginGesture:(id)arg0;
- (void)pageViewControllerWillBeginDragging:(id)arg0 direction:(long long)arg1;
- (void)pageViewController:(id)arg0 willTransitionToViewController:(id)arg1 fromViewController:(id)arg2;
- (void)pageViewController:(id)arg0 transitionFromViewController:(id)arg1 toViewController:(id)arg2 percent:(float)arg3;
- (void)pageViewController:(id)arg0 willCompleteTransitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)pageViewController:(id)arg0 willCancelTransitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewController:(id)arg2 currentViewController:(id)arg3 transitionCompleted:(BOOL)arg4;
- (void)newScrollViewControllerAutoScrollToEnd:(id)arg0;
- (BOOL)newScrollViewControllerShouldStartAutoScroll:(id)arg0;
- (void)newScrollViewControllerDidScroll:(id)arg0;
- (void)newScrollViewController:(id)arg0 willAppearVC:(id)arg1;
- (void)newScrollViewController:(id)arg0 didAppearVC:(id)arg1;
- (void)newScrollViewController:(id)arg0 willDisappearVC:(id)arg1;
- (void)newScrollViewController:(id)arg0 didDisappearVC:(id)arg1;
- (void)newScrollViewController:(id)arg0 didShowRateVC:(id)arg1 rate:(float)arg2;
- (void)newScrollViewControllerWillBeginDragging:(id)arg0;
- (void)newScrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (struct CGSize { double x0; double x1; })newScrollViewController:(id)arg0 getSizeForVC:(id)arg1;
- (BOOL)newScrollViewController:(id)arg0 shouldGetVCByScrollWithDir:(long long)arg1 viewController:(id)arg2;
- (BOOL)isVCFoscusTop:(id)arg0;
- (BOOL)isVCFoscusBottom:(id)arg0;
- (void)scrollHalf:(unsigned long long)arg0;
- (id)getOpenParamsWithLayoutPageData:(id)arg0;
- (id)getNextPageContextWithInsertPageData:(id)arg0;
- (id)getNextPageContextWithLayoutPageData:(id)arg0;
- (id)getNextPageContextWithOpenParams:(id)arg0;
- (id)getTargetVC:(id)arg0 toPageContext:(id)arg1 pageActionType:(unsigned long long)arg2 controlPageType:(unsigned long long)arg3 extra:(id)arg4;
- (id)getPrePageContextWithInsertPageData:(id)arg0;
- (id)getPrePageContextWithLayoutPageData:(id)arg0;
- (id)getPrePageContextWithOpenParams:(id)arg0;
- (void)showTargetVC:(id)arg0 controlPageType:(unsigned long long)arg1 animation:(BOOL)arg2;
- (id)createChangeInfo:(id)arg0 toPageContext:(id)arg1 pageActionType:(unsigned long long)arg2 controlPageType:(unsigned long long)arg3 extra:(id)arg4;
- (id)tryGetInsertedVC:(id)arg0 fromPageContext:(id)arg1 toPageContext:(id)arg2;
- (id)getPageContextWithInsertVC:(id)arg0 nextOpenParam:(id)arg1 preOpenParam:(id)arg2 chapterId:(id)arg3;
- (id)getVCWithPageContext:(id)arg0 layoutPageData:(id)arg1 pageChangeInfo:(id)arg2;
- (id)getVCWithPageContext:(id)arg0 openParam:(id)arg1 pageChangeInfo:(id)arg2;
- (id)getPageContextWithOpenParams:(id)arg0;
- (id)getPageContextWithLayoutPageData:(id)arg0;
- (BOOL)bouncesForward;
- (BOOL)readerScrollIsDecelerating;
- (void)setBouncesForward:(BOOL)arg0;
- (void)setStayTime:(double)arg0;
- (double)stayTime;
- (BOOL)enableFastClick;
- (void)setBdreader_first_enter_duration_block:(id /* block */)arg0;
- (void)initActionDelegateWithReaderModel:(id)arg0;
- (id)boundsView;
- (void)setupData:(BOOL)arg0;
- (void)applicationDidBecomeActiveNotification;
- (void)bdUIPageViewControllerExceptionNotification:(id)arg0;
- (void)reportStayDuration;
- (void)configStayTime;
- (id)bouncesInsertedViewObjs;
- (void)setBouncesInsertedViewObjs:(id)arg0;
- (void)loadPageControllManager;
- (BOOL)insertPageDataBeforeLoadBookWithOpenParam:(id)arg0;
- (void)hideErrorView;
- (void)onLoadingErrorWithView:(id)arg0;
- (id /* block */)bdreader_first_enter_duration_block;
- (void)onBookInfoReady;
- (void)startReallyInit;
- (id)pageControllManager;
- (void)loadBookInfo:(id /* block */)arg0;
- (id)curSubViewControllers;
- (void)willAppearVC:(id)arg0;
- (void)setIsVCAppear:(BOOL)arg0;
- (void)didShowRateVC:(id)arg0 rate:(float)arg1;
- (void)didAppearVC:(id)arg0;
- (void)didDisappearVC:(id)arg0;
- (void)willDisappearVC:(id)arg0;
- (void)setPageChangeFrom:(unsigned long long)arg0;
- (void)showPageWithOpenParam:(id)arg0 fromPageContext:(id)arg1 pageActionType:(unsigned long long)arg2 extra:(id)arg3;
- (void)setPageControllManager:(id)arg0;
- (void)setPageActionType:(unsigned long long)arg0;
- (unsigned long long)whiteScreenCheckTime;
- (void)setWhiteScreenCheckTime:(unsigned long long)arg0;
- (id)loadingVCs;
- (id)getVCWithPageContext:(id)arg0 pageChangeInfo:(id)arg1;
- (void)configNewScrollView:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2 animate:(BOOL)arg3;
- (id)layoutParams;
- (void)setLayoutParams:(id)arg0;
- (void)onDataCallbackWithChapterInfo:(id)arg0 chapterId:(id)arg1 error:(id)arg2;
- (BOOL)onFinishLayoutPage:(id)arg0 chapterData:(id)arg1;
- (id)scrollPageVC;
- (id)curViewController;
- (id)lineContext;
- (void)onTapReaderView:(id)arg0;
- (id)layoutChangeOperation;
- (void)setLayoutChangeOperation:(id)arg0;
- (void)setEnableFastClick:(BOOL)arg0;
- (void)setLineContext:(id)arg0;
- (id)selectionStayTimer;
- (void)setSelectionStayTimer:(id)arg0;
- (id)selectionLongPressGes;
- (void)setSelectionLongPressGes:(id)arg0;
- (id)selectionPanGes;
- (void)setSelectionPanGes:(id)arg0;
- (void)setLoadingVCs:(id)arg0;
- (unsigned long long)reloadTime;
- (void)setReloadTime:(unsigned long long)arg0;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg0;
- (void)setBoundsView:(id)arg0;
- (id)textPageRenderDidFinishNotificationObserver;
- (void)setTextPageRenderDidFinishNotificationObserver:(id)arg0;
- (id)bottomBannerInsertedViewObjs;
- (void)setBottomBannerInsertedViewObjs:(id)arg0;
- (BOOL)isVCAppear;
- (unsigned long long)pageChangeFrom;
- (id)pageChangeInfo;
- (void)setPageChangeInfo:(id)arg0;
- (id)textView;
- (BOOL)shouldAutorotate;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)needRefresh;
- (long long)preferredStatusBarUpdateAnimation;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)applicationDidEnterBackgroundNotification;
- (struct CGPoint { double x0; double x1; })currentScrollOffset;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)pageView;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)hasAppeared;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupUI;
- (id)readerView;
- (void)setHasAppeared:(BOOL)arg0;
- (void)setupLayout;
- (void)showLoading;

@end