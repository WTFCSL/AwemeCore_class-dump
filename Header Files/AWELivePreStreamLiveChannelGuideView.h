//
//     Generated by private class-dump
//

@class AWELivePreStreamLiveChannelGuideConfig;

@interface AWELivePreStreamLiveChannelGuideView : UIView {
    AWELivePreStreamLiveChannelGuideConfig *_config;
}

@property (retain, nonatomic) AWELivePreStreamLiveChannelGuideConfig *config;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 config:(id)arg1;
- (id)jumpBtnWithImageURLList:(id)arg0 title:(id)arg1;
- (void)btnClick;
- (void)maskClick;
- (void)didLongPress;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setupUI;

@end
