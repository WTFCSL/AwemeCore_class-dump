//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSMapTable, ACCRecordLayoutViewHolder, NSMutableDictionary, UIView, ACCInteractionView, NSString;
@protocol ACCSwitchModeView, ACCLayoutContainerProtocol, ACCPanelViewController, ACCRecorderBarItemContainerView;

@interface ACCRecorderViewContainerImpl : NSObject <ACCRecorderViewContainer, FPViewContainer> {
    BOOL _isShowingMVDetailVC;
    BOOL _shouldClearUI;
    BOOL _itemsShouldHide;
    id<ACCRecorderBarItemContainerView> _barItemContainer;
    UIView *_modeContainerView;
    id<ACCPanelViewController> _panelViewController;
    UIView *_preview;
    UIView *_otherPreview;
    UIView *_popupContainerView;
    id<ACCLayoutContainerProtocol> _layoutManager;
    id /* block */ interactionBlock;
    NSMutableDictionary *_itemForceShowFlags;
    unsigned long long _propPanelType;
    id /* block */ _extraConfigBlock;
    UIView *_rootView;
    ACCCameraSubscription *_subscription;
    ACCInteractionView *_interactionView;
    NSMapTable *_visibleHandlers;
    ACCRecordLayoutViewHolder *_layoutViewHolder;
}

@property (weak, nonatomic) UIView *rootView;
@property (nonatomic) BOOL itemsShouldHide;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCInteractionView *interactionView;
@property (retain, nonatomic) NSMapTable *visibleHandlers;
@property (retain, nonatomic) ACCRecordLayoutViewHolder *layoutViewHolder;
@property (copy, nonatomic) id /* block */ extraConfigBlock;
@property (readonly, nonatomic) id<ACCRecorderBarItemContainerView> barItemContainer;
@property (readonly, nonatomic) UIView<ACCSwitchModeView> *switchModeView;
@property (readonly, nonatomic) id<ACCLayoutContainerProtocol> layoutManager;
@property (readonly, nonatomic) UIView<ACCSwitchModeView> *scanSwitchModeView;
@property (copy, nonatomic) id /* block */ interactionBlock;
@property (nonatomic) BOOL shouldClearUI;
@property (nonatomic) BOOL isShowingMVDetailVC;
@property (nonatomic) unsigned long long propPanelType;
@property (readonly, nonatomic) NSMutableDictionary *itemForceShowFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *preview;
@property (retain, nonatomic) UIView *otherPreview;
@property (readonly, nonatomic) UIView *modeContainerView;
@property (readonly, nonatomic) UIView *popupContainerView;
@property (readonly, nonatomic) id<ACCPanelViewController> panelViewController;

- (void)config:(id)arg0;
- (id)barItemContainer;
- (id)switchModeView;
- (id)scanSwitchModeView;
- (id /* block */)interactionBlock;
- (void)setInteractionBlock:(id /* block */)arg0;
- (void)injectBarItemContainer:(id)arg0;
- (void)viewContainerDidLoad;
- (void)addVisibleHandler:(id)arg0 viewType:(id)arg1;
- (void)showItems:(BOOL)arg0 animated:(BOOL)arg1;
- (void)updateItemsHiddenWithAnimation:(BOOL)arg0;
- (void)updateItemVisibleWithViewType:(id)arg0 animated:(BOOL)arg1;
- (BOOL)itemsShouldHide;
- (BOOL)shouldClearUI;
- (void)setShouldClearUI:(BOOL)arg0;
- (BOOL)isShowingMVDetailVC;
- (void)setIsShowingMVDetailVC:(BOOL)arg0;
- (unsigned long long)propPanelType;
- (void)setPropPanelType:(unsigned long long)arg0;
- (id)itemForceShowFlags;
- (BOOL)isShowingAnyPanel;
- (id)otherPreview;
- (void)setOtherPreview:(id)arg0;
- (id)modeContainerView;
- (id)popupContainerView;
- (id)panelViewController;
- (id)getViewForViewType:(id)arg0;
- (void)setView:(id)arg0 forViewType:(id)arg1;
- (id)initWithRootView:(id)arg0;
- (void)setExtraConfigBlock:(id /* block */)arg0;
- (id /* block */)extraConfigBlock;
- (id)visibleHandlers;
- (void)setItemsShouldHide:(BOOL)arg0;
- (id)layoutViewHolder;
- (void)setLayoutViewHolder:(id)arg0;
- (void)setVisibleHandlers:(id)arg0;
- (id)layoutManager;
- (void).cxx_destruct;
- (void)setInteractionView:(id)arg0;
- (id)preview;
- (void)setPreview:(id)arg0;
- (void)addObserver:(id)arg0;
- (void)setSubscription:(id)arg0;
- (id)interactionView;
- (void)dealloc;
- (void)removeObserver:(id)arg0;
- (id)subscription;
- (void)containerViewDidLayoutSubviews;
- (id)rootView;
- (void)setRootView:(id)arg0;

@end
