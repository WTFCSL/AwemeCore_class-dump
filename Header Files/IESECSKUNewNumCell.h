//
//     Generated by private class-dump
//

@class UIStackView, IESECHighlightButton, IESECSKUNumberViewModel, UILabel;
@protocol IESECSKUNumberCellDelegate;

@interface IESECSKUNewNumCell : UICollectionViewCell {
    id<IESECSKUNumberCellDelegate> _delegate;
    IESECSKUNumberViewModel *_viewModel;
    UIStackView *_mainStackView;
    UILabel *_titleLabel;
    UILabel *_stockLabel;
    UILabel *_limitLabel;
    UILabel *_numberLabel;
    IESECHighlightButton *_minusButton;
    IESECHighlightButton *_plusButton;
}

@property (retain, nonatomic) UIStackView *mainStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *stockLabel;
@property (retain, nonatomic) UILabel *limitLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) IESECHighlightButton *minusButton;
@property (retain, nonatomic) IESECHighlightButton *plusButton;
@property (weak, nonatomic) id<IESECSKUNumberCellDelegate> delegate;
@property (retain, nonatomic) IESECSKUNumberViewModel *viewModel;

+ (struct CGSize { double x0; double x1; })getNumSizeWithBoundingSize:(struct CGSize { double x0; double x1; })arg0;

- (id)limitLabel;
- (void)setLimitLabel:(id)arg0;
- (void)minus;
- (void)plus;
- (id)stockLabel;
- (void)setStockLabel:(id)arg0;
- (void)setMinusButton:(id)arg0;
- (id)plusButton;
- (void)setPlusButton:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)setupAccessibility;
- (id)minusButton;
- (id)mainStackView;
- (void)setMainStackView:(id)arg0;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg0;

@end