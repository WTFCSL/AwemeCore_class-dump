//
//     Generated by private class-dump
//

@class IESLiveVSGiftItem, UIImageView, UILabel, UIView;

@interface IESLiveVSGiftSelectedView : UIView {
    UIView *_contentView;
    UIImageView *_backgroundImageView;
    UIImageView *_giftImageView;
    UILabel *_priceLabel;
    UIView *_bottomContainer;
    UILabel *_titleLabel;
    IESLiveVSGiftItem *_item;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *giftImageView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveVSGiftItem *item;

- (id)giftImageView;
- (void)setGiftImageView:(id)arg0;
- (void)updateWithItem:(id)arg0 giftImage:(id)arg1 bgImage:(id)arg2;
- (void)showGiftScaleAnimation;
- (id)item;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setTitleLabel:(id)arg0;
- (void)setItem:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (void)setBackgroundImageView:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg0;

@end
