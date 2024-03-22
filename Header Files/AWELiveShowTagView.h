//
//     Generated by private class-dump
//

@class UILabel, AWEGradientView;

@interface AWELiveShowTagView : UIView {
    BOOL _isPremiere;
    long long _viewSize;
    long long _tagType;
    long long _paidTagType;
    UILabel *_paidTagLabel;
    UILabel *_countDownLabel;
    UILabel *_paidLabel;
    UILabel *_replayLabel;
    UILabel *_livingLabel;
    AWEGradientView *_livingContainerView;
}

@property (retain, nonatomic) UILabel *paidTagLabel;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UILabel *paidLabel;
@property (retain, nonatomic) UILabel *replayLabel;
@property (retain, nonatomic) UILabel *livingLabel;
@property (retain, nonatomic) AWEGradientView *livingContainerView;
@property (nonatomic) BOOL isPremiere;
@property (nonatomic) long long viewSize;
@property (nonatomic) long long tagType;
@property (nonatomic) long long paidTagType;

- (id)countDownLabel;
- (void)setCountDownLabel:(id)arg0;
- (double)currentPaidTagWidth;
- (void)updateCountDownLabel:(double)arg0;
- (id)livingLabel;
- (void)setLivingLabel:(id)arg0;
- (BOOL)isPremiere;
- (id)paidTagLabel;
- (long long)paidTagType;
- (void)tagTypeNone;
- (void)tagTypeLive;
- (void)tagTypePlayback;
- (void)tagTypePaidDefault;
- (void)tagTypePaidUnpaidTrialLive;
- (void)tagTypePaidUnpaidTrialPlayback;
- (void)tagTypePaidHasPaid;
- (void)tagTypePaidHasPaidLive;
- (void)tagTypePaidHasPaidPlayback;
- (void)tagTypePaidUnpaidTrialLiveDefault;
- (void)tagTypePaidUnpaidTrialPlaybackDefault;
- (id)livingContainerView;
- (id)replayLabel;
- (id)paidLabel;
- (id)livingTagText;
- (id)livingViewGradientColors;
- (void)removeAllSubViews;
- (void)showFinalView;
- (void)setIsPremiere:(BOOL)arg0;
- (void)setPaidTagType:(long long)arg0;
- (void)setPaidTagLabel:(id)arg0;
- (void)setPaidLabel:(id)arg0;
- (void)setReplayLabel:(id)arg0;
- (void)setLivingContainerView:(id)arg0;
- (long long)tagType;
- (void).cxx_destruct;
- (long long)viewSize;
- (void)setViewSize:(long long)arg0;
- (void)setTagType:(long long)arg0;

@end
