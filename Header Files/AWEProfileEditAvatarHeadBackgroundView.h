//
//     Generated by private class-dump
//

@class UIView, AWEProfileEditViewModel, NSString, UIImageView, AWEProfileBannerBGCoverView, UIButton, AWEUserProfileGradientProgressView, UILabel;

@interface AWEProfileEditAvatarHeadBackgroundView : UIView <AWEProfileBannerBGCoverViewDelegate> {
    AWEUserProfileGradientProgressView *_progressView;
    UIButton *_avatarSwitchButton;
    id /* block */ _tapEditBackgroundBlock;
    id /* block */ _tapEditAvatarBlock;
    UIView *_avatarButtonBackgroundView;
    UIButton *_avatarButton;
    UIView *_maskView;
    UIImageView *_cameraImageView;
    UILabel *_currenIndexLabel;
    AWEProfileBannerBGCoverView *_coverView;
    AWEProfileEditViewModel *_viewModel;
    UILabel *_avatarButtonChangeLabel;
}

@property (retain, nonatomic) UIView *avatarButtonBackgroundView;
@property (retain, nonatomic) UIButton *avatarButton;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIImageView *cameraImageView;
@property (retain, nonatomic) UIButton *avatarSwitchButton;
@property (retain, nonatomic) UILabel *currenIndexLabel;
@property (retain, nonatomic) AWEUserProfileGradientProgressView *progressView;
@property (retain, nonatomic) AWEProfileBannerBGCoverView *coverView;
@property (retain, nonatomic) AWEProfileEditViewModel *viewModel;
@property (retain, nonatomic) UILabel *avatarButtonChangeLabel;
@property (copy, nonatomic) id /* block */ tapEditBackgroundBlock;
@property (copy, nonatomic) id /* block */ tapEditAvatarBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)headBackgroundHeight;

- (void)configWithViewModel:(id)arg0;
- (long long)showIndex;
- (void)p_setupSubviews;
- (id)cameraImageView;
- (void)setCameraImageView:(id)arg0;
- (void)selectAvatar:(id)arg0;
- (id)avatarSwitchButton;
- (id /* block */)tapEditAvatarBlock;
- (void)setTapEditAvatarBlock:(id /* block */)arg0;
- (void)setAvatarSwitchButton:(id)arg0;
- (void)updateIndexLabelWithIndex:(unsigned long long)arg0 count:(unsigned long long)arg1;
- (void)p_refreshAvatarWith:(id)arg0;
- (void)p_refreshAvatarButtonChangeLabel:(id)arg0;
- (id)avatarButtonBackgroundView;
- (id)avatarButtonChangeLabel;
- (id)currenIndexLabel;
- (void)headBackgroundTapped:(id)arg0;
- (void)p_configCameraImageUseDarkThemeImage:(BOOL)arg0;
- (id /* block */)tapEditBackgroundBlock;
- (void)observerScrollWith:(id)arg0;
- (void)setTapEditBackgroundBlock:(id /* block */)arg0;
- (void)setAvatarButtonBackgroundView:(id)arg0;
- (void)setCurrenIndexLabel:(id)arg0;
- (void)setAvatarButtonChangeLabel:(id)arg0;
- (void).cxx_destruct;
- (id)maskView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)viewModel;
- (void)setMaskView:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;
- (id)avatarButton;
- (void)setAvatarButton:(id)arg0;

@end
