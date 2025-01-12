//
//     Generated by private class-dump
//

@class UIView, IESECTracker, NSString, IESECDurationHelper, IESECHighlightButton, IESECSKUViewModel, IESECSKUDetailContext, IESECSKUContentView;
@protocol IESECSKUBottomViewProtocol, IESECEmptyViewProtocol, IESECSKUViewDelegate, IESECSKUTopViewProtocol;

@interface IESECSKUView : UIView <IESECSKUBottomViewDelegate, IESECSKUContentViewDelegate, IESECSKUTopViewDelegate, IESECSKUFloatBannerViewDelegate, IESECHalfPageFloatContainerDelegate, IESECSKUViewProtocol> {
    BOOL _showedAddCartGuide;
    id<IESECSKUViewDelegate> _delegate;
    IESECSKUDetailContext *_detailContext;
    IESECTracker *_tracker;
    IESECSKUViewModel *_viewModel;
    UIView *_topFloatView;
    UIView<IESECSKUTopViewProtocol> *_topView;
    UIView<IESECSKUBottomViewProtocol> *_bottomView;
    IESECSKUContentView *_contentView;
    IESECHighlightButton *_closeButton;
    id<IESECEmptyViewProtocol> _errorView;
    UIView *_loadingView;
    UIView *_retryView;
    IESECDurationHelper *_stay;
    long long _panelShowState;
    UIView *_maskView;
    UIView *_panelContainer;
    NSString *_closeTimeStamp;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _wholeFrame;
}

@property (weak, nonatomic) id<IESECSKUViewDelegate> delegate;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECSKUViewModel *viewModel;
@property (retain, nonatomic) UIView *topFloatView;
@property (retain, nonatomic) UIView<IESECSKUTopViewProtocol> *topView;
@property (retain, nonatomic) UIView<IESECSKUBottomViewProtocol> *bottomView;
@property (retain, nonatomic) IESECSKUContentView *contentView;
@property (retain, nonatomic) IESECHighlightButton *closeButton;
@property (retain, nonatomic) id<IESECEmptyViewProtocol> errorView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView *retryView;
@property (retain, nonatomic) IESECDurationHelper *stay;
@property (nonatomic) long long panelShowState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } wholeFrame;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *panelContainer;
@property (retain, nonatomic) NSString *closeTimeStamp;
@property (nonatomic) BOOL showedAddCartGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailContext;
- (void)setDetailContext:(id)arg0;
- (id)retryView;
- (void)setRetryView:(id)arg0;
- (void)tapCloseButton;
- (void)tapMaskView;
- (void)configBtmTrackerV2;
- (void)configBtmTracker;
- (void)showWithAnimation:(id /* block */)arg0 completion:(id /* block */)arg1;
- (id)panelContainer;
- (void)setPanelContainer:(id)arg0;
- (void)dismissWithAnimation:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)confirmTapped;
- (void)container:(id)arg0 showResult:(BOOL)arg1;
- (void)updateSKUFromUpdatedSKUInfo:(id)arg0;
- (void)setupHybridEventSubscriber;
- (void)setupBTM;
- (long long)panelShowState;
- (void)setPanelShowState:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originPanelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalPanelFrame;
- (void)updateTopFloatBannerIfNeeded;
- (void)p_manageTopFloatViewToShow:(BOOL)arg0;
- (id)topFloatView;
- (void)setTopFloatView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })wholeFrame;
- (void)renewMaskViewAlpha;
- (void)renewPanelContainerHeight;
- (void)setWholeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupMasonry;
- (void)reloadSKUView;
- (void)skuSelectChanged:(id)arg0;
- (void)openCouponPanel;
- (void)openPOIListWithURLString:(id)arg0;
- (void)clickTradeInItem:(id)arg0;
- (id)stay;
- (void)setStay:(id)arg0;
- (void)soldOutCountDownDidFinish;
- (id)initWithDetailContext:(id)arg0;
- (void)floatBannerView:(id)arg0 didShowedContents:(id)arg1;
- (void)openURL:(id)arg0 withBTMToken:(id)arg1 buttonStatus:(long long)arg2;
- (void)trackCoverImageTapped;
- (void)openDetail;
- (void)loadSKUView;
- (void)skuDouSelectChanged:(id)arg0;
- (void)reloadSKUViewWithShowLoading:(BOOL)arg0 onEnter:(BOOL)arg1;
- (void)updateSKUWithUpdatedPOIInfo:(id)arg0;
- (id)fixEntranceInfoWithBCM:(id)arg0 entranceInfoKey:(id)arg1;
- (id)p_monitorPageShowPerformance;
- (void)monitorOpenSkuEndWithDuration:(double)arg0;
- (void)addSearchParamsToTrackParams:(id)arg0;
- (void)addSaaSParamsToTrackParams:(id)arg0;
- (BOOL)showedAddCartGuide;
- (BOOL)needShowAddCartGuide;
- (void)addCartGuidePopoverDialog;
- (void)setShowedAddCartGuide:(BOOL)arg0;
- (BOOL)showAddCartGuidePreCondition;
- (void)clossSKUPannel:(id)arg0;
- (void)setCloseTimeStamp:(id)arg0;
- (BOOL)showAddCartGuideFreqCondition;
- (id)closeTimeStamp;
- (void)p_addToCartWithBTMToken:(id)arg0;
- (void)doBottomActionWithType:(long long)arg0 completion:(id /* block */)arg1;
- (BOOL)p_handleSubActionIfNeeded;
- (id)configPriceInfoTrackerParams;
- (id)p_doBottomActionUpdatedTrackParams;
- (void)p_selectAction;
- (void)p_buynowAction:(id)arg0;
- (void)removeFromSuperview;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (void)reloadViews;
- (id)maskView;
- (void)setViewModel:(id)arg0;
- (id)contentView;
- (void)didMoveToWindow;
- (id)delegate;
- (id)viewModel;
- (void)updateConstraints;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)topView;
- (id)bottomView;
- (void)setTopView:(id)arg0;
- (void)setBottomView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (id)heightPercent;

@end
