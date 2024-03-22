//
//     Generated by private class-dump
//

@class UIButton, BDSCImageView, UILabel;

@interface BDByteScreenCastXsgNotFindNotiTipView : UIView {
    UIButton *_tagButton;
    UILabel *_titleLabel;
    BDSCImageView *_icon;
}

@property (retain, nonatomic) BDSCImageView *icon;
@property (retain, nonatomic) UIButton *tagButton;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)tagButton;
- (void)setTagButton:(id)arg0;
- (id)initWithImageUrl:(id)arg0 Title:(id)arg1 tagText:(id)arg2;
- (id)initWithImageNamed:(id)arg0 Title:(id)arg1 tagText:(id)arg2;
- (void)updateTagShow:(BOOL)arg0;
- (void)setupSubviewsWithTitle:(id)arg0 tagText:(id)arg1;
- (struct CGPoint { double x0; double x1; })tagButtonPoint;
- (double)tagButtonWidth;
- (double)titleLableHeight;
- (id)initWithImage:(id)arg0 Title:(id)arg1 tagText:(id)arg2;
- (id)icon;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIcon:(id)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)rebuildConstraints;

@end
