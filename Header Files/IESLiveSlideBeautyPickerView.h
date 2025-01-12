//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveBeautyEffectConfig, UICollectionView, UILabel, IESLiveBeautyCategorySkipView, NSMutableArray, IESLiveRoomBeautySwitchItem, UIView, UIButton, NSString, IESLiveRoomBeautyItem, NSArray, IESLiveSlideLabelAnimator, NSIndexPath;
@protocol IESLiveSlideBeautyPickerViewDelegate, IESLiveSyncRouter, IESLiveBeautyProvider, IESLiveSliderProtocol;

@interface IESLiveSlideBeautyPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveSlideBeautyCollectionViewCellDelegate, IESLiveSlideBeautyPickerViewProtocol> {
    BOOL _isBodyConflictByEffect;
    BOOL _shouldHideMakeupSelected;
    BOOL _landscape;
    BOOL _newStyle;
    BOOL _isShowingSecondaryEffects;
    BOOL _isShowingExpandedEffects;
    BOOL _disableSelectItem;
    BOOL _isAvatarMode;
    BOOL _useNewPanelStyle;
    BOOL _isScrollRight;
    id<IESLiveSlideBeautyPickerViewDelegate> _delegate;
    id /* block */ _updateCompletionBlock;
    IESLiveBeautyEffectConfig *_effectConfig;
    NSArray *_categoryTitles;
    NSString *_liveTypeStr;
    NSArray *_beautyItems;
    NSMutableArray *_expandedSecondaryBeautyItems;
    NSMutableDictionary *_secondaryEffectDict;
    id<IESLiveBeautyProvider> _beautyProvider;
    id<IESLiveSyncRouter> _syncRouter;
    IESLiveRoomBeautyItem *_selectedItem;
    IESLiveRoomBeautyItem *_originSelectedItem;
    NSIndexPath *_originSelectedIndexPath;
    NSMutableDictionary *_originBeautyItemValues;
    NSString *_originMakeupItemIdentifer;
    NSIndexPath *_showingSecondaryEffectsIndexPath;
    IESLiveSlideLabelAnimator *_labelAnimator;
    UIView<IESLiveSliderProtocol> *_slider;
    UIView<IESLiveSliderProtocol> *_extraSlider;
    NSString *_effectIdentifier;
    UIView *_containerView;
    UICollectionView *_collectionView;
    UILabel *_makeupTitle;
    UILabel *_filterTitle;
    UIButton *_resetButton;
    IESLiveRoomBeautySwitchItem *_switchItem;
    IESLiveBeautyCategorySkipView *_categorySkipView;
    NSArray *_increaseCategoryIndex;
    unsigned long long _beautyType;
    NSString *_sourceIdentifier;
    NSString *_titleString;
    NSIndexPath *_selectedIndexPath;
    double _lastOffsetX;
}

@property (retain, nonatomic) NSArray *beautyItems;
@property (retain, nonatomic) NSMutableArray *expandedSecondaryBeautyItems;
@property (retain, nonatomic) NSMutableDictionary *secondaryEffectDict;
@property (retain, nonatomic) id<IESLiveBeautyProvider> beautyProvider;
@property (retain, nonatomic) id<IESLiveSyncRouter> syncRouter;
@property (retain, nonatomic) IESLiveBeautyEffectConfig *effectConfig;
@property (retain, nonatomic) IESLiveRoomBeautyItem *selectedItem;
@property (retain, nonatomic) IESLiveRoomBeautyItem *originSelectedItem;
@property (retain, nonatomic) NSIndexPath *originSelectedIndexPath;
@property (retain, nonatomic) NSMutableDictionary *originBeautyItemValues;
@property (copy, nonatomic) NSString *originMakeupItemIdentifer;
@property (retain, nonatomic) NSIndexPath *showingSecondaryEffectsIndexPath;
@property (retain, nonatomic) IESLiveSlideLabelAnimator *labelAnimator;
@property (retain, nonatomic) UIView<IESLiveSliderProtocol> *slider;
@property (retain, nonatomic) UIView<IESLiveSliderProtocol> *extraSlider;
@property (retain, nonatomic) NSString *effectIdentifier;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *makeupTitle;
@property (retain, nonatomic) UILabel *filterTitle;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) IESLiveRoomBeautySwitchItem *switchItem;
@property (retain, nonatomic) IESLiveBeautyCategorySkipView *categorySkipView;
@property (retain, nonatomic) NSArray *categoryTitles;
@property (retain, nonatomic) NSArray *increaseCategoryIndex;
@property (nonatomic) BOOL landscape;
@property (nonatomic) BOOL newStyle;
@property (nonatomic) BOOL isShowingSecondaryEffects;
@property (nonatomic) unsigned long long beautyType;
@property (nonatomic) BOOL isShowingExpandedEffects;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) BOOL disableSelectItem;
@property (retain, nonatomic) NSString *titleString;
@property (nonatomic) BOOL isAvatarMode;
@property (copy, nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) BOOL useNewPanelStyle;
@property (nonatomic) double lastOffsetX;
@property (nonatomic) BOOL isScrollRight;
@property (weak, nonatomic) id<IESLiveSlideBeautyPickerViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ updateCompletionBlock;
@property (copy, nonatomic) NSString *liveTypeStr;
@property (nonatomic) BOOL isBodyConflictByEffect;
@property (nonatomic) BOOL shouldHideMakeupSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)resetSelectStatus;
- (unsigned long long)beautyType;
- (void)setBeautyType:(unsigned long long)arg0;
- (void)setEffectConfig:(id)arg0;
- (BOOL)newStyle;
- (void)setNewStyle:(BOOL)arg0;
- (id)switchItem;
- (void)setSwitchItem:(id)arg0;
- (id)baseTrackParams;
- (id)liveTypeStr;
- (void)removeSlider;
- (void)refreshBeautyStatus;
- (void)setIsScrollRight:(BOOL)arg0;
- (BOOL)isScrollRight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isLive:(BOOL)arg1 isLandscape:(BOOL)arg2 beautyType:(unsigned long long)arg3 useNewPanelStyle:(BOOL)arg4;
- (void)setUseNewPanelStyle:(BOOL)arg0;
- (void)setLiveTypeStr:(id)arg0;
- (BOOL)isBodyConflictByEffect;
- (void)setIsBodyConflictByEffect:(BOOL)arg0;
- (BOOL)shouldHideMakeupSelected;
- (void)setShouldHideMakeupSelected:(BOOL)arg0;
- (void)resetMakeupSelectStatusTemp;
- (void)disableItemSelection:(BOOL)arg0;
- (void)setBeautyItems:(id)arg0;
- (unsigned long long)currentBeautyTpe;
- (void)updateTemplateSelectStatus;
- (id)beautyItems;
- (void)changeBeautySwitchStatus:(BOOL)arg0;
- (void)refreshResetButtonStatus;
- (void)resumeSelectedItem:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 title:(id)arg1 beautyItems:(id)arg2 selectedIndex:(long long)arg3 sourceIdentifier:(id)arg4 useNewPanelStyle:(BOOL)arg5;
- (BOOL)useNewOpenLive;
- (BOOL)useNewPanelStyle;
- (void)resetBeautyIndex;
- (void)updateAllBeautyCache;
- (void)undoAllBeautyEffect;
- (void)trackCategoryTitle;
- (id)rememberedDictForItem:(id)arg0;
- (void)setOriginMakeupItemIdentifer:(id)arg0;
- (id)originMakeupItemIdentifer;
- (id)secondaryEffectDict;
- (void)updateWithItems:(id)arg0;
- (void)setSecondaryEffectDict:(id)arg0;
- (void)configPickerView;
- (double)lastOffsetX;
- (void)setLastOffsetX:(double)arg0;
- (BOOL)canBeautyCollectionViewCellTouched:(id)arg0;
- (id)beautyProvider;
- (void)setBeautyProvider:(id)arg0;
- (void)didReceiveEnableResetButtonNotification:(id)arg0;
- (void)prepareResource;
- (void)configTransparentContainerView;
- (void)configTitleAndBackButton;
- (void)setSelectedSecondaryItemWithIndex:(long long)arg0;
- (id)labelAnimator;
- (void)saveBeautyUseRecord;
- (BOOL)isUsedBeauty;
- (BOOL)isUsedBody;
- (BOOL)isUsedVRBeauty;
- (void)configResetBtn;
- (void)resetButtonClicked:(id)arg0;
- (void)configExtraSliderWithItem:(id)arg0;
- (void)setMakeupTitle:(id)arg0;
- (id)makeupTitle;
- (void)changeValue:(long long)arg0 forBeautyItem:(id)arg1;
- (void)trackValueChanged:(long long)arg0 forItem:(id)arg1;
- (void)syncRealtimeBeatyResult;
- (BOOL)disableSelectItem;
- (void)setFilterTitle:(id)arg0;
- (void)setExtraSlider:(id)arg0;
- (id)extraSlider;
- (id)makeupStoreValueForTag:(id)arg0;
- (id)filterTitle;
- (void)updateSelectedMakeupItemWithBeautyItems:(id)arg0;
- (void)setIncreaseCategoryIndex:(id)arg0;
- (void)updateWithCategoryTitles:(id)arg0;
- (void)setSelectedBeautyItem:(id)arg0 indexPath:(id)arg1;
- (id)categorySkipView;
- (BOOL)isAvatarMode;
- (void)updateVRSelectedMakeupItemWithBeautyItems:(id)arg0;
- (void)setCategorySkipView:(id)arg0;
- (id)increaseCategoryIndex;
- (void)scrollToTopOfSection:(long long)arg0 animated:(BOOL)arg1;
- (void)trackCategoryTitleUpdate:(id)arg0;
- (void)configSliderWithBeautyItem:(id)arg0;
- (BOOL)isEnableSelectItem:(id)arg0;
- (void)setDisableSelectItem:(BOOL)arg0;
- (id)originBeautyItemValues;
- (void)setOriginBeautyItemValues:(id)arg0;
- (void)setOriginSelectedItem:(id)arg0;
- (void)setOriginSelectedIndexPath:(id)arg0;
- (id)originSelectedIndexPath;
- (BOOL)isShowingSecondaryEffects;
- (void)enableResetButton:(BOOL)arg0;
- (void)resetBeautyEffect;
- (void)resetBodyEffect;
- (void)trackResetConform:(BOOL)arg0;
- (void)trackResetBtnTapped;
- (void)setShowingSecondaryEffectsIndexPath:(id)arg0;
- (void)setIsShowingSecondaryEffects:(BOOL)arg0;
- (id)expandedSecondaryBeautyItems;
- (id)modelForItem:(id)arg0;
- (id)getDescStringFromArray:(id)arg0;
- (BOOL)isShowingExpandedEffects;
- (id)showingSecondaryEffectsIndexPath;
- (void)deleteSecondaryBeautyItemsAtIndexPath:(id)arg0;
- (void)dealWithBeautyItem:(id)arg0;
- (void)insertSecondaryBeautyItemsAtIndexPath:(id)arg0;
- (void)beautySwitchStatusDidChange:(id)arg0;
- (void)showItemName:(id)arg0;
- (void)setExclusiveSecondaryEffect:(id)arg0 withIndexPath:(id)arg1;
- (void)applyComposerNodes;
- (void)setExpandedSecondaryBeautyItems:(id)arg0;
- (id)syncRouter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForHeaderForSection:(long long)arg0;
- (void)checkSecondaryItems;
- (void)refreshItemUseStatus;
- (void)setItemIndexPath:(id)arg0 animated:(BOOL)arg1;
- (double)roundNumberStringWithRound:(long long)arg0 numberString:(id)arg1;
- (void)setSyncRouter:(id)arg0;
- (id)originSelectedItem;
- (void)setLabelAnimator:(id)arg0;
- (void)setIsShowingExpandedEffects:(BOOL)arg0;
- (void)setIsAvatarMode:(BOOL)arg0;
- (void)setLandscape:(BOOL)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)removeFromSuperview;
- (BOOL)landscape;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setUpdateCompletionBlock:(id /* block */)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)effectConfig;
- (id)slider;
- (void)setContainerView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setSlider:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setSourceIdentifier:(id)arg0;
- (id)sourceIdentifier;
- (id)delegate;
- (id)containerView;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setSelectedItem:(id)arg0;
- (id)selectedItem;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg0;
- (void)configContainerView;
- (id)titleString;
- (void)setTitleString:(id)arg0;
- (id)resetButton;
- (void)setResetButton:(id)arg0;
- (id)categoryTitles;
- (void)setCategoryTitles:(id)arg0;
- (id /* block */)updateCompletionBlock;
- (id)effectIdentifier;
- (void)setEffectIdentifier:(id)arg0;

@end
