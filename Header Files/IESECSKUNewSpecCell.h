//
//     Generated by private class-dump
//

@class UIStackView, UIImageView, UILabel, UIView, IESECSKUNewSpecItemModel;
@protocol IESECSKUNewSpecCellDelegate;

@interface IESECSKUNewSpecCell : UICollectionViewCell {
    id<IESECSKUNewSpecCellDelegate> _delegate;
    IESECSKUNewSpecItemModel *_viewModel;
    UIView *_content;
    UIStackView *_mainStackView;
    UILabel *_nameLabel;
    UIImageView *_picImageView;
    UILabel *_priceLabel;
    UIImageView *_tipIcon;
    UIView *_tipView;
    UILabel *_tipLabel;
}

@property (retain, nonatomic) UIView *content;
@property (retain, nonatomic) UIStackView *mainStackView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *picImageView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIImageView *tipIcon;
@property (retain, nonatomic) UIView *tipView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (weak, nonatomic) id<IESECSKUNewSpecCellDelegate> delegate;
@property (retain, nonatomic) IESECSKUNewSpecItemModel *viewModel;

+ (id)normalBGColor;
+ (id)nameNormalColor;
+ (id)borderNormalColor;
+ (id)nameDisableColor;
+ (id)miniNameFont;
+ (double)specMaxWidth:(id)arg0;
+ (id)selectedNameFont;
+ (BOOL)isSignleLine:(id)arg0 icon:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
+ (id)selectedMiniNameFont;
+ (struct CGSize { double x0; double x1; })specSize:(id)arg0 icon:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
+ (struct CGSize { double x0; double x1; })cellSizeWithItem:(id)arg0;
+ (id)nameFont;

- (void)updateAccessibility;
- (void)tapGestureFired:(id)arg0;
- (id)nameSelectedColor;
- (id)selectedBGColor;
- (id)borderSelectColor;
- (id)picImageView;
- (id)tipIcon;
- (void)tapCoverImage:(id)arg0;
- (void)setPicImageView:(id)arg0;
- (void)setTipIcon:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (void)setContent:(id)arg0;
- (id)nameLabel;
- (id)viewModel;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (void)updateUI;
- (id)mainStackView;
- (void)setMainStackView:(id)arg0;
- (id)tipView;
- (void)setTipView:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end
