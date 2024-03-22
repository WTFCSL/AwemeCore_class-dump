//
//     Generated by private class-dump
//

@class NSTimer, ACCToolBarItemView, NSArray, ACCToolBarItemsModel, UIView, NSMutableDictionary, UIImageView, NSString, CAGradientLayer, ACCToolBarCommonViewLayout, ACCToolBarScrollStackView;

@interface ACCToolBarView : UIView <UIScrollViewDelegate, ACCToolBarScrollStackViewDelegate> {
    BOOL _folded;
    BOOL _labelShowing;
    BOOL _isEdit;
    BOOL _shouldHideMoreButton;
    ACCToolBarScrollStackView *_scrollStackView;
    ACCToolBarItemView *_moreButtonView;
    ACCToolBarScrollStackView *_moreScrollStackView;
    UIImageView *_shadowView;
    UIView *_fadeView;
    CAGradientLayer *_fadeLayer;
    id /* block */ _clickItemBlock;
    id /* block */ _clickMoreBlock;
    id /* block */ _didLayoutUIBlock;
    NSArray *_itemsArray;
    NSTimer *_timer;
    ACCToolBarCommonViewLayout *_layout;
    NSArray *_moreItemsArray;
    NSMutableDictionary *_cacheViewsDict;
    ACCToolBarItemsModel *_model;
}

@property (nonatomic) BOOL folded;
@property (nonatomic) BOOL shouldHideMoreButton;
@property (nonatomic) BOOL labelShowing;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) ACCToolBarCommonViewLayout *layout;
@property (retain, nonatomic) NSArray *itemsArray;
@property (retain, nonatomic) NSArray *moreItemsArray;
@property (retain, nonatomic) NSMutableDictionary *cacheViewsDict;
@property (retain, nonatomic) ACCToolBarItemsModel *model;
@property (retain, nonatomic) ACCToolBarScrollStackView *scrollStackView;
@property (retain, nonatomic) ACCToolBarItemView *moreButtonView;
@property (retain, nonatomic) ACCToolBarScrollStackView *moreScrollStackView;
@property (retain, nonatomic) UIImageView *shadowView;
@property (retain, nonatomic) UIView *fadeView;
@property (retain, nonatomic) CAGradientLayer *fadeLayer;
@property (readonly, copy, nonatomic) NSArray *viewsArray;
@property (copy, nonatomic) id /* block */ clickItemBlock;
@property (copy, nonatomic) id /* block */ clickMoreBlock;
@property (copy, nonatomic) id /* block */ didLayoutUIBlock;
@property (nonatomic) BOOL isEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsEdit:(BOOL)arg0;
- (id)moreButtonView;
- (void)setMoreButtonView:(id)arg0;
- (id)viewWithBarItemID:(void *)arg0;
- (void)showAllLabel;
- (void)setFolded:(BOOL)arg0;
- (void)p_layoutUI;
- (id)viewsArray;
- (id)viewIndexWithBarItemID:(void *)arg0;
- (void)resetFoldState;
- (void)setLabelShowing:(BOOL)arg0;
- (id)scrollStackView;
- (void)updateItem:(id)arg0 animated:(BOOL)arg1;
- (void)updateItemViewHiddenOpt:(id)arg0 layoutUI:(BOOL)arg1;
- (void)updateAllItemViews:(BOOL)arg0;
- (void)layoutUIWithAnimated:(BOOL)arg0;
- (void)updateFoldState:(BOOL)arg0 shouldHideMoreButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hideAllLabelWithAnimation:(BOOL)arg0;
- (id)initWithLayout:(id)arg0 itemsData:(id)arg1 moreItemsData:(id)arg2 model:(id)arg3 isEdit:(BOOL)arg4;
- (id /* block */)clickItemBlock;
- (void)setClickItemBlock:(id /* block */)arg0;
- (id /* block */)clickMoreBlock;
- (void)setClickMoreBlock:(id /* block */)arg0;
- (void)setDidLayoutUIBlock:(id /* block */)arg0;
- (BOOL)shouldShowDivisionView;
- (void)updateFadeViewWithState:(unsigned long long)arg0;
- (void)layoutMoreButtonView;
- (unsigned long long)p_numberOfItemsFolded;
- (unsigned long long)numberOfAllItems;
- (void)hideAllLabelAfterSeconds:(double)arg0;
- (void)onMoreButtonClicked;
- (unsigned long long)barItemDirection;
- (BOOL)p_shouldShowMoreButton;
- (unsigned long long)p_numberOfItemsToShow;
- (long long)numberOfItemsFoldedWithFirstFrameBefore;
- (void)p_checkAndShowBubble;
- (BOOL)itemBarShouldShow:(id)arg0;
- (id)p_createBarItemViewWithItem:(id)arg0;
- (id)cacheViewsDict;
- (id)moreItemsArray;
- (id)moreScrollStackView;
- (id)fadeView;
- (void)layoutShadowView;
- (void)layoutScrollStackView;
- (void)layoutMoreScrollStackView;
- (id)p_itemViewsToShow;
- (void)triggerItemBarShowBlockWithViews:(id)arg0;
- (id /* block */)didLayoutUIBlock;
- (void)layoutUIWithFolded:(BOOL)arg0 animated:(BOOL)arg1;
- (id)p_createToolBarScrollStackView;
- (BOOL)shouldHideMoreButton;
- (double)calculateMoreScrollStackViewFrameHeight;
- (double)calculateScrollStackViewFrameHeight;
- (void)updateItemViewHiddenOpt:(id)arg0 animated:(BOOL)arg1;
- (void)updateItemViewHiddenOpt:(id)arg0 layoutUI:(BOOL)arg1 animated:(BOOL)arg2;
- (void)p_updateAllItemViews;
- (void)p_layoutUIAnimated;
- (void)triggerItemBarShowBlockForClickMoreIfNeed;
- (void)setShouldHideMoreButton:(BOOL)arg0;
- (id)moreViewsArray;
- (id)indexesOfItemsToshow;
- (BOOL)p_viewInsideScrollFrame:(id)arg0;
- (id)p_barItemWithItemId:(void *)arg0;
- (id)p_getViewForbarItem:(id)arg0;
- (void)clickedBarItemType:(unsigned long long)arg0;
- (void)setScrollStackView:(id)arg0;
- (void)setMoreScrollStackView:(id)arg0;
- (void)setFadeView:(id)arg0;
- (void)setMoreItemsArray:(id)arg0;
- (void)setCacheViewsDict:(id)arg0;
- (id)timer;
- (void)setModel:(id)arg0;
- (void)setLayout:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)shadowView;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)setShadowView:(id)arg0;
- (id)layout;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupUI;
- (id)fadeLayer;
- (void)setFadeLayer:(id)arg0;
- (BOOL)isEdit;
- (id)itemsArray;
- (void)setItemsArray:(id)arg0;
- (BOOL)folded;
- (BOOL)labelShowing;

@end