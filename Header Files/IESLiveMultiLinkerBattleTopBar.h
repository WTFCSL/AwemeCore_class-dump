//
//     Generated by private class-dump
//

@class HTSLivePaddingLabel, NSString, UIImageView, UIView, UILabel;

@interface IESLiveMultiLinkerBattleTopBar : UIView {
    unsigned long long _type;
    long long _remainSeconds;
    NSString *_schemaURL;
    UIImageView *_bgView;
    UIImageView *_bgMaskView;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UIImageView *_preIconImageView;
    UILabel *_titleLabel;
    HTSLivePaddingLabel *_countDownLabel;
    UIImageView *_lineImageView;
    UILabel *_topicLabel;
    UIImageView *_arrowImageView;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long remainSeconds;
@property (copy, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UIImageView *bgMaskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *preIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HTSLivePaddingLabel *countDownLabel;
@property (retain, nonatomic) UIImageView *lineImageView;
@property (retain, nonatomic) UILabel *topicLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (id)schemaURL;
- (id)countDownLabel;
- (void)setCountDownLabel:(id)arg0;
- (void)setSchemaURL:(id)arg0;
- (id)lineImageView;
- (void)setLineImageView:(id)arg0;
- (void)onClicked;
- (id)topicLabel;
- (void)setTopicLabel:(id)arg0;
- (id)bgMaskView;
- (void)setBgMaskView:(id)arg0;
- (void)updateCountDownLabel:(long long)arg0;
- (long long)remainSeconds;
- (id)countDownStr:(long long)arg0;
- (void)setRemainSeconds:(long long)arg0;
- (id)preIconImageView;
- (void)trackTopBarClicked;
- (BOOL)isVote;
- (BOOL)isMultiInteract;
- (id)initWithType:(unsigned long long)arg0 seconds:(long long)arg1;
- (void)updateViewsWithType:(unsigned long long)arg0 seconds:(long long)arg1;
- (void)showStealTowerBreathAnimation;
- (void)updateViewsWhenPunish;
- (void)setPreIconImageView:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (unsigned long long)type;
- (void)setContainerView:(id)arg0;
- (id)fontDescriptor;
- (void)setType:(unsigned long long)arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (id)iconImageView;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end