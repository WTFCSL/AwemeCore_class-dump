//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEMusicSteamingBGMusicPopupView : AWEMusicStreamingBasePopupView {
    UIImageView *_avatarImgView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
}

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;

- (id)avatarImgView;
- (void)setAvatarImgView:(id)arg0;
- (void)setupLayouts;
- (void)showInView:(id)arg0 duration:(double)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
