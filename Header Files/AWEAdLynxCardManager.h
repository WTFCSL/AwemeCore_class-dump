//
//     Generated by private class-dump
//

@class AWEAdLynxCardView, NSArray, NSString, AWEAdLynxCardViewModel, AWEAwemeModel, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWECommerceComponentContext;

@interface AWEAdLynxCardManager : NSObject <AWECommerceComponentProtocol, AWEAdLynxCardManager> {
    BOOL _tryShowTraced;
    BOOL _promptViewIsShowing;
    BOOL _hasReset;
    id<AWECommerceComponentContext> _commerceContext;
    AWEAwemeModel *_aweme;
    UIViewController<AWEPlayInteractionViewControllerProtocol> *_interactionController;
    AWEAdLynxCardViewModel *_viewModel;
    AWEAdLynxCardView *_adLynxCardView;
    id /* block */ _gurdShowHandler;
    id /* block */ _nativeButtonFlashHandler;
    id /* block */ _adPromptviewShow;
    id /* block */ _adPromptviewHide;
    double _updatedBottomOffset;
    double _leftBottomOffset;
    NSArray *_leftElements;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionController;
@property (retain, nonatomic) AWEAdLynxCardViewModel *viewModel;
@property (retain, nonatomic) AWEAdLynxCardView *adLynxCardView;
@property (copy, nonatomic) id /* block */ gurdShowHandler;
@property (copy, nonatomic) id /* block */ nativeButtonFlashHandler;
@property (copy, nonatomic) id /* block */ adPromptviewShow;
@property (copy, nonatomic) id /* block */ adPromptviewHide;
@property (nonatomic) double updatedBottomOffset;
@property (nonatomic) BOOL tryShowTraced;
@property (nonatomic) BOOL promptViewIsShowing;
@property (nonatomic) double leftBottomOffset;
@property (retain, nonatomic) NSArray *leftElements;
@property (nonatomic) BOOL hasReset;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long playerStatus;

+ (BOOL)shouldShowAdLynxCard:(id)arg0;
+ (BOOL)shouldShowInteractiveAICard:(id)arg0;
+ (BOOL)blockButtonShow:(id)arg0;
+ (id)adLynxCardComponentWithModel:(id)arg0;
+ (void)loadLynxResourceIfNeeded:(id)arg0;
+ (void)traceAdLynxCardDataReceived:(id)arg0 withAwemeType:(long long)arg1;
+ (void)traceAdLynxCardAdTraceSelected:(id)arg0;
+ (void)traceAdLynxCardAdTraceTryShow:(id)arg0;
+ (void)traceAdLynxCardShowResult:(id)arg0 status:(long long)arg1;
+ (BOOL)canShowComponentWithContext:(id)arg0;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)setHide:(BOOL)arg0;
- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)richAwemeUpdateFromIndex:(long long)arg0 toIndex:(long long)arg1 method:(unsigned long long)arg2;
- (void)setupCardWithInteractionViewController:(id)arg0 model:(id)arg1;
- (BOOL)adLynxCardShowing;
- (id)adLynxCardView;
- (void)detectAbnormalDisplay;
- (void)setupCard;
- (id)commerceContext;
- (void)loadAdLynxView;
- (BOOL)tryShowTraced;
- (void)setTryShowTraced:(BOOL)arg0;
- (void)setGurdShowHandler:(id /* block */)arg0;
- (id /* block */)gurdShowHandler;
- (void)onPromptViewShow;
- (void)onPromptViewClose;
- (id)leftElements;
- (void)setLeftBottomOffset:(double)arg0;
- (void)setPromptViewIsShowing:(BOOL)arg0;
- (double)leftBottomOffset;
- (void)onAdLynxCardStatusChange:(long long)arg0;
- (void)addLynxCardView;
- (double)leftAndRightContainerBottomOffset;
- (double)updatedBottomOffset;
- (void)setUpdatedBottomOffset:(double)arg0;
- (void)processLynxCardFallbackedIfNeeded;
- (void)showButtonPhaseAnimation;
- (void)showCardPhaseAnimation;
- (void)leaveCardPhaseAnimation;
- (id /* block */)nativeButtonFlashHandler;
- (void)setNativeButtonFlashHandler:(id /* block */)arg0;
- (void)setAdLynxCardView:(id)arg0;
- (void)fallbackToNativeButton;
- (BOOL)promptViewIsShowing;
- (void)setLeftElements:(id)arg0;
- (BOOL)hasReset;
- (void)richAwemeUpdateFromIndex:(long long)arg0 toIndex:(long long)arg1 isByHand:(BOOL)arg2 isFullPage:(BOOL)arg3;
- (void)setCommerceContext:(id)arg0;
- (id /* block */)adPromptviewShow;
- (void)setAdPromptviewShow:(id /* block */)arg0;
- (id /* block */)adPromptviewHide;
- (void)setAdPromptviewHide:(id /* block */)arg0;
- (void)setHasReset:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)resume;
- (void).cxx_destruct;
- (void)setInteractionController:(id)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)startAnimation:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)interactionController;
- (id)viewModel;
- (void)layoutSubviews;
- (void)dealloc;
- (void)pause;
- (void)reset;
- (void)viewWillAppear;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
