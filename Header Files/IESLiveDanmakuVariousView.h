//
//     Generated by private class-dump
//

@class IESLiveDanmakuNormalLabel, UIImageView, UIView, IESLiveAnimatedImageView, IESLiveDanmakuVariousViewModel;
@protocol IESLiveLanguageService;

@interface IESLiveDanmakuVariousView : IESLiveDanmakuBaseView {
    UIView *_containerView;
    UIImageView *_avatarView;
    UIImageView *_backgroundView;
    UIImageView *_avatarBadgeView;
    IESLiveDanmakuNormalLabel *_contentLabel;
    double _cacheDanmukuWidth;
    id<IESLiveLanguageService> _languageService;
    IESLiveAnimatedImageView *_badgeView;
    IESLiveDanmakuVariousViewModel *_viewModel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIImageView *avatarBadgeView;
@property (retain, nonatomic) IESLiveDanmakuNormalLabel *contentLabel;
@property (nonatomic) double cacheDanmukuWidth;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) IESLiveAnimatedImageView *badgeView;
@property (retain, nonatomic) IESLiveDanmakuVariousViewModel *viewModel;

- (id)languageService;
- (void)setLanguageService:(id)arg0;
- (void)updateWithNode:(id)arg0;
- (void)setCacheDanmukuWidth:(double)arg0;
- (double)cacheDanmukuWidth;
- (BOOL)pinModeRequired;
- (struct CGPoint { double x0; double x1; })pinningPosition;
- (void)refreshDanmakuWithViewModel:(id)arg0;
- (double)avatarContentSpacing;
- (BOOL)enableBadgeIcon;
- (void)setAvatarBadgeView:(id)arg0;
- (id)avatarBadgeView;
- (id)init;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setBadgeView:(id)arg0;
- (void)setContainerView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (id)badgeView;
- (void)setBackgroundView:(id)arg0;
- (void)setupViews;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
