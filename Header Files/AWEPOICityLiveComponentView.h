//
//     Generated by private class-dump
//

@class CAGradientLayer, AWEPOICityLiveComponentViewModel, UIImageView, NSString, UIView, UILabel, AWEPOIDetailAwemePlayerViewController;
@protocol AWELiveStreamPlayer;

@interface AWEPOICityLiveComponentView : DitoComponentView <IESLivePlayerControllerDelegate, AWEPOIDetailAwemePlayerCellProtocol> {
    BOOL _videoCellIsShown;
    AWEPOICityLiveComponentViewModel *_viewModel;
    id<AWELiveStreamPlayer> _livePlayer;
    UIView *_coverContainerView;
    UIView *_statusView;
    UILabel *_statusLabel;
    CAGradientLayer *_statusBackgroundLayer;
    UIView *_statusDetailBackgroundView;
    UIImageView *_statusDetailIconView;
    UILabel *_statusDetailLabel;
    CAGradientLayer *_userBackgroundLayer;
    UIImageView *_userAvatarImageView;
    UILabel *_userNickNameLabel;
    UILabel *_contentLabel;
}

@property (weak, nonatomic) AWEPOICityLiveComponentViewModel *viewModel;
@property (retain, nonatomic) id<AWELiveStreamPlayer> livePlayer;
@property (readonly, nonatomic) UIView *coverContainerView;
@property (readonly, nonatomic) UIView *statusView;
@property (readonly, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) CAGradientLayer *statusBackgroundLayer;
@property (readonly, nonatomic) UIView *statusDetailBackgroundView;
@property (readonly, nonatomic) UIImageView *statusDetailIconView;
@property (readonly, nonatomic) UILabel *statusDetailLabel;
@property (readonly, nonatomic) CAGradientLayer *userBackgroundLayer;
@property (readonly, nonatomic) UIImageView *userAvatarImageView;
@property (readonly, nonatomic) UILabel *userNickNameLabel;
@property (readonly, nonatomic) UILabel *contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL videoCellIsShown;
@property (retain, nonatomic) AWEPOIDetailAwemePlayerViewController *awemePlayer;

- (void)player:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (void)updateViewModel:(id)arg0;
- (id)userAvatarImageView;
- (id)coverContainerView;
- (void)createLivePlayer;
- (void)destroyLivePlayer;
- (id)userBackgroundLayer;
- (void)createSubViews;
- (void)setupSubviewsLayoutConstraint;
- (void)didTapGestureHandler:(id)arg0;
- (id)statusDetailBackgroundView;
- (id)statusDetailIconView;
- (id)statusDetailLabel;
- (id)userNickNameLabel;
- (void)stopPlayingLive;
- (void)startPlayingLive;
- (BOOL)videoCellIsShown;
- (void)setVideoCellIsShown:(BOOL)arg0;
- (id)statusBackgroundLayer;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)didResignActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)prepareForReuse;
- (id)playerView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)player;
- (id)transitionView;
- (void)setupUI;
- (id)contentLabel;
- (void)didEndDisplaying;
- (id)statusLabel;
- (id)statusView;
- (id)livePlayer;
- (void)setLivePlayer:(id)arg0;

@end