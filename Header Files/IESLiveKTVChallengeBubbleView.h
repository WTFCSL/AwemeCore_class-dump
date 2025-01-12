//
//     Generated by private class-dump
//

@class UIImageView, IESLiveGCDTimer, UIView, UILabel, IESLiveKTVChallengeModel;

@interface IESLiveKTVChallengeBubbleView : UIView {
    int _challengeType;
    IESLiveKTVChallengeModel *_challengeModel;
    UIView *_container;
    UIImageView *_arrowView;
    UIView *_challengeTypeView;
    UILabel *_targetLabel;
    UILabel *_dividerLabel;
    UILabel *_scoreLabel;
    UILabel *_statusLabel;
    IESLiveGCDTimer *_timer;
}

@property (nonatomic) int challengeType;
@property (retain, nonatomic) IESLiveKTVChallengeModel *challengeModel;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *challengeTypeView;
@property (retain, nonatomic) UILabel *targetLabel;
@property (retain, nonatomic) UILabel *dividerLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) IESLiveGCDTimer *timer;

- (id)challengeModel;
- (void)setChallengeModel:(id)arg0;
- (void)showStatus;
- (void)showScore;
- (id)targetLabel;
- (void)setChallengeType:(int)arg0;
- (void)updateChallengeStatus:(unsigned long long)arg0;
- (void)bindChallengeModel:(id)arg0;
- (id)challengeTypeViewWithType:(int)arg0;
- (void)setChallengeTypeView:(id)arg0;
- (id)challengeTypeView;
- (id)dividerLabel;
- (void)invalidataTimer;
- (id)initWithChallengeType:(int)arg0;
- (void)updateBubbleArrowStyle:(unsigned long long)arg0;
- (void)setTargetLabel:(id)arg0;
- (void)setDividerLabel:(id)arg0;
- (id)container;
- (id)timer;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)setTimer:(id)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setupSubviews;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;
- (int)challengeType;

@end
