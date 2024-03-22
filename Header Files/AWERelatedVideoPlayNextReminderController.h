//
//     Generated by private class-dump
//

@class AWERelatedVideoPlayNextMixVideoView;

@interface AWERelatedVideoPlayNextReminderController : AWEVideoPlayControlBaseController {
    BOOL _hasShownReminderView;
    AWERelatedVideoPlayNextMixVideoView *_playNextMixVideoView;
}

@property (retain, nonatomic) AWERelatedVideoPlayNextMixVideoView *playNextMixVideoView;
@property (nonatomic) BOOL hasShownReminderView;

- (void)setHide:(BOOL)arg0;
- (void)setAppear:(BOOL)arg0;
- (void)bindEvent;
- (id)playNextMixVideoView;
- (void)setHasShownReminderView:(BOOL)arg0;
- (void)updatePlayerControlView;
- (void)showPlayingNextMixVideoTipsWithCompletion:(id /* block */)arg0;
- (void)updateRemindViewLayout;
- (void)showReminderView:(id)arg0 duration:(double)arg1 buttonTitle:(id)arg2 withCompletion:(id /* block */)arg3;
- (BOOL)hasShownReminderView;
- (void)trackClickReminderView:(BOOL)arg0 clickReplay:(BOOL)arg1;
- (BOOL)showMixVideoReminderView:(long long)arg0 withCompletion:(id /* block */)arg1;
- (void)trackShowReminderView;
- (void)setPlayNextMixVideoView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end