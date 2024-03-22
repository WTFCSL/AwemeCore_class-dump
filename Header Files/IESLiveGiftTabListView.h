//
//     Generated by private class-dump
//

@class CAGradientLayer, NSArray, NSString, UIScrollView, IESLiveGiftBarItem, IESLiveGradientView;
@protocol IESLiveCollectionViewItemProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftTabListView : UIView <UIScrollViewDelegate, IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol> {
    BOOL _hasNewLeftMask;
    BOOL _hasNewRightMask;
    BOOL _hasSetLandscapeGradientLayer;
    BOOL _tabMaskFix;
    id<IESLiveCollectionViewItemProtocol> _item;
    id<IESLiveRefactGiftPanelSectionVMProtocol> _sectionVM;
    UIScrollView *_tabButtonsScrollView;
    CAGradientLayer *_gradientLayer;
    CAGradientLayer *_leftRightMaskLayer;
    NSArray *_buttons;
    IESLiveGiftBarItem *_selectedBarItem;
    IESLiveGradientView *_tabsLeadingGradientView;
    IESLiveGradientView *_tabsTrailingGradientView;
    double _contentSizeWidth;
    double _leftPadding;
}

@property (retain, nonatomic) UIScrollView *tabButtonsScrollView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *leftRightMaskLayer;
@property (nonatomic) BOOL hasNewLeftMask;
@property (nonatomic) BOOL hasNewRightMask;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) IESLiveGiftBarItem *selectedBarItem;
@property (retain, nonatomic) IESLiveGradientView *tabsLeadingGradientView;
@property (retain, nonatomic) IESLiveGradientView *tabsTrailingGradientView;
@property (nonatomic) double contentSizeWidth;
@property (nonatomic) double leftPadding;
@property (nonatomic) BOOL hasSetLandscapeGradientLayer;
@property (nonatomic) BOOL tabMaskFix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveCollectionViewItemProtocol> item;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void)setLeftPadding:(double)arg0;
- (id)leftRightMaskLayer;
- (void)setLeftRightMaskLayer:(id)arg0;
- (id)selectedBarItem;
- (void)setSelectedBarItem:(id)arg0;
- (void)setContentSizeWidth:(double)arg0;
- (double)contentSizeWidth;
- (id)sectionVM;
- (void)setSectionVM:(id)arg0;
- (id)tabButtonsScrollView;
- (void)loadTabButtons;
- (void)reloadTabButtons;
- (long long)installTabScrollView;
- (void)selectButtonAtIndex:(unsigned long long)arg0;
- (id)createPageButtonWithCollectionViewModel:(id)arg0;
- (BOOL)tabMaskFix;
- (id)tabsLeadingGradientView;
- (BOOL)hasSetLandscapeGradientLayer;
- (void)setHasSetLandscapeGradientLayer:(BOOL)arg0;
- (void)setLandscapeGradientViewWithSize:(struct CGSize { double x0; double x1; })arg0;
- (id)tabsTrailingGradientView;
- (void)setHasNewRightMask:(BOOL)arg0;
- (BOOL)hasNewRightMask;
- (void)updateMaskLayerWithLeft:(BOOL)arg0 right:(BOOL)arg1;
- (BOOL)hasNewLeftMask;
- (void)_fireSelectionCommandWithIndex:(unsigned long long)arg0 active:(BOOL)arg1;
- (void)deSelectButton;
- (void)setHasNewLeftMask:(BOOL)arg0;
- (void)setTabButtonsScrollView:(id)arg0;
- (void)setTabsLeadingGradientView:(id)arg0;
- (void)setTabsTrailingGradientView:(id)arg0;
- (void)setTabMaskFix:(BOOL)arg0;
- (id)item;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setButtons:(id)arg0;
- (id)buttons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)layoutSubviews;
- (void)setItem:(id)arg0;
- (void)_selectButton:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (void)didSelectButton:(id)arg0;
- (struct CGSize { double x0; double x1; })layoutViewSize;
- (double)leftPadding;

@end
