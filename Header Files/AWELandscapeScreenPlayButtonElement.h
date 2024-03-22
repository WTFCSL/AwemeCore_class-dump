//
//     Generated by private class-dump
//

@class UIButton;

@interface AWELandscapeScreenPlayButtonElement : AWELandscapeInteractionBaseElement {
    UIButton *_screenPlayButton;
}

@property (retain, nonatomic) UIButton *screenPlayButton;

- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)didEnterLandscape;
- (BOOL)shouldResponseGestureRecognizer:(id)arg0;
- (BOOL)handleResponseGestureRecognizer:(id)arg0;
- (void)bindEvents;
- (id)screenPlayButton;
- (void)setScreenPlayButton:(id)arg0;
- (BOOL)shouldSupportDoublePause;
- (void)handleClickScreenPlayButtonWithMethod:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)viewDidLoad;
- (void)updatePlayState;

@end
