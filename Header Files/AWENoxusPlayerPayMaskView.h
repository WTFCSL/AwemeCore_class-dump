//
//     Generated by private class-dump
//

@class CAGradientLayer, UIButton, UIImageView, NSString, UIView, AWENoxusLongVideoDetailResponseModel, UILabel;
@protocol AWENoxusPlayerPayMaskViewDelegate;

@interface AWENoxusPlayerPayMaskView : UIView <UIGestureRecognizerDelegate> {
    id<AWENoxusPlayerPayMaskViewDelegate> _delegate;
    long long _rotateMode;
    AWENoxusLongVideoDetailResponseModel *_responseModel;
    UIImageView *_backgroundImageView;
    UIView *_containerView;
    UILabel *_hintLabel;
    UIView *_buttonContainer;
    UIView *_buyButton;
    UILabel *_buyButtonLabel;
    CAGradientLayer *_buyButtonGradientLayer;
    UIImageView *_buyButtonHint;
    UILabel *_buyButtonHintLabel;
    UIView *_replayButton;
    UIImageView *_replayButtonIcon;
    UILabel *_replayButtonLabel;
    UIButton *_backButton;
}

@property (retain, nonatomic) AWENoxusLongVideoDetailResponseModel *responseModel;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) UIView *buyButton;
@property (retain, nonatomic) UILabel *buyButtonLabel;
@property (retain, nonatomic) CAGradientLayer *buyButtonGradientLayer;
@property (retain, nonatomic) UIImageView *buyButtonHint;
@property (retain, nonatomic) UILabel *buyButtonHintLabel;
@property (retain, nonatomic) UIView *replayButton;
@property (retain, nonatomic) UIImageView *replayButtonIcon;
@property (retain, nonatomic) UILabel *replayButtonLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (weak, nonatomic) id<AWENoxusPlayerPayMaskViewDelegate> delegate;
@property (nonatomic) long long rotateMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void)setRotateMode:(long long)arg0;
- (long long)rotateMode;
- (void)updateWithResponseModel:(id)arg0;
- (void)p_setupAction;
- (id)buyButton;
- (id)buyButtonLabel;
- (id)buyButtonHint;
- (id)buyButtonHintLabel;
- (id)replayButtonIcon;
- (id)replayButtonLabel;
- (void)buyButtonClicked:(id)arg0;
- (void)replayButtonClicked:(id)arg0;
- (void)updateFilm;
- (void)updateEpisode;
- (double)hintLabelActualHeight;
- (void)updateFilmVertical;
- (void)updateFilmFullScreen;
- (double)hintLabelPreferredHeight;
- (double)hintLabelWidth;
- (id)getAttrStrForHint:(id)arg0;
- (id)buyButtonGradientLayer;
- (void)updateEpisodeVertical;
- (void)updateEpisodeFullScreen;
- (BOOL)isSingleLineHint;
- (void)setBuyButton:(id)arg0;
- (void)setBuyButtonLabel:(id)arg0;
- (void)setBuyButtonGradientLayer:(id)arg0;
- (void)setBuyButtonHint:(id)arg0;
- (void)setBuyButtonHintLabel:(id)arg0;
- (void)setReplayButtonIcon:(id)arg0;
- (void)setReplayButtonLabel:(id)arg0;
- (void).cxx_destruct;
- (id)buttonContainer;
- (id)backgroundImageView;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)containerView;
- (void)update;
- (void)setDelegate:(id)arg0;
- (void)setButtonContainer:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)responseModel;
- (void)setResponseModel:(id)arg0;
- (id)replayButton;
- (void)setReplayButton:(id)arg0;

@end