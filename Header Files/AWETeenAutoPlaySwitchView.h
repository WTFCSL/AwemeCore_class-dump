//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWETeenAutoPlaySwitchView : UIView {
    BOOL _showingTimerTip;
    UIView *_switchContentView;
    UILabel *_timerView;
    UIImageView *_pauseImageView;
    UIImageView *_refreshView;
    UIImageView *_playImageView;
}

@property (retain, nonatomic) UIView *switchContentView;
@property (retain, nonatomic) UILabel *timerView;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (retain, nonatomic) UIImageView *refreshView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (nonatomic) BOOL showingTimerTip;

- (id)refreshView;
- (id)pauseImageView;
- (void)setPauseImageView:(id)arg0;
- (void)updateViewWithAutoPlayState:(BOOL)arg0 animated:(BOOL)arg1;
- (void)updatePlayTimeTip:(BOOL)arg0 withText:(id)arg1 autoPlayState:(BOOL)arg2;
- (BOOL)showingTimerTip;
- (id)switchContentView;
- (void)setShowingTimerTip:(BOOL)arg0;
- (void)setSwitchContentView:(id)arg0;
- (void)setRefreshView:(id)arg0;
- (void).cxx_destruct;
- (id)timerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (void)setTimerView:(id)arg0;
- (id)playImageView;
- (void)setPlayImageView:(id)arg0;

@end