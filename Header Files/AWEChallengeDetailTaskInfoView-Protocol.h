//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView;
@protocol AWEChallengeDetailHorizontalVideoView;

@protocol AWEChallengeDetailTaskInfoView <AWECrotocol>

@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) double bottomPadding;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *taskExampleView;

- (void)updateWithChallenge:(id)arg0;
- (id)taskExampleView;
- (void)setTaskExampleView:(id)arg0;
- (void)setPreferredMaxLayoutWidth:(double)arg0;
- (double)bottomPadding;
- (void)setDescriptionLabel:(id)arg0;
- (id)descriptionLabel;
- (id)nameLabel;
- (double)preferredMaxLayoutWidth;
- (void)setNameLabel:(id)arg0;
- (void)setBottomPadding:(double)arg0;
- (id)detailButton;
- (void)setDetailButton:(id)arg0;

@end