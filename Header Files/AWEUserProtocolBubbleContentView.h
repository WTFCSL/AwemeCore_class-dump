//
//     Generated by private class-dump
//

@class UILabel, UIImageView, AWEUserProtocolBubbleConfig;

@interface AWEUserProtocolBubbleContentView : UIView {
    UILabel *_bubbleTextLabel;
    UIImageView *_clickGuidView;
    AWEUserProtocolBubbleConfig *_config;
}

@property (retain, nonatomic) UILabel *bubbleTextLabel;
@property (retain, nonatomic) UIImageView *clickGuidView;
@property (retain, nonatomic) AWEUserProtocolBubbleConfig *config;

- (id)initWithBubbleConfig:(id)arg0;
- (id)bubbleTextLabel;
- (id)clickGuidView;
- (void)setBubbleTextLabel:(id)arg0;
- (void)setClickGuidView:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setupUI;

@end
