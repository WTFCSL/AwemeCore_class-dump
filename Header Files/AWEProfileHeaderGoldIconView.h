//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;

@interface AWEProfileHeaderGoldIconView : UIView {
    NSString *_text;
    long long _rewardNum;
    UIView *_containerView;
    UILabel *_textLabel;
    UIImageView *_goldImageView;
    UILabel *_rewardLabel;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long rewardNum;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *goldImageView;
@property (retain, nonatomic) UILabel *rewardLabel;

- (long long)rewardNum;
- (void)setRewardNum:(long long)arg0;
- (id)rewardLabel;
- (void)setRewardLabel:(id)arg0;
- (id)goldImageView;
- (void)configWithText:(id)arg0 rewardNum:(long long)arg1;
- (void)setGoldImageView:(id)arg0;
- (id)textLabel;
- (id)init;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)text;
- (void)setTextLabel:(id)arg0;
- (void)setupUI;

@end
