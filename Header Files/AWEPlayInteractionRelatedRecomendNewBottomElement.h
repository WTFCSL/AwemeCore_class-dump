//
//     Generated by private class-dump
//

@class AWERelatedRecomendListDataController, NSTimer, AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionRelatedRecomendNewBottomElement : AWEPlayInteractionNewBottomElement {
    BOOL _forbidPanelShow;
    BOOL _hasPreloadData;
    AWERelatedRecomendListDataController *_dataController;
    AWEAntiAddictedNoticeBarView *_relatedBarView;
    NSTimer *_clearPreloadTimer;
}

@property (nonatomic) BOOL forbidPanelShow;
@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *relatedBarView;
@property (retain, nonatomic) AWERelatedRecomendListDataController *dataController;
@property (retain, nonatomic) NSTimer *clearPreloadTimer;
@property (nonatomic) BOOL hasPreloadData;

+ (Class)aAWEPadModuleAdapterClass;

- (void)initializeElement;
- (id)aAWEPadModuleAdapter;
- (void)setDataController:(id)arg0;
- (unsigned long long)elementVisibleType;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)setupEvent;
- (void)loadDataController;
- (void)updateBottomBarTitle;
- (id)clearPreloadTimer;
- (void)setClearPreloadTimer:(id)arg0;
- (void)configClearTimer;
- (void)cancelClearTimer;
- (void)viewController_viewDidAppear;
- (void)layoutElementView;
- (void)viewController_viewWillDisappear;
- (BOOL)shouldAppearWithData:(id)arg0;
- (void)didClickCollectionButton:(id)arg0;
- (BOOL)shouldActiveWithData:(id)arg0 context:(id)arg1;
- (void)trackBarShow;
- (void)trackBarClick;
- (id)trackParamsOnDisplay;
- (BOOL)shouldShowRelatedBarWithModel:(id)arg0;
- (BOOL)showRelatedPanelIfNeeded;
- (void)setForbidPanelShow:(BOOL)arg0;
- (BOOL)hasPreloadData;
- (void)requestRelatedPanelData:(id /* block */)arg0;
- (void)setHasPreloadData:(BOOL)arg0;
- (void)requestRelatedPanelDataOnTitleChange;
- (void)showRelatedBottomBar;
- (id)relatedBarView;
- (void)updateRelatedBarView;
- (void)cacheCurrentDataController;
- (BOOL)forbidPanelShow;
- (void)hideRelatedBottomBar;
- (void)timerHandler:(BOOL)arg0;
- (void)setRelatedBarView:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (id)identifier;
- (void)timerHandler;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)tapped;
- (id)dataController;
- (void)viewWillDisappear;

@end
