//
//     Generated by private class-dump
//

@class BDImageView, NSString, UIImageView, AWEAwemeModel, YYLabel;

@interface AWEAdNativeAnchorShopView : UIView <AWEAdNativeAnchorViewProtocol> {
    id /* block */ adClickBlock;
    long long componentType;
    long long buttonHeight;
    AWEAwemeModel *model;
    BDImageView *_iconImageView;
    UIImageView *_topLittleImageView;
    UIImageView *_bottomLittleImageView;
    YYLabel *_descriptionLabel;
    YYLabel *_titleLabel;
}

@property (retain, nonatomic) BDImageView *iconImageView;
@property (retain, nonatomic) UIImageView *topLittleImageView;
@property (retain, nonatomic) UIImageView *bottomLittleImageView;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long componentType;
@property (nonatomic) long long buttonHeight;
@property (copy, nonatomic) id /* block */ adClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)arg0;
- (void)setUpConstraint;
- (void)onAnchorClicked:(id)arg0;
- (id)topLittleImageView;
- (id)bottomLittleImageView;
- (void)setUpArrowImage;
- (void)setUpDescriptionLabel:(id)arg0;
- (void)setUpTitleLabel:(id)arg0;
- (void)setUpCoverImage:(id)arg0;
- (void)setUpIconImage:(id)arg0;
- (id /* block */)adClickBlock;
- (void)setAdClickBlock:(id /* block */)arg0;
- (void)setTopLittleImageView:(id)arg0;
- (void)setBottomLittleImageView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (long long)buttonHeight;
- (id)model;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (long long)componentType;
- (void)setComponentType:(long long)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setButtonHeight:(long long)arg0;
- (void)setUpUI;

@end
