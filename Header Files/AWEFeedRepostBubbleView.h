//
//     Generated by private class-dump
//

@class UIImageView, NSTimer, NSDictionary, YYLabel;

@interface AWEFeedRepostBubbleView : UIView {
    UIImageView *_bubbleImageView;
    YYLabel *_contentLabel;
    YYLabel *_titleLabel;
    NSTimer *_dismissTimer;
    NSDictionary *_logDict;
}

@property (retain, nonatomic) UIImageView *bubbleImageView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (retain, nonatomic) NSDictionary *logDict;

+ (BOOL)requiresConstraintBasedLayout;

- (void)setLogDict:(id)arg0;
- (id)logDict;
- (void)configWithContent:(id)arg0;
- (void)tapBubbleView:(id)arg0;
- (BOOL)isPure3xEmoji:(id)arg0;
- (void)dismissAnimatied:(BOOL)arg0;
- (void)showOnView:(id)arg0 content:(id)arg1 dismissTime:(double)arg2 logDict:(id)arg3;
- (id)init;
- (void)setDismissTimer:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)dismissTimer;
- (void)setTitleLabel:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)bubbleImageView;
- (void)setBubbleImageView:(id)arg0;

@end
