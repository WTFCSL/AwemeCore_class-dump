//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel, UIView, AWEFeedDynamicCardContext, AWEAwemePageContext;
@protocol AWEFeedDynamicContainerProtocol, AWEFeedDynamicCardManagerProtocol, AWEFeedHotSpotPanelDelegate;

@interface AWEDiscoverDFeedLynxPanelViewController : UIViewController <AWEBottomContainerViewLifeCycleDelegate, AWEFeedHotSpotPanelProtocol> {
    BOOL _isShowing;
    BOOL _isAppearing;
    BOOL _hasAppeard;
    BOOL _lynxPageLoadFail;
    BOOL _finishFirstRenderArticle;
    BOOL _isViewAppearCalled;
    BOOL _useNewLifeCycleMethod;
    id<AWEFeedHotSpotPanelDelegate> _panelDelegate;
    NSString *_referString;
    AWEAwemePageContext *_outerPageContext;
    UIView<AWEFeedDynamicContainerProtocol> *_lynxContainer;
    id<AWEFeedDynamicCardManagerProtocol> _cardManager;
    AWEFeedDynamicCardContext *_cardContext;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) UIView<AWEFeedDynamicContainerProtocol> *lynxContainer;
@property (retain, nonatomic) id<AWEFeedDynamicCardManagerProtocol> cardManager;
@property (retain, nonatomic) AWEFeedDynamicCardContext *cardContext;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isAppearing;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL hasAppeard;
@property (nonatomic) BOOL lynxPageLoadFail;
@property (nonatomic) BOOL finishFirstRenderArticle;
@property (nonatomic) BOOL isViewAppearCalled;
@property (nonatomic) BOOL useNewLifeCycleMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEFeedHotSpotPanelDelegate> panelDelegate;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEAwemePageContext *outerPageContext;

+ (BOOL)shouldMonitorForArticleLynx:(id)arg0;

- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)setIsShowing:(BOOL)arg0;
- (void)setReferString:(id)arg0;
- (double)topGradientHeight;
- (id)outerPageContext;
- (void)setOuterPageContext:(id)arg0;
- (id)cardContext;
- (void)setCardContext:(id)arg0;
- (id)lynxContainer;
- (void)onApplicationDidChangeStatusBarOrientation:(id)arg0;
- (void)setLynxContainer:(id)arg0;
- (id)panelDelegate;
- (void)setPanelDelegate:(id)arg0;
- (void)videoWillPlay;
- (void)videoWillStop;
- (void)videoWillPause;
- (void)videoWillReset;
- (void)videoWillLoopPlay;
- (void)onlySendPlayEvent;
- (id)currentLynxContainerView;
- (id)currentDynamicContainer;
- (void)updateWithModel:(id)arg0 extraInfo:(id)arg1;
- (void)containerViewDidFinishLoadWithURL:(id)arg0;
- (void)containerViewDidLoadFailedWithURL:(id)arg0 error:(id)arg1;
- (void)handleAppBecomeActive;
- (BOOL)useNewLifeCycleMethod;
- (void)setUseNewLifeCycleMethod:(BOOL)arg0;
- (id)cardManager;
- (void)setCardManager:(id)arg0;
- (void)registerSubscriber;
- (BOOL)hasAppeard;
- (BOOL)isViewAppearCalled;
- (void)setIsViewAppearCalled:(BOOL)arg0;
- (void)setLynxPageLoadFail:(BOOL)arg0;
- (BOOL)finishFirstRenderArticle;
- (BOOL)disableSendEvent;
- (void)checkShouldUseNewLifeCycle;
- (void)setHasAppeard:(BOOL)arg0;
- (BOOL)lynxPageLoadFail;
- (BOOL)contentEmpty;
- (void)setFinishFirstRenderArticle:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setIsAppearing:(BOOL)arg0;
- (void)handleNotification:(id)arg0;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)model;
- (BOOL)isShowing;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)isAppearing;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (id)topGradientColor;
- (void)updateWithModel:(id)arg0;
- (void)handleAppWillResignActive;
- (void)willDisplay;

@end
