//
//     Generated by private class-dump
//

@class UIStackView, IESLivePublicScreenViewModel, IESLivePublicScreenContainer, NSMutableDictionary, NSString;
@protocol IESLivePublicScreenViewDelegate;

@interface IESLivePublicScreenView : IESLiveMessageListView <IESLivePublicScreenService, IESLivePSComponentInteractQueueDelegate, IESLivePublicScreenLayoutSubscriber> {
    id /* block */ _updatePublicScreenContainerHeightBlock;
    IESLivePublicScreenViewModel *_viewModel;
    double _publicScreenHeight;
    double _publicScreenWidth;
    double _giftMaskViewHeight;
    double _publicScreenSetWidth;
    id<IESLivePublicScreenViewDelegate> _componentDelegate;
    UIStackView *_stackContainer;
    IESLivePublicScreenContainer *_topContainer;
    IESLivePublicScreenContainer *_bottomContainer;
    IESLivePublicScreenContainer *_outsideBottomContainer;
    NSMutableDictionary *_interactQueueMap;
    NSMutableDictionary *_insertDataSuccessCountDic;
    NSMutableDictionary *_insertDataSumCountDic;
    NSMutableDictionary *_insertQueueDataSuccessCountDic;
    NSMutableDictionary *_insertQueueDataSumCountDic;
}

@property (retain, nonatomic) IESLivePublicScreenViewModel *viewModel;
@property (nonatomic) double giftMaskViewHeight;
@property (nonatomic) double publicScreenHeight;
@property (nonatomic) double publicScreenWidth;
@property (nonatomic) double publicScreenSetWidth;
@property (weak, nonatomic) id<IESLivePublicScreenViewDelegate> componentDelegate;
@property (retain, nonatomic) UIStackView *stackContainer;
@property (retain, nonatomic) IESLivePublicScreenContainer *topContainer;
@property (retain, nonatomic) IESLivePublicScreenContainer *bottomContainer;
@property (retain, nonatomic) IESLivePublicScreenContainer *outsideBottomContainer;
@property (retain, nonatomic) NSMutableDictionary *interactQueueMap;
@property (retain, nonatomic) NSMutableDictionary *insertDataSuccessCountDic;
@property (retain, nonatomic) NSMutableDictionary *insertDataSumCountDic;
@property (retain, nonatomic) NSMutableDictionary *insertQueueDataSuccessCountDic;
@property (retain, nonatomic) NSMutableDictionary *insertQueueDataSumCountDic;
@property (copy, nonatomic) id /* block */ updatePublicScreenContainerHeightBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ieslive_topContainerConfig;
+ (id)ieslive_bottomContainerConfig;
+ (id)ieslive_outsideBottomContainerConfig;
+ (id)ieslive_componentConfig;

- (void)componentWillUnmount;
- (void)bindViewModel:(id)arg0;
- (id)topContainer;
- (void)setTopContainer:(id)arg0;
- (id)queryViewByType:(id)arg0;
- (double)topContainerHeight;
- (void)setStackContainer:(id)arg0;
- (id)stackContainer;
- (void)publicScreenLayoutChanged:(id)arg0 forType:(unsigned long long)arg1;
- (void)addPublicScreenComponent:(id)arg0;
- (void)addPublicScreenComponent:(id)arg0 isRealInsert:(BOOL)arg1;
- (void)addPublicScreenRawView:(id)arg0 targetContainer:(long long)arg1 viewType:(id)arg2 size:(struct CGSize { double x0; double x1; })arg3;
- (void)addPublicScreenComponent:(id)arg0 finished:(id /* block */)arg1;
- (void)removePublicScreenComponentWithType:(id)arg0 finished:(id /* block */)arg1;
- (void)removePublicScreenComponentWithType:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })queryConvertedMessageListRect;
- (void)setBlankPublicScreenComponentWithHeight:(double)arg0 viewType:(id)arg1;
- (void)setTopMaskHeight:(double)arg0;
- (void)addPublicScreenComponent:(id)arg0 withPublicScreenID:(id)arg1;
- (void)addPublicScreenComponent:(id)arg0 isRealInsert:(BOOL)arg1 withPublicScreenID:(id)arg2;
- (void)addPublicScreenRawView:(id)arg0 targetContainer:(long long)arg1 viewType:(id)arg2 size:(struct CGSize { double x0; double x1; })arg3 withPublicScreenID:(id)arg4;
- (void)addPublicScreenComponent:(id)arg0 finished:(id /* block */)arg1 withPublicScreenID:(id)arg2;
- (void)removePublicScreenComponentWithType:(id)arg0 finished:(id /* block */)arg1 withPublicScreenID:(id)arg2;
- (void)removePublicScreenComponentWithType:(id)arg0 withPublicScreenID:(id)arg1;
- (id)queryViewByType:(id)arg0 withPublicScreenID:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })queryConvertedMessageListRectWithPublicScreenID:(id)arg0;
- (void)addPublicScreenComponentWithConfigModel:(id)arg0;
- (void)updatePublicScreenComponentWithConfigModel:(id)arg0;
- (void)removePublicScreenComponentWithConfigModel:(id)arg0;
- (void)enableUpdateDataSource:(BOOL)arg0;
- (void)didAddToContainer;
- (void)startRefresh;
- (void)tapUnreadTipView;
- (void)refreshUnreadTipView;
- (void)updateMessageList:(BOOL)arg0;
- (void)stopRefresh;
- (void)cleanViews;
- (void)hideContainers:(BOOL)arg0;
- (double)publicScreenSetWidth;
- (void)setPublicScreenSetWidth:(double)arg0;
- (void)setPublicScreenWidth:(double)arg0;
- (double)publicScreenWidth;
- (void)setUpdatePublicScreenContainerHeightBlock:(id /* block */)arg0;
- (void)trackComponentAssembleWithConfigModel:(id)arg0;
- (void)componentViewProduced:(id)arg0;
- (void)removeComponentWithConfigModel:(id)arg0;
- (void)setComponentDelegate:(id)arg0;
- (double)publicScreenHeight;
- (void)addPSComponentView:(id)arg0;
- (void)setPublicScreenHeight:(double)arg0;
- (id)outsideBottomContainer;
- (void)setOutsideBottomContainer:(id)arg0;
- (void)setInteractQueueMap:(id)arg0;
- (void)setInsertDataSumCountDic:(id)arg0;
- (void)setInsertDataSuccessCountDic:(id)arg0;
- (void)setInsertQueueDataSumCountDic:(id)arg0;
- (void)setInsertQueueDataSuccessCountDic:(id)arg0;
- (void)trackConfigComponentInsert;
- (void)addPublicScreenLayoutSubscriber;
- (id)interactQueueMap;
- (void)layoutPublicScreenWithLayoutData:(id)arg0;
- (void)changeSubscribForPublicScreenWidthWithlayoutData:(id)arg0;
- (void)updateConstraintsForComponents;
- (void)updatePublicScreenContainerHeight:(long long)arg0;
- (id /* block */)updatePublicScreenContainerHeightBlock;
- (double)giftMaskViewHeight;
- (void)updateAnonymousComponentWithType:(id)arg0 height:(double)arg1 insertBlock:(id /* block */)arg2;
- (void)setGiftMaskViewHeight:(double)arg0;
- (void)bindObserverToComponent:(id)arg0 withBlankView:(id)arg1 mapToView:(id)arg2;
- (void)removeComponentFromContainer:(id)arg0 withType:(id)arg1 finished:(id /* block */)arg2;
- (id)queryViewFromContainer:(id)arg0 withType:(id)arg1;
- (BOOL)filterByBlocklistWithConfigModel:(id)arg0;
- (id)insertDataSumCountDic;
- (void)trackConfigModelCountForTypeKey:(id)arg0 withDataDic:(id)arg1;
- (id)insertQueueDataSumCountDic;
- (BOOL)securityCheck:(id)arg0;
- (id)checkInteractQueueWithModel:(id)arg0;
- (void)produceComponent:(id)arg0;
- (void)logForSecurityCheck:(id)arg0;
- (void)p_removePublicScreenComponentWithConfigModel:(id)arg0;
- (id)componentDelegate;
- (void)addPSComponentView:(id)arg0 withConfigModel:(id)arg1;
- (id)insertDataSuccessCountDic;
- (id)insertQueueDataSuccessCountDic;
- (void)addPublicScreenComponent:(id)arg0 toEffectLayer:(id)arg1;
- (void)removeFromSuperview;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)layoutSubviews;
- (void)dealloc;
- (void)orientationChanged:(long long)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupConfig;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg0;

@end
