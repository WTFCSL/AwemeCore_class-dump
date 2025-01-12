//
//     Generated by private class-dump
//

@class UIStackView, NSString, UIImageView, AWEButton, UIView, UILabel, UIButton;

@interface AWEVideoShareTokenCardView : AWEShareReflowBaseView {
    BOOL _hideReportButton;
    BOOL _canReflowIM;
    BOOL _hidePlayBtn;
    BOOL _hideOnlyVideoBtn;
    BOOL _useAvatarStyle;
    id /* block */ _tapVideoCoverBlock;
    id /* block */ _tapDismissButtonBlock;
    id /* block */ _tapSharerButtonBlock;
    id /* block */ _tapPrimaryButtonBlock;
    id /* block */ _tapSecondaryButtonBlock;
    id /* block */ _tapReportButtonBlock;
    id /* block */ _tapUserDetailButtonBlock;
    UIView *_contentView;
    UIImageView *_coverImageView;
    UIButton *_closeButton;
    UIImageView *_playIconImageView;
    UIStackView *_headStackView;
    UILabel *_titleLabel;
    UIButton *_shareUserButton;
    UIButton *_userDetailButton;
    UIStackView *_actionStackView;
    AWEButton *_primaryButton;
    AWEButton *_secondarynButton;
    UIButton *_reportButton;
    UIImageView *_avatarView;
    UILabel *_avatarNameLabel;
    UILabel *_avatarTitleLabel;
    NSString *_primaryButtonText;
    NSString *_secondarynButtonText;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIStackView *headStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *shareUserButton;
@property (retain, nonatomic) UIButton *userDetailButton;
@property (retain, nonatomic) UIStackView *actionStackView;
@property (retain, nonatomic) AWEButton *primaryButton;
@property (retain, nonatomic) AWEButton *secondarynButton;
@property (retain, nonatomic) UIButton *reportButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *avatarNameLabel;
@property (retain, nonatomic) UILabel *avatarTitleLabel;
@property (nonatomic) BOOL hideReportButton;
@property (nonatomic) BOOL canReflowIM;
@property (nonatomic) BOOL hidePlayBtn;
@property (nonatomic) BOOL hideOnlyVideoBtn;
@property (nonatomic) BOOL useAvatarStyle;
@property (copy, nonatomic) NSString *primaryButtonText;
@property (copy, nonatomic) NSString *secondarynButtonText;
@property (copy, nonatomic) id /* block */ tapVideoCoverBlock;
@property (copy, nonatomic) id /* block */ tapDismissButtonBlock;
@property (copy, nonatomic) id /* block */ tapSharerButtonBlock;
@property (copy, nonatomic) id /* block */ tapPrimaryButtonBlock;
@property (copy, nonatomic) id /* block */ tapSecondaryButtonBlock;
@property (copy, nonatomic) id /* block */ tapReportButtonBlock;
@property (copy, nonatomic) id /* block */ tapUserDetailButtonBlock;

- (BOOL)useNewStyle;
- (id)reportButton;
- (void)setReportButton:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)p_setupUI;
- (id)playIconImageView;
- (void)setPlayIconImageView:(id)arg0;
- (void)reportButtonTapped:(id)arg0;
- (id /* block */)tapDismissButtonBlock;
- (id /* block */)tapPrimaryButtonBlock;
- (void)setTapDismissButtonBlock:(id /* block */)arg0;
- (void)setTapPrimaryButtonBlock:(id /* block */)arg0;
- (void)setTapReportButtonBlock:(id /* block */)arg0;
- (id)initWithHideReportButton:(BOOL)arg0 hideOnlyVideoBtn:(BOOL)arg1 canReflowIM:(BOOL)arg2;
- (void)setTapSharerButtonBlock:(id /* block */)arg0;
- (void)setTapVideoCoverBlock:(id /* block */)arg0;
- (void)setTapSecondaryButtonBlock:(id /* block */)arg0;
- (void)setTapUserDetailButtonBlock:(id /* block */)arg0;
- (void)updateWithModel:(id)arg0 user:(id)arg1;
- (void)videoCoverTapped:(id)arg0;
- (id /* block */)tapReportButtonBlock;
- (id)shareUserButton;
- (BOOL)canReflowIM;
- (id)userDetailButton;
- (BOOL)useAvatarStyle;
- (id)avatarNameLabel;
- (id)avatarTitleLabel;
- (id)secondarynButton;
- (id)secondarynButtonText;
- (BOOL)hidePlayBtn;
- (id /* block */)tapVideoCoverBlock;
- (id /* block */)tapSecondaryButtonBlock;
- (id /* block */)tapUserDetailButtonBlock;
- (void)shareUserButtonTapped:(id)arg0;
- (void)updateButtonStyle:(id)arg0 isPrimary:(BOOL)arg1;
- (void)secondarynButtonTapped:(id)arg0;
- (void)personDetailButtonTapped:(id)arg0;
- (BOOL)hideOnlyVideoBtn;
- (id /* block */)tapSharerButtonBlock;
- (id)headStackView;
- (void)setHeadStackView:(id)arg0;
- (void)setShareUserButton:(id)arg0;
- (void)setUserDetailButton:(id)arg0;
- (id)actionStackView;
- (void)setActionStackView:(id)arg0;
- (void)setSecondarynButton:(id)arg0;
- (void)setAvatarNameLabel:(id)arg0;
- (void)setAvatarTitleLabel:(id)arg0;
- (BOOL)hideReportButton;
- (void)setHideReportButton:(BOOL)arg0;
- (void)setCanReflowIM:(BOOL)arg0;
- (void)setHidePlayBtn:(BOOL)arg0;
- (void)setHideOnlyVideoBtn:(BOOL)arg0;
- (void)setUseAvatarStyle:(BOOL)arg0;
- (void)setSecondarynButtonText:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (void)dismiss;
- (id)avatarView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)willMoveToWindow:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)closeButtonTapped:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)primaryButton;
- (void)setPrimaryButton:(id)arg0;
- (void)primaryButtonTapped:(id)arg0;
- (id)primaryButtonText;
- (void)setPrimaryButtonText:(id)arg0;

@end
