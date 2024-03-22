//
//     Generated by private class-dump
//

@class AWEMVChannelLiveCardRoomStatsView, AWELiveVSEpisode, AWEMVChannelLiveCardBottomView, UILabel, AWEGradientView, BDImageView;

@interface AWEMVChannelLiveSmallCardCell : AWEMVChannelBaseCell {
    double cornerRadius;
    BDImageView *_coverImgView;
    AWEGradientView *_gradientView;
    AWEGradientView *_livingContainerView;
    UILabel *_livingLabel;
    UILabel *_paidTagLabel;
    AWEMVChannelLiveCardRoomStatsView *_statsView;
    AWEMVChannelLiveCardBottomView *_bottomInfoView;
    AWELiveVSEpisode *_channelFeedReplay;
}

@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) BDImageView *coverImgView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) AWEGradientView *livingContainerView;
@property (retain, nonatomic) UILabel *livingLabel;
@property (retain, nonatomic) UILabel *paidTagLabel;
@property (retain, nonatomic) AWEMVChannelLiveCardRoomStatsView *statsView;
@property (retain, nonatomic) AWEMVChannelLiveCardBottomView *bottomInfoView;
@property (retain, nonatomic) AWELiveVSEpisode *channelFeedReplay;

- (id)ticketType;
- (void)setupSubViews;
- (void)trackLiveShow;
- (id)coverImgView;
- (void)setCoverImgView:(id)arg0;
- (void)configWithAwemeModel:(id)arg0 context:(id)arg1;
- (double)gradientViewHeight;
- (id)bottomInfoView;
- (void)setBottomInfoView:(id)arg0;
- (id)livingLabel;
- (void)setLivingLabel:(id)arg0;
- (BOOL)isPaidLive;
- (id)paidTagLabel;
- (id)livingContainerView;
- (id)livingTagText;
- (id)livingViewGradientColors;
- (void)setPaidTagLabel:(id)arg0;
- (void)setLivingContainerView:(id)arg0;
- (id)coverImageURLArray;
- (void)trackLiveEvent:(id)arg0 extraParams:(id)arg1;
- (id)liveCommonParams;
- (id)replayCommonParams;
- (id)mediumCommonParams;
- (void)handleResponseClicked;
- (void)willDisplayWithIndex:(long long)arg0;
- (id)cellCoverView;
- (id)statsView;
- (void)setStatsView:(id)arg0;
- (void)setChannelFeedReplay:(id)arg0;
- (id)channelFeedReplay;
- (void)updateCardFrame;
- (void)trackVideoShow;
- (void)p_enterReplay;
- (void)p_enterLiveRoom;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (id)gradientView;
- (void)setCornerRadius:(double)arg0;
- (void)updateWithModel:(id)arg0;

@end
