//
//     Generated by private class-dump
//

@class UILabel;

@interface AWEMVChannelPlayerCardPlayingTipElement : AWEMVChannelPlayerCardBaseElement {
    UILabel *_tipLabel;
}

@property (retain, nonatomic) UILabel *tipLabel;

- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)updateState:(long long)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)viewDidLoad;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;

@end
