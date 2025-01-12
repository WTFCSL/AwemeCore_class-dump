//
//     Generated by private class-dump
//

@class IESECShopGoodsState, IESECShopBaseFilterDiffableModel, NSString, IESECShopContext, IESECCollectionViewSectionLayout;
@protocol IESECStoreFilterSectionControllerSwitchButtonDelegate;

@interface IESECStoreFilterSectionController : IGListSectionController <IESECStoreFilterCollectionViewCellDelegate, IESECCollectionViewSectionLayoutProtocol, IESECShopGoodsStateAttachable> {
    BOOL _showSwitchButton;
    BOOL _needsRemoveCellBackgroundColor;
    long long _scene;
    IESECShopContext *_context;
    IESECCollectionViewSectionLayout *_sectionLayout;
    IESECShopBaseFilterDiffableModel *_model;
    long long _productTabStyle;
    id<IESECStoreFilterSectionControllerSwitchButtonDelegate> _delegate;
    IESECShopGoodsState *_state;
}

@property (retain, nonatomic) IESECShopGoodsState *state;
@property (nonatomic) long long scene;
@property (retain, nonatomic) IESECShopContext *context;
@property (retain, nonatomic) IESECCollectionViewSectionLayout *sectionLayout;
@property (retain, nonatomic) IESECShopBaseFilterDiffableModel *model;
@property (nonatomic) BOOL showSwitchButton;
@property (nonatomic) long long productTabStyle;
@property (weak, nonatomic) id<IESECStoreFilterSectionControllerSwitchButtonDelegate> delegate;
@property (nonatomic) BOOL needsRemoveCellBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (id)sectionLayout;
- (void)switchButtonTapped;
- (BOOL)showSwitchButton;
- (void)setShowSwitchButton:(BOOL)arg0;
- (id)popupManager;
- (void)setSectionLayout:(id)arg0;
- (long long)productTabStyle;
- (void)setProductTabStyle:(long long)arg0;
- (void)attachState:(id)arg0;
- (void)setNeedsRemoveCellBackgroundColor:(BOOL)arg0;
- (void)switchButtonShowed;
- (void)selectButtonShowed:(id)arg0;
- (void)selectButtonTapped:(id)arg0;
- (void)liveProductButtonShowed:(id)arg0;
- (void)liveProductButtonTapped:(id)arg0 model:(id)arg1;
- (BOOL)p_showSelectedButton;
- (BOOL)needsRemoveCellBackgroundColor;
- (long long)numberOfItems;
- (void)setModel:(id)arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (id)state;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setState:(id)arg0;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (long long)scene;
- (id)mainScrollView;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
