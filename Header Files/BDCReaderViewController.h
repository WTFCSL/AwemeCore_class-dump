//
//     Generated by private class-dump
//

@class BDCReaderModel, NSString, NSArray, BDCRPageContext, BDCRPageControlManager, NSMutableArray, BDCReaderTapEvent, NSObject, BDCRPageViewController, UIViewController;
@protocol BDCReaderInsertViewProtocol;

@interface BDCReaderViewController : UIViewController <BDCRPageControlManagerDelegate, UIGestureRecognizerDelegate, BDCRScrollViewZoomEventDelegate, BDCRPageViewControllerDelegate, BDCRPageViewControllerDataSource, BDCRBouncePageViewControllerDataSource, BDCRBouncePageViewControllerDelegate, BDCRCollectionPageViewControllerDataSource, BDCReaderContext> {
    BOOL _isAppear;
    BOOL _isActive;
    BDCReaderModel *_readerModel;
    BDCRPageControlManager *_pageManager;
    BDCRPageViewController *_pageVC;
    NSMutableArray *_sections;
    NSObject<BDCReaderInsertViewProtocol> *_pageBounceViewObj;
    BDCRPageContext *_beginPageContext;
    BDCRPageContext *_endPageContext;
    BDCRPageContext *_halfPageContext;
    BDCRPageContext *_targetPageContext;
    double _pageEnterTime;
    NSObject<BDCReaderInsertViewProtocol> *_headerPageInsetViewObj;
    NSObject<BDCReaderInsertViewProtocol> *_footerPageInsetViewObj;
    unsigned long long _tapCount;
    BDCReaderTapEvent *_tapEvent;
    NSObject<BDCReaderInsertViewProtocol> *_loadingViewObj;
    NSObject<BDCReaderInsertViewProtocol> *_errorViewObj;
    NSArray *_insertedViewObjs;
    id /* block */ _bdcr_first_enter_duration;
}

@property (nonatomic) unsigned long long tapCount;
@property (retain, nonatomic) BDCReaderTapEvent *tapEvent;
@property (retain, nonatomic) NSObject<BDCReaderInsertViewProtocol> *loadingViewObj;
@property (retain, nonatomic) NSObject<BDCReaderInsertViewProtocol> *errorViewObj;
@property (copy, nonatomic) NSArray *insertedViewObjs;
@property (copy, nonatomic) id /* block */ bdcr_first_enter_duration;
@property (retain, nonatomic) BDCReaderModel *readerModel;
@property (retain, nonatomic) BDCRPageControlManager *pageManager;
@property (retain, nonatomic) BDCRPageViewController *pageVC;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) NSObject<BDCReaderInsertViewProtocol> *pageBounceViewObj;
@property (retain, nonatomic) BDCRPageContext *beginPageContext;
@property (retain, nonatomic) BDCRPageContext *endPageContext;
@property (retain, nonatomic) BDCRPageContext *halfPageContext;
@property (retain, nonatomic) BDCRPageContext *targetPageContext;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isActive;
@property (nonatomic) double pageEnterTime;
@property (readonly, nonatomic) NSArray *pageViewControllers;
@property (retain, nonatomic) NSObject<BDCReaderInsertViewProtocol> *headerPageInsetViewObj;
@property (retain, nonatomic) NSObject<BDCReaderInsertViewProtocol> *footerPageInsetViewObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BDCRPageContext *currentBeginPageContext;
@property (readonly, nonatomic) BDCRPageContext *currentPageContext;
@property (readonly, nonatomic) BDCRPageContext *currentEndPageContext;
@property (readonly, copy, nonatomic) NSArray *currentPageContexts;
@property (readonly, nonatomic) UIViewController *readerViewController;

- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (BOOL)bouncePageViewController:(id)arg0 shouldBeginBounceGesture:(id)arg1;
- (id)bouncePageViewController:(id)arg0 requestBounceAccessViewForDirection:(unsigned long long)arg1;
- (void)bouncePageViewController:(id)arg0 didBeginBounceDirection:(unsigned long long)arg1;
- (void)bouncePageViewControllerDidFinshAnimation:(id)arg0;
- (long long)numberOfSectionsInPageViewController:(id)arg0;
- (void)pageViewControllerDidReloadData:(id)arg0;
- (void)pageViewController:(id)arg0 didScrollIndexPath:(id)arg1;
- (long long)pageViewController:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (double)pageViewController:(id)arg0 heightForItemAtIndexPath:(id)arg1;
- (id)pageViewController:(id)arg0 viewControllerForItemAtIndexPath:(id)arg1;
- (void)pageViewControllerDidScroll:(id)arg0;
- (void)pageViewControllerWillBeginDragging:(id)arg0;
- (BOOL)pageViewController:(id)arg0 shouldBeginScrollGesture:(id)arg1;
- (void)onScrollViewZoom;
- (id)loadingViewObj;
- (void)setLoadingViewObj:(id)arg0;
- (void)hideLoading;
- (id)readerModel;
- (void)onDataCallbackWithPreChapterContent:(id)arg0 chapterId:(id)arg1 error:(id)arg2;
- (void)onDataCallbackWithChapterContent:(id)arg0 chapterId:(id)arg1 error:(id)arg2;
- (void)setReaderModel:(id)arg0;
- (BOOL)shouldShowFooterContentInsetViewWhenContentIsEmpty;
- (id)initWithReaderModel:(id)arg0;
- (void)configCurrentPageContext;
- (BOOL)isScrollMode;
- (void)configShowRate;
- (void)configBeginPageContext;
- (void)configEndPageContext;
- (void)configHalfPageContext;
- (id)vcForPageContext:(id)arg0;
- (id)pageVC;
- (void)addUIApplicationObserver;
- (void)bdcr_reportReadTime;
- (void)setBdcr_first_enter_duration:(id /* block */)arg0;
- (void)recordPageEnterTimeIfNeed;
- (id)errorViewObj;
- (void)setErrorViewObj:(id)arg0;
- (void)hideComicsInfoLoadError;
- (id)pageManager;
- (void)showComicsInfoLoadError:(id)arg0;
- (void)bdcr_jumpWithOpenParam:(id)arg0 extra:(id)arg1;
- (void)loadPageVC;
- (void)loadInsertViews;
- (id)insertedViewObjs;
- (void)removeInsertViews;
- (void)setInsertedViewObjs:(id)arg0;
- (void)setPageVC:(id)arg0;
- (void)onReaderTap:(id)arg0;
- (id)currentPageContext;
- (void)redirectToPage:(id)arg0;
- (void)onReaderSingleTapWithTapEvent:(id)arg0;
- (void)onReaderDoubleTapWithTapEvent:(id)arg0;
- (id)getChapterIdWithOpenParam:(id)arg0;
- (void)scrollToPageIndex:(unsigned long long)arg0 chapterId:(id)arg1;
- (void)configChapterContentByChapterId:(id)arg0 pageIndex:(unsigned long long)arg1;
- (void)appendPreChapterContent:(id)arg0;
- (void)appendNextChapterContent:(id)arg0;
- (id)headerPageInsetViewObj;
- (id)footerPageInsetViewObj;
- (void)bdcr_configReaderChange;
- (void)bdcr_switchToChapterWithChapterID:(id)arg0 pageIndex:(unsigned long long)arg1;
- (void)redirectToCurrentPage;
- (void)replaceChapterContentByChapterId:(id)arg0 needRedirect:(BOOL)arg1;
- (id /* block */)bdcr_first_enter_duration;
- (void)onUIApplicationDidBecomeActiveNotification:(id)arg0;
- (void)onUIApplicationWillResignActiveNotification:(id)arg0;
- (id)targetPageContext;
- (void)setPageEnterTime:(double)arg0;
- (id)halfPageContext;
- (double)pageEnterTime;
- (id)collectionPageViewControllerRequestHeaderContentInsetView:(id)arg0;
- (id)collectionPageViewControllerRequestFooterContentInsetView:(id)arg0;
- (void)bdcr_configReaderPageMode:(unsigned long long)arg0;
- (void)bdcr_configReaderThemeChange:(id)arg0;
- (void)bdcr_reloadComicsInfo;
- (void)bdcr_switchToPrePage;
- (void)bdcr_switchToNextPage;
- (void)bdcr_switchToPageWithIndex:(long long)arg0;
- (void)bdcr_switchToPageWithIndex:(long long)arg0 inCurrentChapter:(id)arg1;
- (void)bdcr_switchToPreChapter;
- (void)bdcr_switchToNextChapter;
- (void)bdcr_refetchChapterContentWithChapterId:(id)arg0 extra:(id)arg1 redirect:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)bdcr_refreshCurrentPageInfo;
- (id)bdcr_chapterContentFromCache:(id)arg0;
- (id)bdcr_chapterContentsFromCache;
- (void)bdcr_cleanChapterConetntCacheWithChapterId:(id)arg0;
- (void)bdcr_reloadPageContext:(id)arg0;
- (void)bdcr_reprocessPageInfosWithChapterId:(id)arg0;
- (void)bdcr_stopCurrentScrollAnimation;
- (id)currentBeginPageContext;
- (id)currentEndPageContext;
- (id)currentPageContexts;
- (id)readerViewController;
- (void)removeUIApplicationObserver;
- (void)setPageManager:(id)arg0;
- (id)pageBounceViewObj;
- (void)setPageBounceViewObj:(id)arg0;
- (id)beginPageContext;
- (void)setBeginPageContext:(id)arg0;
- (id)endPageContext;
- (void)setEndPageContext:(id)arg0;
- (void)setHalfPageContext:(id)arg0;
- (void)setTargetPageContext:(id)arg0;
- (void)setHeaderPageInsetViewObj:(id)arg0;
- (void)setFooterPageInsetViewObj:(id)arg0;
- (id)sections;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (unsigned long long)tapCount;
- (void)setTapEvent:(id)arg0;
- (long long)preferredStatusBarStyle;
- (id)tapEvent;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (BOOL)isActive;
- (void)setSections:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTapCount:(unsigned long long)arg0;
- (void)setupUI;
- (id)pageViewControllers;
- (void)setupData;
- (void)showLoading;

@end