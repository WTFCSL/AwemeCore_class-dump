//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWETeenAlbumCardLabel : UIView {
    BOOL _labelType;
    UIImageView *_iconView;
    UIImageView *_bgView;
    UILabel *_titleLabel;
}

@property (nonatomic) BOOL labelType;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)configWithModel:(id)arg0;
- (void)p_setupView;
- (id)p_labelText;
- (struct CGSize { double x0; double x1; })p_labelSize;
- (BOOL)p_hasIcon;
- (BOOL)labelType;
- (id)init;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (void)setLabelType:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;

@end
