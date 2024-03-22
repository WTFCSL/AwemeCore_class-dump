//
//     Generated by private class-dump
//

@class UIStackView, IESLiveVSPrivilegeVideoPlayerSeekBarView, UIButton, UIView, IESLiveVSPauseAnimButton, UILabel;

@interface IESLiveVSPrivilegeVideoPlayerControl : NSObject {
    BOOL _isPortraitStream;
    BOOL _pause;
    UIView *_view;
    long long _playedDuration;
    long long _totalDuration;
    id /* block */ _pauseButtonDidClickBlock;
    UIButton *_changeOrientationButton;
    id /* block */ _orientationButtonDidClickBlock;
    id /* block */ _updateProgressBlock;
    UIStackView *_containerStackView;
    IESLiveVSPauseAnimButton *_pauseAnimationButton;
    UIView *_playedDurationContainerView;
    UILabel *_playedDurationLabel;
    IESLiveVSPrivilegeVideoPlayerSeekBarView *_seekBarView;
    UIView *_totalDurationContainerView;
    UILabel *_totalDurationLabel;
}

@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) IESLiveVSPauseAnimButton *pauseAnimationButton;
@property (retain, nonatomic) UIView *playedDurationContainerView;
@property (retain, nonatomic) UILabel *playedDurationLabel;
@property (retain, nonatomic) IESLiveVSPrivilegeVideoPlayerSeekBarView *seekBarView;
@property (retain, nonatomic) UIView *totalDurationContainerView;
@property (retain, nonatomic) UILabel *totalDurationLabel;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) long long playedDuration;
@property (nonatomic) long long totalDuration;
@property (nonatomic) BOOL isPortraitStream;
@property (nonatomic) BOOL pause;
@property (copy, nonatomic) id /* block */ pauseButtonDidClickBlock;
@property (retain, nonatomic) UIButton *changeOrientationButton;
@property (copy, nonatomic) id /* block */ orientationButtonDidClickBlock;
@property (copy, nonatomic) id /* block */ updateProgressBlock;

- (long long)playedDuration;
- (void)setPlayedDuration:(long long)arg0;
- (void)setIsPortraitStream:(BOOL)arg0;
- (BOOL)isPortraitStream;
- (void)setPlayedDurationLabel:(id)arg0;
- (id)playedDurationLabel;
- (void)setTotalDurationLabel:(id)arg0;
- (id)totalDurationLabel;
- (void)setSeekBarView:(id)arg0;
- (id)seekBarView;
- (void)setPauseAnimationButton:(id)arg0;
- (id)pauseAnimationButton;
- (void)pauseAnimationButtonClick;
- (void)setPlayedDurationContainerView:(id)arg0;
- (id)playedDurationContainerView;
- (id /* block */)updateProgressBlock;
- (void)setTotalDurationContainerView:(id)arg0;
- (id)totalDurationContainerView;
- (id)changeOrientationButton;
- (void)updatePlayedDuration:(long long)arg0 totalDuration:(long long)arg1 isPlaying:(BOOL)arg2;
- (id)timeStringFromTimeInterval:(long long)arg0;
- (id /* block */)pauseButtonDidClickBlock;
- (id /* block */)orientationButtonDidClickBlock;
- (void)changeOrientationButtonClick;
- (id)initWithStartTime:(long long)arg0 totalDuration:(long long)arg1 isPortraitStream:(BOOL)arg2;
- (void)setPauseButtonDidClickBlock:(id /* block */)arg0;
- (void)setChangeOrientationButton:(id)arg0;
- (void)setOrientationButtonDidClickBlock:(id /* block */)arg0;
- (void)setUpdateProgressBlock:(id /* block */)arg0;
- (long long)totalDuration;
- (void).cxx_destruct;
- (void)setup;
- (void)setPause:(BOOL)arg0;
- (void)setView:(id)arg0;
- (BOOL)pause;
- (id)view;
- (void)setTotalDuration:(long long)arg0;
- (id)containerStackView;
- (void)setContainerStackView:(id)arg0;

@end