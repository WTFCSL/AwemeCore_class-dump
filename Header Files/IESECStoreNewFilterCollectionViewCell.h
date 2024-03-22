//
//     Generated by private class-dump
//

@class IESECStoreFilterDiffableModel, IESECButton, IESECShopBubbleView, NSTimer, NSString, UIButton, IESECSlidingTabbarView, IESECShopProductsSelectButtonContainer;
@protocol IESECStoreFilterCollectionViewCellDelegate;

@interface IESECStoreNewFilterCollectionViewCell : UICollectionViewCell <IESECSlidingTabbarLayoutDelegate, IESECSlidingTabbarDelegate, IESECShopPopupProtocol, IESECShopProductsSelectButtonContainerDelegate, IGListBindable> {
    IESECShopProductsSelectButtonContainer *_selectButtonContainer;
    BOOL _showSwitchButton;
    BOOL _needReverse;
    long long _productTabStyle;
    unsigned long long _pickButtonLocation;
    id<IESECStoreFilterCollectionViewCellDelegate> _delegate;
    IESECStoreFilterDiffableModel *_model;
    IESECSlidingTabbarView *_tabView;
    UIButton *_columnSwitchButton;
    IESECButton *_liveProductButton;
    IESECShopBubbleView *_bubbleView;
    id /* block */ _popupClose;
    NSTimer *_timer;
}

@property (retain, nonatomic) IESECStoreFilterDiffableModel *model;
@property (retain, nonatomic) IESECSlidingTabbarView *tabView;
@property (nonatomic) BOOL needReverse;
@property (retain, nonatomic) UIButton *columnSwitchButton;
@property (retain, nonatomic) IESECButton *liveProductButton;
@property (retain, nonatomic) IESECShopBubbleView *bubbleView;
@property (copy, nonatomic) id /* block */ popupClose;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL showSwitchButton;
@property (nonatomic) long long productTabStyle;
@property (nonatomic) unsigned long long pickButtonLocation;
@property (weak, nonatomic) id<IESECStoreFilterCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ indexChanged;

- (void)dismissBubbleIfNeeded;
- (void)setTabView:(id)arg0;
- (BOOL)needReverse;
- (void)setNeedReverse:(BOOL)arg0;
- (void)bindViewModel:(id)arg0;
- (void)showBubble;
- (void)switchButtonTapped;
- (BOOL)showSwitchButton;
- (void)setShowSwitchButton:(BOOL)arg0;
- (id)popupManager;
- (long long)productTabStyle;
- (void)setProductTabStyle:(long long)arg0;
- (void)switchButtonShowed;
- (void)showWithTask:(id)arg0 closeCallback:(id /* block */)arg1;
- (void)setPickButtonLocation:(unsigned long long)arg0;
- (void)configProductTabStyle:(long long)arg0 ShowSwitchButton:(BOOL)arg1;
- (void)selectButtonTagDidClickAtIndex:(long long)arg0;
- (id /* block */)popupClose;
- (void)setPopupClose:(id /* block */)arg0;
- (id)columnSwitchButton;
- (id)liveProductButton;
- (void)updateSwitchButtonWithProductTabStyle:(long long)arg0;
- (void)couponFilterButtonShowed;
- (void)liveProductButtonShowed;
- (void)bottomTabBubbleTimeUp;
- (void)liveProductButtonTapped:(id)arg0;
- (unsigned long long)pickButtonLocation;
- (void)setColumnSwitchButton:(id)arg0;
- (void)setLiveProductButton:(id)arg0;
- (id)timer;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)mainScrollView;
- (void)setSelectedIndex:(unsigned long long)arg0 animated:(BOOL)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg0;
- (void)setUpViews;
- (id)tabView;

@end
