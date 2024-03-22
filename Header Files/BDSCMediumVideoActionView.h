//
//     Generated by private class-dump
//

@class BDSCLottieButton, BDSCControlButton;

@interface BDSCMediumVideoActionView : BDSCVideoActionView {
    BDSCControlButton *_closeCastButton;
    BDSCLottieButton *_continuePlayButton;
}

@property (retain, nonatomic) BDSCControlButton *closeCastButton;
@property (retain, nonatomic) BDSCLottieButton *continuePlayButton;

- (void)setContinuePlayButton:(id)arg0;
- (id)continuePlayButton;
- (void)setContinuousPlay:(BOOL)arg0;
- (id)closeCastButton;
- (void)setCloseCastButton:(id)arg0;
- (BOOL)continuousPlay;
- (void)updateContinueGreyMode:(BOOL)arg0;
- (void)updateCloseGreyMode:(BOOL)arg0;
- (void)updateBigStyle:(BOOL)arg0;
- (void)continuePlayButtonClicked;
- (id)init;
- (void).cxx_destruct;
- (void)setupSubviews;

@end