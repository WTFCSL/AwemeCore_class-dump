//
//     Generated by private class-dump
//

@class UIImageView, UIView, UILabel, UIButton;
@protocol IESLiveGuideHorizontalPanelViewDelegate;

@interface IESLiveGuideHorizontalPanelView : UIView {
    id<IESLiveGuideHorizontalPanelViewDelegate> _delegate;
    UIView *_topContainerView;
    UIView *_bottomContainerView;
    UIView *_switchView;
    UIButton *_originalRatioButton;
    UIButton *_fourToThreeRatioButton;
    UIButton *_sixteenToNineRatioButton;
    UIImageView *_descImageView;
    UILabel *_descLabel;
    unsigned long long _currentRatio;
}

@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIView *switchView;
@property (retain, nonatomic) UIButton *originalRatioButton;
@property (retain, nonatomic) UIButton *fourToThreeRatioButton;
@property (retain, nonatomic) UIButton *sixteenToNineRatioButton;
@property (retain, nonatomic) UIImageView *descImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) unsigned long long currentRatio;
@property (weak, nonatomic) id<IESLiveGuideHorizontalPanelViewDelegate> delegate;

- (id)topContainerView;
- (void)setTopContainerView:(id)arg0;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (unsigned long long)currentRatio;
- (void)setCurrentRatio:(unsigned long long)arg0;
- (id)descImageView;
- (void)setDescImageView:(id)arg0;
- (id)initWithOpenLiveRatio:(unsigned long long)arg0;
- (void)setOriginalRatioButton:(id)arg0;
- (id)originalRatioButton;
- (void)switchToOriginalRatio;
- (void)setFourToThreeRatioButton:(id)arg0;
- (id)fourToThreeRatioButton;
- (void)switchToFourToThreeRatio;
- (void)setSixteenToNineRatioButton:(id)arg0;
- (id)sixteenToNineRatioButton;
- (void)switchToSixteenToNineRatio;
- (void)changeLiveRatio;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (void)updateUI;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg0;
- (id)switchView;
- (void)setSwitchView:(id)arg0;

@end
