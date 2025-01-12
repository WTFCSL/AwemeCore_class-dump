//
//     Generated by private class-dump
//

@class IESLiveRefactGiftPanelVMFactory, IESLiveGiftBuffLynxViewModel, IESLiveGiftPrivilegeEntranceBarSectionViewModel, IESLiveGiftPanelBottomItem, IESLiveFantasticGiftGroupSelectionListItem, NSMutableArray, IESLiveGiftListItem, IESLiveGiftDynamicCardSectionViewModel, NSString, IESLiveGiftPanelDataSharing, NSArray, IESLiveActivityDetailItem, IESLiveGiftAssemblySectionViewModel, RACDisposable, IESLiveJoinFansClubItem, IESLiveGiftRecipientSectionViewModel, IESLiveGiftBuffItem, IESLiveGiftRedeemItem, IESLiveRefactGiftPanelViewBuilderLayoutInfo, IESLiveGiftMarketAreaSectionViewModel, IESLiveGiftPanelLineItem, IESLiveGiftDefaultOperationItem;
@protocol IESLiveGiftModuleRecipientRouter, IESLiveCompoundSubscription, IESLiveGiftPanelReaction, IESLiveGiftPanelOperationItemService;

@interface IESLiveRefactGiftPanelViewBuilder : NSObject <IESLiveRefactGiftPanelEventAction> {
    BOOL _needGuestInfo;
    BOOL _hasSetOriginBottomGiftListRect;
    BOOL _inDraggingVerticalGiftList;
    BOOL _isInPresectScrolling;
    BOOL _giftDynaimcCardEnable;
    BOOL _seriesGiftEntranceEnable;
    BOOL _giftMarketAreaEnable;
    BOOL _topBarRefreshByExtraEnable;
    IESLiveRefactGiftPanelViewBuilderLayoutInfo *_layoutInfo;
    NSMutableArray *_sectionViewModelList;
    NSMutableArray *_rowHeightArray;
    id /* block */ _reloadSectionBlock;
    id /* block */ _getViewBlock;
    id /* block */ _destroyNonClipViewContainerIfNeededBlock;
    id /* block */ _changeGiftbackground;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    id<IESLiveGiftPanelReaction> _reaction;
    IESLiveRefactGiftPanelVMFactory *_vmFactory;
    NSArray *_defaultPrioritySectionVMs;
    NSArray *_fansPrioritySectionVMs;
    IESLiveGiftRecipientSectionViewModel *_giftRecipientSectionVM;
    IESLiveGiftDefaultOperationItem *_defaultOperationSectionVM;
    IESLiveGiftBuffItem *_giftBuffSectionVM;
    IESLiveGiftBuffLynxViewModel *_giftBuffLynxSectionVM;
    IESLiveFantasticGiftGroupSelectionListItem *_fantasticGroupSelectListSectionVM;
    IESLiveGiftPanelLineItem *_lineSectionVM;
    IESLiveJoinFansClubItem *_joinFansClubSectionVM;
    IESLiveGiftAssemblySectionViewModel *_giftAssemblySectionVM;
    IESLiveGiftDynamicCardSectionViewModel *_giftDynamicCardSectionVM;
    IESLiveGiftPrivilegeEntranceBarSectionViewModel *_giftPrivilegeEntranceBarSectionVM;
    IESLiveActivityDetailItem *_activityDetailSectionVM;
    IESLiveGiftMarketAreaSectionViewModel *_giftMarketAreaSectionVM;
    IESLiveGiftListItem *_giftListSectionVM;
    IESLiveGiftPanelBottomItem *_bottomSectionVM;
    IESLiveGiftRedeemItem *_redeemSectionVM;
    id<IESLiveGiftPanelOperationItemService> _authorizeGuideSectionVM;
    id<IESLiveGiftPanelOperationItemService> _diamondChangeSectionVM;
    RACDisposable *_groupModeDisposable;
    id<IESLiveCompoundSubscription> _compoundDisposable;
    double _originBottomHeight;
    double _originRedeemHeight;
    id<IESLiveGiftModuleRecipientRouter> _recipientRouter;
    struct CGPoint { double x; double y; } _lastContentOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originBottomRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originGiftListRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originRedeemRect;
}

@property (retain, nonatomic) IESLiveRefactGiftPanelViewBuilderLayoutInfo *layoutInfo;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (retain, nonatomic) IESLiveRefactGiftPanelVMFactory *vmFactory;
@property (retain, nonatomic) NSMutableArray *sectionViewModelList;
@property (retain, nonatomic) NSMutableArray *rowHeightArray;
@property (nonatomic) BOOL needGuestInfo;
@property (retain, nonatomic) NSArray *defaultPrioritySectionVMs;
@property (retain, nonatomic) NSArray *fansPrioritySectionVMs;
@property (retain, nonatomic) IESLiveGiftRecipientSectionViewModel *giftRecipientSectionVM;
@property (retain, nonatomic) IESLiveGiftDefaultOperationItem *defaultOperationSectionVM;
@property (retain, nonatomic) IESLiveGiftBuffItem *giftBuffSectionVM;
@property (retain, nonatomic) IESLiveGiftBuffLynxViewModel *giftBuffLynxSectionVM;
@property (retain, nonatomic) IESLiveFantasticGiftGroupSelectionListItem *fantasticGroupSelectListSectionVM;
@property (retain, nonatomic) IESLiveGiftPanelLineItem *lineSectionVM;
@property (retain, nonatomic) IESLiveJoinFansClubItem *joinFansClubSectionVM;
@property (retain, nonatomic) IESLiveGiftAssemblySectionViewModel *giftAssemblySectionVM;
@property (retain, nonatomic) IESLiveGiftDynamicCardSectionViewModel *giftDynamicCardSectionVM;
@property (retain, nonatomic) IESLiveGiftPrivilegeEntranceBarSectionViewModel *giftPrivilegeEntranceBarSectionVM;
@property (retain, nonatomic) IESLiveActivityDetailItem *activityDetailSectionVM;
@property (retain, nonatomic) IESLiveGiftMarketAreaSectionViewModel *giftMarketAreaSectionVM;
@property (retain, nonatomic) IESLiveGiftListItem *giftListSectionVM;
@property (retain, nonatomic) IESLiveGiftPanelBottomItem *bottomSectionVM;
@property (retain, nonatomic) IESLiveGiftRedeemItem *redeemSectionVM;
@property (retain, nonatomic) id<IESLiveGiftPanelOperationItemService> authorizeGuideSectionVM;
@property (retain, nonatomic) id<IESLiveGiftPanelOperationItemService> diamondChangeSectionVM;
@property (retain, nonatomic) RACDisposable *groupModeDisposable;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> compoundDisposable;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) BOOL hasSetOriginBottomGiftListRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originBottomRect;
@property (nonatomic) double originBottomHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originGiftListRect;
@property (nonatomic) BOOL inDraggingVerticalGiftList;
@property (nonatomic) BOOL isInPresectScrolling;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRedeemRect;
@property (nonatomic) double originRedeemHeight;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (nonatomic) BOOL giftDynaimcCardEnable;
@property (nonatomic) BOOL seriesGiftEntranceEnable;
@property (nonatomic) BOOL giftMarketAreaEnable;
@property (nonatomic) BOOL topBarRefreshByExtraEnable;
@property (copy, nonatomic) id /* block */ reloadSectionBlock;
@property (copy, nonatomic) id /* block */ getViewBlock;
@property (copy, nonatomic) id /* block */ destroyNonClipViewContainerIfNeededBlock;
@property (copy, nonatomic) id /* block */ changeGiftbackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)compoundDisposable;
- (void)updateFirstChargeBanner;
- (void)jsbUpdateExtraInfoToReloadGiftPanelOperationSectionIfNeedWithGiftID:(id)arg0 bizType:(id)arg1;
- (id /* block */)reloadSectionBlock;
- (void)setReloadSectionBlock:(id /* block */)arg0;
- (void)setCompoundDisposable:(id)arg0;
- (void)didFansGroupEntryInfoRequestFinish:(BOOL)arg0 fansGroupEntryInfo:(id)arg1;
- (void)gpe_giftListScrollViewWillBeginDragging:(id)arg0 tabIndex:(long long)arg1 layoutDirection:(long long)arg2;
- (void)gpe_giftListScrollViewDidEndDecelerating:(id)arg0 tabIndex:(long long)arg1 layoutDirection:(long long)arg2;
- (void)gpe_giftListScrollViewDidScroll:(id)arg0 tabIndex:(long long)arg1 layoutDirection:(long long)arg2;
- (void)gpe_giftListScrollViewDidBeginPresetScrollWithAnimated:(BOOL)arg0 isBegin:(BOOL)arg1;
- (void)gpe_giftPageScrollViewDidScroll:(id)arg0;
- (double)collectionListHeight;
- (double)collectionViewTopPadding;
- (id)recipientRouter;
- (void)setRecipientRouter:(id)arg0;
- (id)giftPanelDataSharing;
- (void)didGiftPanelCollectionVMsUpdate;
- (void)didGiftExtraInfoUpdate:(id)arg0;
- (void)setGiftPanelDataSharing:(id)arg0;
- (void)p_bindSignals;
- (BOOL)topTabLineHidden;
- (double)tabPanelBottomViewCompensateHeightOffset;
- (BOOL)marketingAreaDisplaying;
- (id)redeemSectionVM;
- (void)setRedeemSectionVM:(id)arg0;
- (id)diamondChangeSectionVM;
- (void)setDiamondChangeSectionVM:(id)arg0;
- (id)initWithGiftPanelDataSharing:(id)arg0 reaction:(id)arg1;
- (void)setGetViewBlock:(id /* block */)arg0;
- (void)setDestroyNonClipViewContainerIfNeededBlock:(id /* block */)arg0;
- (void)setChangeGiftbackground:(id /* block */)arg0;
- (id)sectionViewModelList;
- (id)rowHeightArray;
- (BOOL)shouldSendSectionViewToBackWhenCreate:(id)arg0;
- (BOOL)shouldBringSectionViewToFrontWhenCreate:(id)arg0;
- (void)didSetupGiftPanelView;
- (long long)tabListSectionCollectionVMsCount;
- (void)notifyAllSectionsWhenGiftPanelShow;
- (BOOL)shouldShowPrivilegeEntranceBar;
- (void)setNeedGuestInfo:(BOOL)arg0;
- (BOOL)needGuestInfo;
- (BOOL)hasRedeemRow;
- (void)setGiftDynaimcCardEnable:(BOOL)arg0;
- (void)setSeriesGiftEntranceEnable:(BOOL)arg0;
- (void)setGiftMarketAreaEnable:(BOOL)arg0;
- (void)setTopBarRefreshByExtraEnable:(BOOL)arg0;
- (void)setupLayoutInfo;
- (void)buildRows;
- (void)recalculatePanelHeight;
- (id)bottomSectionVM;
- (void)updateOperationSectionIfNeededWithSource:(unsigned long long)arg0;
- (id)groupModeDisposable;
- (void)setGroupModeDisposable:(id)arg0;
- (id /* block */)changeGiftbackground;
- (BOOL)topBarRefreshByExtraEnable;
- (id)vmFactory;
- (void)setSectionViewModelList:(id)arg0;
- (void)buildFirstRow;
- (void)buildLineRow;
- (void)buildAuthorizeGuideRowIfNeeded;
- (void)buildTabAndChargeRow;
- (void)buildGiftList;
- (id)fansPrioritySectionVMs;
- (id)curatedPrioritySectionVMs;
- (id)defaultPrioritySectionVMs;
- (id)defaultOperationSectionVM;
- (void)updateOperationSection:(id)arg0 source:(unsigned long long)arg1;
- (unsigned long long)operationSectionRowLine;
- (id)giftRecipientSectionVM;
- (id)giftPrivilegeEntranceBarSectionVM;
- (id)lineSectionVM;
- (id)giftListSectionVM;
- (void)setBottomSectionVM:(id)arg0;
- (BOOL)hasDiamondChange;
- (id)authorizeGuideSectionVM;
- (id)giftBuffSectionVM;
- (BOOL)shouldShowGiftBuff;
- (id)giftBuffLynxSectionVM;
- (id)fantasticGroupSelectListSectionVM;
- (BOOL)shouldShowFantasticGroupSelectionList;
- (id)joinFansClubSectionVM;
- (BOOL)showJoinFansClubItem;
- (id)giftAssemblySectionVM;
- (BOOL)shouldShowGiftAssembly;
- (id)giftDynamicCardSectionVM;
- (BOOL)shouldShowGiftDynamicCard;
- (id)giftMarketAreaSectionVM;
- (BOOL)shouldShowGiftMarketArea;
- (id)activityDetailSectionVM;
- (BOOL)showActivityDetailItem;
- (void)setRowHeightArray:(id)arg0;
- (BOOL)giftMarketAreaEnable;
- (BOOL)giftDynaimcCardEnable;
- (BOOL)seriesGiftEntranceEnable;
- (id /* block */)destroyNonClipViewContainerIfNeededBlock;
- (void)setInDraggingVerticalGiftList:(BOOL)arg0;
- (void)setIsInPresectScrolling:(BOOL)arg0;
- (id /* block */)getViewBlock;
- (BOOL)hasSetOriginBottomGiftListRect;
- (void)setHasSetOriginBottomGiftListRect:(BOOL)arg0;
- (void)setOriginBottomRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originBottomRect;
- (void)setOriginBottomHeight:(double)arg0;
- (void)setOriginGiftListRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setOriginRedeemRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originRedeemRect;
- (void)setOriginRedeemHeight:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originGiftListRect;
- (double)originRedeemHeight;
- (void)restoreRedeemLayoutWhenChangeTab;
- (void)setVmFactory:(id)arg0;
- (void)setDefaultPrioritySectionVMs:(id)arg0;
- (void)setFansPrioritySectionVMs:(id)arg0;
- (void)setGiftRecipientSectionVM:(id)arg0;
- (void)setDefaultOperationSectionVM:(id)arg0;
- (void)setGiftBuffSectionVM:(id)arg0;
- (void)setGiftBuffLynxSectionVM:(id)arg0;
- (void)setFantasticGroupSelectListSectionVM:(id)arg0;
- (void)setLineSectionVM:(id)arg0;
- (void)setJoinFansClubSectionVM:(id)arg0;
- (void)setGiftAssemblySectionVM:(id)arg0;
- (void)setGiftDynamicCardSectionVM:(id)arg0;
- (void)setGiftPrivilegeEntranceBarSectionVM:(id)arg0;
- (void)setActivityDetailSectionVM:(id)arg0;
- (void)setGiftMarketAreaSectionVM:(id)arg0;
- (void)setGiftListSectionVM:(id)arg0;
- (void)setAuthorizeGuideSectionVM:(id)arg0;
- (double)originBottomHeight;
- (BOOL)inDraggingVerticalGiftList;
- (BOOL)isInPresectScrolling;
- (id)layoutInfo;
- (void).cxx_destruct;
- (void)setLayoutInfo:(id)arg0;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })lastContentOffset;
- (void)setLastContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (id)reaction;
- (void)setReaction:(id)arg0;

@end
