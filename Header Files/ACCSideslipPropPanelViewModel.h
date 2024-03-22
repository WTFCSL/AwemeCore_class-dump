//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSArray, NSDictionary, NSString, UIView;
@protocol ACCSideslipPropBaseCellModelProtocol, ACCSideslipPropPanelTrackerService, ACCSideslipPropPanelListDataProvider, ACCSideslipPropInternalService, ACCSideslipAIGCPanelListDataProviderProtocol, ACCSideslipPropService, ACCSideslipPropPanelFocusHandleService, ACCSideslipPropPanelCellModelBuilderProtocol, ACCSideslipPropPanelPickViewCapabilityDelegate, IESServiceProvider;

@interface ACCSideslipPropPanelViewModel : NSObject <ACCSideslipPropServiceSubscriber, ACCSideslipPropPanelService, ACCSideslipPropPanelExpouseCapability, ACCSideslipPropPanelPickViewCapability> {
    BOOL _isPlaceHolderAnimating;
    BOOL _isScrollByTap;
    BOOL _isScrolling;
    BOOL _isListDataReady;
    BOOL _hasShowExtendItem;
    BOOL _hiddenStickerPickerPanel;
    unsigned long long _loadState;
    NSArray *_totalList;
    NSArray *_lastList;
    id<ACCSideslipPropPanelPickViewCapabilityDelegate> _pickViewDelegate;
    long long _maxItemCountInDisplay;
    unsigned long long _listDataType;
    id<IESServiceProvider> _sideslipServiceProvider;
    id<ACCSideslipPropService> _sideslipPropService;
    id<ACCSideslipPropInternalService> _sideslipPropInternalService;
    id<ACCSideslipPropPanelCellModelBuilderProtocol> _cellModelBuilder;
    id<ACCSideslipPropPanelFocusHandleService> _sideslipFocusHandleService;
    id<ACCSideslipPropPanelTrackerService> _sideslipTrackerService;
    id<ACCSideslipPropPanelListDataProvider> _listDataProvider;
    ACCCameraSubscription *_subscription;
    NSArray *_cellClasses;
    long long _rightFirstIndex;
    long long _focusIndex;
    long long _focusAnimated;
    id<ACCSideslipPropBaseCellModelProtocol> _focusCellModel;
    id<ACCSideslipPropBaseCellModelProtocol> _lastFocusCellModel;
    NSDictionary *_expouseHiddenCellModelsDic;
    long long _exposureFocusIndex;
    long long _focusIndexBeforeExposure;
    UIView *_currentTrayView;
    id<ACCSideslipAIGCPanelListDataProviderProtocol> _aigcListDataProvider;
    unsigned long long _applyReason;
}

@property (weak, nonatomic) id<IESServiceProvider> sideslipServiceProvider;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropInternalService> sideslipPropInternalService;
@property (weak, nonatomic) id<ACCSideslipPropPanelCellModelBuilderProtocol> cellModelBuilder;
@property (weak, nonatomic) id<ACCSideslipPropPanelFocusHandleService> sideslipFocusHandleService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelListDataProvider> listDataProvider;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) NSArray *totalList;
@property (retain, nonatomic) NSArray *lastList;
@property (retain, nonatomic) NSArray *cellClasses;
@property (nonatomic) BOOL isPlaceHolderAnimating;
@property (nonatomic) long long rightFirstIndex;
@property (nonatomic) long long focusIndex;
@property (nonatomic) long long focusAnimated;
@property (retain, nonatomic) id<ACCSideslipPropBaseCellModelProtocol> focusCellModel;
@property (retain, nonatomic) id<ACCSideslipPropBaseCellModelProtocol> lastFocusCellModel;
@property (nonatomic) BOOL isScrollByTap;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isListDataReady;
@property (nonatomic) BOOL hasShowExtendItem;
@property (copy, nonatomic) NSDictionary *expouseHiddenCellModelsDic;
@property (nonatomic) long long exposureFocusIndex;
@property (nonatomic) long long focusIndexBeforeExposure;
@property (weak, nonatomic) UIView *currentTrayView;
@property (weak, nonatomic) id<ACCSideslipAIGCPanelListDataProviderProtocol> aigcListDataProvider;
@property (nonatomic) BOOL hiddenStickerPickerPanel;
@property (nonatomic) unsigned long long applyReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *currentTabName;
@property (readonly, nonatomic) BOOL isSupportCancelItem;
@property (readonly, nonatomic) BOOL hasTrayView;
@property (readonly, nonatomic) unsigned long long listDataType;
@property (weak, nonatomic) id<ACCSideslipPropPanelPickViewCapabilityDelegate> pickViewDelegate;
@property (nonatomic) long long maxItemCountInDisplay;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (id)cellClasses;
- (id)tabNameWithIndex:(long long)arg0;
- (id)currentTabName;
- (id)sideslipPropService;
- (void)setSideslipPropService:(id)arg0;
- (id)totalList;
- (id)focusDataModel;
- (id)focusRawModel;
- (id)lastFocusRawModel;
- (id)dataModelWithIndex:(long long)arg0;
- (id)rawModelWithIndex:(long long)arg0;
- (id)cellModelWithIndex:(long long)arg0;
- (id)cellModelWithModelId:(id)arg0;
- (unsigned long long)indexOfCellModel:(id)arg0;
- (void)locateNextItemIfNeeded;
- (void)locatePrevItemIfNeeded;
- (void)locateItemWithIndex:(unsigned long long)arg0 animated:(BOOL)arg1;
- (BOOL)isVaildWithItemIndex:(long long)arg0;
- (long long)getPositionInTabWithIndex:(long long)arg0;
- (void)loadInitialPropListIfNeeded:(long long)arg0;
- (void)resetInitialFocusInfo;
- (void)resetPropListIfNeed;
- (void)prefetchPropListIfNeeded;
- (void)prefetchPropListIfNeededWithCompletion:(id /* block */)arg0;
- (void)postTrayView:(id)arg0 changeShowStatus:(BOOL)arg1;
- (void)clearDatasource;
- (void)disableStickerPickerPanel;
- (void)updateApplyReasonWithTriggerScrollReason:(unsigned long long)arg0;
- (long long)rightFirstIndex;
- (long long)focusIndex;
- (id)focusCellModel;
- (id)lastFocusCellModel;
- (long long)focusAnimated;
- (BOOL)isListDataReady;
- (BOOL)isSupportCancelItem;
- (BOOL)isScrollByTap;
- (BOOL)isPlaceHolderAnimating;
- (BOOL)hasTrayView;
- (BOOL)hiddenStickerPickerPanel;
- (unsigned long long)listDataType;
- (unsigned long long)applyReason;
- (id)sideslipPropInternalService;
- (id)cellModelBuilder;
- (void)setTotalList:(id)arg0;
- (void)setRightFirstIndex:(long long)arg0;
- (void)setLastList:(id)arg0;
- (BOOL)hasShowExtendItem;
- (void)showDiscoverItemIfNeeded;
- (void)hiddenDiscoverItemIfNeeded;
- (void)setCellModelBuilder:(id)arg0;
- (void)setSideslipPropInternalService:(id)arg0;
- (void)handleWillScroll;
- (void)handleDidEndScroll;
- (void)p_bindServices;
- (void)setHasShowExtendItem:(BOOL)arg0;
- (id)sideslipFocusHandleService;
- (void)setSideslipFocusHandleService:(id)arg0;
- (id)sideslipServiceProvider;
- (id)aigcListDataProvider;
- (void)setAigcListDataProvider:(id)arg0;
- (id)listDataProvider;
- (void)setSideslipServiceProvider:(id)arg0;
- (void)setListDataProvider:(id)arg0;
- (id)sideslipTrackerService;
- (void)setSideslipTrackerService:(id)arg0;
- (void)storeAndRemoveExposureHiddenCellModels;
- (void)restoreExposureHiddenCellModels;
- (long long)getIndexWithExposureIndex:(long long)arg0;
- (long long)getExposureIndexWithIndex:(long long)arg0;
- (id)expouseHiddenCellModelsDic;
- (long long)exposureFocusIndex;
- (long long)focusIndexBeforeExposure;
- (void)setFocusIndex:(long long)arg0;
- (void)setFocusAnimated:(long long)arg0;
- (void)p_configCellModelsContextIfNeeded:(long long)arg0;
- (void)p_handleInitialPropListData;
- (void)p_loadPlaceHolderCellModelsIfNeeded;
- (void)p_updateFocusIndex:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)setIsScrollByTap:(BOOL)arg0;
- (void)setCurrentTrayView:(id)arg0;
- (id)currentTrayView;
- (BOOL)p_isVaildModelIndex:(long long)arg0;
- (BOOL)p_isReadyWhenStateShow;
- (void)setExpouseHiddenCellModelsDic:(id)arg0;
- (void)setTotalList:(id)arg0 postReloadData:(BOOL)arg1;
- (long long)p_getPositionInTabWithIndex:(long long)arg0;
- (long long)maxItemCountInDisplay;
- (void)setExposureFocusIndex:(long long)arg0;
- (void)setFocusIndexBeforeExposure:(long long)arg0;
- (void)p_postReloadItemIndexes:(id)arg0 completion:(id /* block */)arg1;
- (void)p_postReloadData;
- (id)pickViewDelegate;
- (void)setIsPlaceHolderAnimating:(BOOL)arg0;
- (void)setIsListDataReady:(BOOL)arg0;
- (void)p_tryTrackerPropShowIfNeeded;
- (void)p_updateFocusIndex:(unsigned long long)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)p_configCellModelsContextForPlaceholderAnimating;
- (void)handleWithFocusIndex:(unsigned long long)arg0 handleWay:(unsigned long long)arg1;
- (void)setHiddenStickerPickerPanel:(BOOL)arg0;
- (void)setApplyReason:(unsigned long long)arg0;
- (void)setCellClasses:(id)arg0;
- (void)setFocusCellModel:(id)arg0;
- (void)setLastFocusCellModel:(id)arg0;
- (void)handleWillBeginScroll:(BOOL)arg0 isDrag:(BOOL)arg1;
- (void)handleDidScroll;
- (void)handleDidEndScrollByDrag;
- (void)setPickViewDelegate:(id)arg0;
- (void)setMaxItemCountInDisplay:(long long)arg0;
- (void)p_postInsetItemIndexes:(id)arg0 completion:(id /* block */)arg1;
- (void)p_postRemoveItemIndexes:(id)arg0 completion:(id /* block */)arg1;
- (id)lastList;
- (void)setIsScrolling:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)loadState;
- (BOOL)isScrolling;
- (void)reloadData;
- (id)initWithServiceProvider:(id)arg0;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;
- (void)setLoadState:(unsigned long long)arg0;

@end