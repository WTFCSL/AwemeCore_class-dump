//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEModernFeedMusicInfoBottomView : UIView {
    id /* block */ _enterMusicDetailBlock;
    UIImageView *_iconView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ enterMusicDetailBlock;

- (void)configWithModel:(id)arg0;
- (void)viewTapped;
- (void)setEnterMusicDetailBlock:(id /* block */)arg0;
- (id /* block */)enterMusicDetailBlock;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;

@end
