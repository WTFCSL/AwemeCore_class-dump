//
//     Generated by private class-dump
//

@class IESECCommentSKUViewModel, NSString, IESECCommentSKUConfirmBottom, IESECHighlightButton, IESECCommentSKUContentViewModel, NSMutableArray, IESECCommentNewSKUContentView, UILabel;
@protocol IESECCommentNewSKUViewDelegate;

@interface IESECCommentNewSKUView : UIView <IESECCommentNewSKUContentViewDelegate> {
    id<IESECCommentNewSKUViewDelegate> _delegate;
    IESECCommentSKUViewModel *_model;
    IESECCommentSKUContentViewModel *_contentViewModel;
    NSString *_productTitle;
    UILabel *_productTitleLabel;
    IESECHighlightButton *_closeButton;
    UILabel *_skuSelectedLabel;
    IESECCommentNewSKUContentView *_contentView;
    IESECCommentSKUConfirmBottom *_confirmButton;
    IESECHighlightButton *_reloadButton;
    NSMutableArray *_selectedElements;
    NSMutableArray *_deSelectedElements;
    NSMutableArray *_skuTagNames;
}

@property (retain, nonatomic) IESECCommentSKUViewModel *model;
@property (retain, nonatomic) IESECCommentSKUContentViewModel *contentViewModel;
@property (copy, nonatomic) NSString *productTitle;
@property (retain, nonatomic) UILabel *productTitleLabel;
@property (retain, nonatomic) IESECHighlightButton *closeButton;
@property (retain, nonatomic) UILabel *skuSelectedLabel;
@property (retain, nonatomic) IESECCommentNewSKUContentView *contentView;
@property (retain, nonatomic) IESECCommentSKUConfirmBottom *confirmButton;
@property (retain, nonatomic) IESECHighlightButton *reloadButton;
@property (retain, nonatomic) NSMutableArray *selectedElements;
@property (retain, nonatomic) NSMutableArray *deSelectedElements;
@property (retain, nonatomic) NSMutableArray *skuTagNames;
@property (weak, nonatomic) id<IESECCommentNewSKUViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)productTitle;
- (void)setProductTitle:(id)arg0;
- (void)setReloadButton:(id)arg0;
- (id)reloadButton;
- (void)tapCloseButton;
- (id)contentViewModel;
- (void)setContentViewModel:(id)arg0;
- (void)didTapCommentSKUCell;
- (void)setupMasonry;
- (void)reloadSKUView;
- (void)skuSelectChanged:(id)arg0;
- (void)clearSKURecord;
- (void)initSelectSKUElement:(id)arg0;
- (id)productTitleLabel;
- (id)skuSelectedLabel;
- (void)tapResetButton;
- (id)deSelectedElements;
- (id)skuTagNames;
- (id)getSKUElementLabelText;
- (void)updateSelectedSKUElement:(id)arg0;
- (void)didTapCommentSKUHeaderView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 skuModel:(id)arg1 productTitle:(id)arg2;
- (void)setProductTitleLabel:(id)arg0;
- (void)setSkuSelectedLabel:(id)arg0;
- (void)setSelectedElements:(id)arg0;
- (void)setDeSelectedElements:(id)arg0;
- (void)setSkuTagNames:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)selectedElements;
- (void)confirm;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
