//
//     Generated by private class-dump
//

@class IESLiveMultiKTVMIDIFeedbackResult, IESLiveMultiKTVMidiFeedbackRecordViewConfig, UIImageView, IESLiveKTVGradientLabel, UILabel;

@interface IESLiveMultiKTVMidiFeedbackRecordView : UIView {
    IESLiveMultiKTVMidiFeedbackRecordViewConfig *_config;
    IESLiveMultiKTVMIDIFeedbackResult *_result;
    UIImageView *_userAvatar;
    UILabel *_topTipLabel;
    UIImageView *_tagView;
    UILabel *_songLabel;
    IESLiveKTVGradientLabel *_scoreNumberLabel;
    IESLiveKTVGradientLabel *_scoreUnitLabel;
    UIImageView *_bgEffectView;
    UIImageView *_highScoreSign;
}

@property (retain, nonatomic) IESLiveMultiKTVMidiFeedbackRecordViewConfig *config;
@property (retain, nonatomic) IESLiveMultiKTVMIDIFeedbackResult *result;
@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) UILabel *topTipLabel;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UILabel *songLabel;
@property (retain, nonatomic) IESLiveKTVGradientLabel *scoreNumberLabel;
@property (retain, nonatomic) IESLiveKTVGradientLabel *scoreUnitLabel;
@property (retain, nonatomic) UIImageView *bgEffectView;
@property (retain, nonatomic) UIImageView *highScoreSign;

- (id)userAvatar;
- (void)setUserAvatar:(id)arg0;
- (void)setSongLabel:(id)arg0;
- (id)songLabel;
- (id)topTipLabel;
- (void)setTopTipLabel:(id)arg0;
- (id)bgEffectView;
- (void)setBgEffectView:(id)arg0;
- (void)setScoreUnitLabel:(id)arg0;
- (id)scoreUnitLabel;
- (id)initWithFeedbackResult:(id)arg0;
- (void)setupBGViews;
- (id)highScoreSign;
- (id)getBackgroundViewWithHigh:(BOOL)arg0;
- (id)scoreNumberLabel;
- (id)getLineViewWithReverse:(BOOL)arg0;
- (void)didTapAvatarView;
- (void)setScoreNumberLabel:(id)arg0;
- (void)setHighScoreSign:(id)arg0;
- (void)setResult:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)result;
- (void)setupViews;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end
