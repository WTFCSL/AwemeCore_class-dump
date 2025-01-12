//
//     Generated by private class-dump
//

@class UIImageView, UIView;

@protocol AWEUGCampaignNoticeHeaderProtocol <NSObject>

@property (retain, nonatomic) UIImageView *lableImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *fakeNaviImageView;
@property (copy, nonatomic) id /* block */ campaignBtnClick;
@property (copy, nonatomic) id /* block */ campaignStateDidChangeBlock;

- (void)updateWithOffset:(double)arg0;
- (id)fakeNaviImageView;
- (id)lableImageView;
- (double)campaignHeaderDropDownHeightThreshold;
- (id /* block */)campaignBtnClick;
- (id /* block */)campaignStateDidChangeBlock;
- (void)bindNavigationbar:(id)arg0;
- (void)updateWithOffset:(double)arg0 isAuto:(BOOL)arg1;
- (void)prepareForScrollDownAutomatically;
- (void)animateScrollDownAutomatically;
- (void)resetToInit;
- (double)campaignGuideHeightWithAnimation;
- (void)showCampaignButton:(BOOL)arg0;
- (double)campaignHeaderOffsetRadio;
- (void)setLableImageView:(id)arg0;
- (void)setFakeNaviImageView:(id)arg0;
- (void)setCampaignBtnClick:(id /* block */)arg0;
- (void)setCampaignStateDidChangeBlock:(id /* block */)arg0;
- (id)backgroundImageView;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setBackgroundImageView:(id)arg0;

@end
