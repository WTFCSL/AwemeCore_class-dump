//
//     Generated by private class-dump
//

@class AWETeenDonwloadAnimationButton, NSString, UIImageView, UIView, AWEAnimatedButton, AWEUILoadingView;

@interface AWETeenProfileImagePreviewView : UIView {
    BOOL _isCurrentLoginUser;
    id /* block */ _changeButtonClickBlock;
    NSString *_userID;
    long long _type;
    UIImageView *_avatarImageView;
    AWEAnimatedButton *_changeButton;
    AWETeenDonwloadAnimationButton *_downloadButton;
    UIView *_downloadBackgroundView;
    AWEUILoadingView *_indicator;
}

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) BOOL isCurrentLoginUser;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWEAnimatedButton *changeButton;
@property (retain, nonatomic) AWETeenDonwloadAnimationButton *downloadButton;
@property (retain, nonatomic) UIView *downloadBackgroundView;
@property (retain, nonatomic) AWEUILoadingView *indicator;
@property (copy, nonatomic) id /* block */ changeButtonClickBlock;

+ (void)removeImagePreviewView;

- (void)avatarPreviewClicked;
- (void)setIsCurrentLoginUser:(BOOL)arg0;
- (BOOL)isCurrentLoginUser;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 image:(id)arg1 imageURLArray:(id)arg2 userID:(id)arg3 type:(long long)arg4;
- (id)downloadBackgroundView;
- (BOOL)isPreviewingAvatar;
- (id /* block */)changeButtonClickBlock;
- (void)downloadButtonPressed:(id)arg0;
- (void)changeButtonPressed:(id)arg0;
- (void)setChangeButtonClickBlock:(id /* block */)arg0;
- (void)setDownloadBackgroundView:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)show;
- (long long)type;
- (void)setUserID:(id)arg0;
- (void)setIndicator:(id)arg0;
- (id)indicator;
- (void)setType:(long long)arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)setupAccessibility;
- (id)downloadButton;
- (id)changeButton;
- (void)setChangeButton:(id)arg0;
- (void)setDownloadButton:(id)arg0;
- (void)image:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(void *)arg2;

@end
