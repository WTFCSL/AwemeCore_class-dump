//
//     Generated by private class-dump
//

@class UIFont, NSString, UIView, UIImage, UIImageView, AWEUIButton, TTTAttributedLabel, UILabel;

@interface AWEUIBottomBubbleView : UIView <TTTAttributedLabelDelegate, CAAnimationDelegate> {
    BOOL _disableClickBubbleView;
    BOOL _disableClickMainLabel;
    BOOL _disableClickSecondaryLabel;
    BOOL _disableClickMainButton;
    BOOL _disableClickSecondaryButton;
    BOOL _disableShadow;
    BOOL _disableLeftIcon;
    long long _bubbleType;
    NSString *_labelTitle;
    NSString *_labelTitleLinkAppended;
    NSString *_secondaryLabelTitle;
    NSString *_secondaryButtonTitle;
    UIFont *_labelFont;
    UIFont *_secondaryLabelFont;
    UIImage *_leftIcon;
    UIImage *_buttonIcon;
    double _bubbleHeight;
    double _bubblePadding;
    double _bubbleCornerRadius;
    UIImageView *_leftIconImageView;
    UIView *_backgroundView;
    id /* block */ _labelClickEventBlock;
    id /* block */ _buttonClickEventBlock;
    id /* block */ _bubbleViewClickEventBlock;
    id /* block */ _secondaryButtonClickEventBlock;
    id /* block */ _labelLinkClickEventBlock;
    AWEUIButton *_mainButton;
    AWEUIButton *_secondaryButton;
    UILabel *_mainLabel;
    UILabel *_secondaryLabel;
    TTTAttributedLabel *_mainLabelAttributed;
}

@property (retain, nonatomic) UIImageView *leftIconImageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id /* block */ labelClickEventBlock;
@property (copy, nonatomic) id /* block */ buttonClickEventBlock;
@property (copy, nonatomic) id /* block */ bubbleViewClickEventBlock;
@property (copy, nonatomic) id /* block */ secondaryButtonClickEventBlock;
@property (copy, nonatomic) id /* block */ labelLinkClickEventBlock;
@property (retain, nonatomic) AWEUIButton *mainButton;
@property (retain, nonatomic) AWEUIButton *secondaryButton;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) TTTAttributedLabel *mainLabelAttributed;
@property (copy, nonatomic) NSString *labelTitle;
@property (copy, nonatomic) NSString *labelTitleLinkAppended;
@property (copy, nonatomic) NSString *secondaryLabelTitle;
@property (copy, nonatomic) NSString *secondaryButtonTitle;
@property (copy, nonatomic) UIFont *labelFont;
@property (copy, nonatomic) UIFont *secondaryLabelFont;
@property (retain, nonatomic) UIImage *leftIcon;
@property (retain, nonatomic) UIImage *buttonIcon;
@property (nonatomic) long long bubbleType;
@property (nonatomic) BOOL disableClickBubbleView;
@property (nonatomic) BOOL disableClickMainLabel;
@property (nonatomic) BOOL disableClickSecondaryLabel;
@property (nonatomic) BOOL disableClickMainButton;
@property (nonatomic) BOOL disableClickSecondaryButton;
@property (nonatomic) double bubbleHeight;
@property (nonatomic) double bubblePadding;
@property (nonatomic) double bubbleCornerRadius;
@property (nonatomic) BOOL disableShadow;
@property (nonatomic) BOOL disableLeftIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)arg0;
- (long long)bubbleType;
- (void)setBubbleType:(long long)arg0;
- (id)initWithBlankBubbleViewWithType:(long long)arg0;
- (id)initWithBubbleType:(long long)arg0 leftIcon:(id)arg1 buttonIcon:(id)arg2 labelTitle:(id)arg3 labelTitleLinkAppended:(id)arg4 secondaryLabelTitle:(id)arg5 secondaryButtonTitle:(id)arg6 labelClickEventBlock:(id /* block */)arg7 buttonClickEventBlock:(id /* block */)arg8 bubbleViewClickEventBlock:(id /* block */)arg9 secondaryButtonClickEventBlock:(id /* block */)arg10 labelLinkClickEventBlock:(id /* block */)arg11;
- (void)setLeftIcon:(id)arg0;
- (void)setLabelTitle:(id)arg0;
- (void)setSecondaryLabelTitle:(id)arg0;
- (id /* block */)configLeftIcon;
- (id /* block */)configButtonIcon;
- (id /* block */)configLabelTitle;
- (id /* block */)configSecondaryLabelTitle;
- (id /* block */)configSecondaryButtonTitle;
- (id /* block */)configLabelClickEventBlock;
- (id /* block */)configButtonClickEventBlock;
- (id /* block */)configBubbleViewClickEventBlock;
- (id /* block */)configSecondaryButtonClickEventBlock;
- (id /* block */)configLabelLinkClickEventBlock;
- (id)leftIconImageView;
- (id)mainLabelAttributed;
- (void)clickBubbleView:(id)arg0;
- (void)setBubbleViewClickEventBlock:(id /* block */)arg0;
- (void)clickMainLabel:(id)arg0;
- (void)setLabelClickEventBlock:(id /* block */)arg0;
- (void)setLabelLinkClickEventBlock:(id /* block */)arg0;
- (void)setLabelTitleLinkAppended:(id)arg0;
- (void)p_updateMainLabelAttributed;
- (void)clickMainButton:(id)arg0;
- (void)setButtonClickEventBlock:(id /* block */)arg0;
- (void)clickSecondaryButton:(id)arg0;
- (void)setSecondaryButtonClickEventBlock:(id /* block */)arg0;
- (double)currentBubblePadding;
- (double)currentBubbleHeight;
- (double)bubblePadding;
- (double)bubbleHeight;
- (BOOL)disableClickBubbleView;
- (id /* block */)bubbleViewClickEventBlock;
- (BOOL)disableClickSecondaryButton;
- (id /* block */)secondaryButtonClickEventBlock;
- (BOOL)disableClickMainButton;
- (id /* block */)buttonClickEventBlock;
- (BOOL)disableClickMainLabel;
- (id /* block */)labelClickEventBlock;
- (id)labelTitleLinkAppended;
- (id /* block */)labelLinkClickEventBlock;
- (id)initWithBlankBubbleView;
- (void)customBubbleConfig;
- (id /* block */)configSecondaryButtonTitleColor;
- (id /* block */)configSecondaryButtonColor;
- (id /* block */)configSecondaryButtonBorderColor;
- (id /* block */)configLabelFont;
- (id /* block */)configLabelTitleColor;
- (id /* block */)configSecondaryLabelFont;
- (id /* block */)configSecondaryLabelTitleColor;
- (id /* block */)makeBothLabelMultiLine;
- (id /* block */)configBubbleBackgroundColor;
- (void)showOnView:(id)arg0 bottomOffset:(double)arg1;
- (void)showScaleOnView:(id)arg0 bottomOffset:(double)arg1;
- (void)showOnSuperview;
- (void)dismissScale;
- (void)setBubbleCornerRadius:(double)arg0;
- (void)setDisableShadow:(BOOL)arg0;
- (void)setDisableLeftIcon:(BOOL)arg0;
- (void)setDisableClickBubbleView:(BOOL)arg0;
- (void)setDisableClickMainLabel:(BOOL)arg0;
- (BOOL)disableClickSecondaryLabel;
- (void)setDisableClickSecondaryLabel:(BOOL)arg0;
- (void)setDisableClickMainButton:(BOOL)arg0;
- (void)setDisableClickSecondaryButton:(BOOL)arg0;
- (id)secondaryLabelTitle;
- (void)setBubbleHeight:(double)arg0;
- (void)setBubblePadding:(double)arg0;
- (double)bubbleCornerRadius;
- (BOOL)disableShadow;
- (BOOL)disableLeftIcon;
- (void)setLeftIconImageView:(id)arg0;
- (void)setMainLabelAttributed:(id)arg0;
- (void)dismiss;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setLabelFont:(id)arg0;
- (id)secondaryLabel;
- (void)setButtonIcon:(id)arg0;
- (id)labelFont;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setBackgroundView:(id)arg0;
- (id)buttonIcon;
- (id)secondaryButton;
- (void)setupViews;
- (id)secondaryLabelFont;
- (void)setSecondaryLabel:(id)arg0;
- (id)mainLabel;
- (void)setMainLabel:(id)arg0;
- (id)secondaryButtonTitle;
- (void)setSecondaryButtonTitle:(id)arg0;
- (id)labelTitle;
- (void)setSecondaryButton:(id)arg0;
- (id)leftIcon;
- (void)setSecondaryLabelFont:(id)arg0;
- (void)setupLayout;
- (id)mainButton;
- (void)setMainButton:(id)arg0;

@end