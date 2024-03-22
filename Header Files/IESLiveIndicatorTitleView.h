//
//     Generated by private class-dump
//

@class HTSLivePaddingLabel, UIImageView, NSTimer, UILabel;
@protocol IESLiveIndicatorTitleViewDelegate, IESLiveKTVSongIndicatorViewModelProtocol;

@interface IESLiveIndicatorTitleView : UIView {
    BOOL _shouldKeepShowTitle;
    BOOL _isShowingTitle;
    BOOL _hasShowMusicInfo;
    BOOL _isShowingForTime;
    UILabel *_titleLabel;
    UILabel *_titleFixLabel;
    HTSLivePaddingLabel *_statusLabel;
    HTSLivePaddingLabel *_statusFixLabel;
    UIImageView *_statusIconView;
    NSTimer *_timer;
    HTSLivePaddingLabel *_tipLabel;
    id<IESLiveKTVSongIndicatorViewModelProtocol> _viewModel;
    id<IESLiveIndicatorTitleViewDelegate> _delegate;
}

@property (nonatomic) BOOL isShowingForTime;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleFixLabel;
@property (retain, nonatomic) HTSLivePaddingLabel *statusLabel;
@property (retain, nonatomic) HTSLivePaddingLabel *statusFixLabel;
@property (retain, nonatomic) UIImageView *statusIconView;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) HTSLivePaddingLabel *tipLabel;
@property (weak, nonatomic) id<IESLiveKTVSongIndicatorViewModelProtocol> viewModel;
@property (nonatomic) BOOL shouldKeepShowTitle;
@property (nonatomic) BOOL isShowingTitle;
@property (nonatomic) BOOL hasShowMusicInfo;
@property (weak, nonatomic) id<IESLiveIndicatorTitleViewDelegate> delegate;

- (id)statusIconView;
- (void)setStatusIconView:(id)arg0;
- (void)showTip:(id)arg0;
- (void)p_layoutLabels;
- (id)titleFixLabel;
- (id)statusFixLabel;
- (void)p_addWaitingTimeObserver;
- (BOOL)shouldKeepShowTitle;
- (void)setIsShowingTitle:(BOOL)arg0;
- (void)setTitleFixLabel:(id)arg0;
- (void)setStatusFixLabel:(id)arg0;
- (BOOL)hasShowMusicInfo;
- (void)showMusicInfo;
- (BOOL)p_isFirstOpenMixKTV;
- (BOOL)isShowingForTime;
- (void)setIsShowingForTime:(BOOL)arg0;
- (void)p_showTitle:(id)arg0;
- (void)setHasShowMusicInfo:(BOOL)arg0;
- (void)setShouldKeepShowTitle:(BOOL)arg0;
- (void)processHighScoreWithTipStr:(id)arg0 avatarURL:(id)arg1;
- (void)onWaiting:(id)arg0;
- (void)p_updateLabelsOnTimerCounting:(long long)arg0;
- (void)p_showTitle:(id)arg0 status:(id)arg1;
- (void)didBindMultiKTV;
- (void)onPlaying:(BOOL)arg0;
- (void)onLyricShow;
- (void)showTipIfNeed;
- (void)showTitle:(id)arg0 forTime:(long long)arg1 completion:(id /* block */)arg2;
- (void)startWaitingTimer:(long long)arg0;
- (BOOL)isShowingTitle;
- (void)remove;
- (id)timer;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (void)stopTimer;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)hide;
- (id)viewModel;
- (void)clear;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;

@end
