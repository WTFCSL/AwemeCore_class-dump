//
//     Generated by private class-dump
//

@class NSTimer, NSString, UIView, UITextView, UIButton, CAGradientLayer, NSMutableAttributedString, UILabel, UIColor;

@interface AWEMediumRewardAlertView : UIView <UITextViewDelegate> {
    id /* block */ _leftCompletion;
    id /* block */ _rightCompletion;
    UIColor *_leftTextColor;
    UIColor *_rightTextColor;
    NSMutableAttributedString *_attributedMessage;
    UIColor *_linkColor;
    NSString *_linkString;
    NSString *_linkUrlPrefix;
    id /* block */ _linkCompletion;
    long long _textViewAlignment;
    double _shouldShowTime;
    UIView *_container;
    UILabel *_titleLabel;
    UITextView *_messageTextView;
    UIView *_bottomBlurView;
    CAGradientLayer *_gradientLayer;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    UIView *_horizontalLine;
    UIView *_verticalLine;
    NSString *_title;
    NSString *_message;
    NSString *_leftTitle;
    NSString *_rightTitle;
    NSTimer *_timer;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *messageTextView;
@property (retain, nonatomic) UIView *bottomBlurView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIButton *leftBtn;
@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *leftTitle;
@property (copy, nonatomic) NSString *rightTitle;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ leftCompletion;
@property (copy, nonatomic) id /* block */ rightCompletion;
@property (retain, nonatomic) UIColor *leftTextColor;
@property (retain, nonatomic) UIColor *rightTextColor;
@property (retain, nonatomic) NSMutableAttributedString *attributedMessage;
@property (retain, nonatomic) UIColor *linkColor;
@property (copy, nonatomic) NSString *linkString;
@property (copy, nonatomic) NSString *linkUrlPrefix;
@property (copy, nonatomic) id /* block */ linkCompletion;
@property (nonatomic) long long textViewAlignment;
@property (nonatomic) double shouldShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rightTextColor;
- (void)setRightTextColor:(id)arg0;
- (id)leftBtn;
- (id)rightBtn;
- (void)setLeftBtn:(id)arg0;
- (void)setRightBtn:(id)arg0;
- (id)verticalLine;
- (void)setHorizontalLine:(id)arg0;
- (void)setVerticalLine:(id)arg0;
- (id)linkString;
- (void)setLinkString:(id)arg0;
- (id)leftTextColor;
- (void)setShouldShowTime:(double)arg0;
- (double)shouldShowTime;
- (void)setupUIWithTitle:(id)arg0 message:(id)arg1;
- (void)leftBtnClick;
- (void)rightBtnClick;
- (void)configBtnWithLeftBtnY:(double)arg0 containerW:(double)arg1;
- (id /* block */)rightCompletion;
- (id /* block */)leftCompletion;
- (void)startTimeIfNeed;
- (void)refreshButtonWithTime:(double)arg0;
- (id)linkUrlPrefix;
- (id /* block */)linkCompletion;
- (id)initWithTitle:(id)arg0 message:(id)arg1 leftButtonTitle:(id)arg2 rightButtonTitle:(id)arg3 leftCompletion:(id /* block */)arg4 rightCompletion:(id /* block */)arg5;
- (void)setLeftTextColor:(id)arg0;
- (void)setTextViewAlignment:(long long)arg0;
- (void)setLeftCompletion:(id /* block */)arg0;
- (void)setRightCompletion:(id /* block */)arg0;
- (void)setLinkUrlPrefix:(id)arg0;
- (void)setLinkCompletion:(id /* block */)arg0;
- (long long)textViewAlignment;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (id)container;
- (void)setMessage:(id)arg0;
- (id)timer;
- (void)dismiss;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)show;
- (id)titleLabel;
- (id)message;
- (id)title;
- (void)setTimer:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)attributedMessage;
- (id)linkColor;
- (void)setGradientLayer:(id)arg0;
- (void)setLeftTitle:(id)arg0;
- (void)setRightTitle:(id)arg0;
- (id)leftTitle;
- (id)rightTitle;
- (void)setLinkColor:(id)arg0;
- (void)setAttributedMessage:(id)arg0;
- (id)messageTextView;
- (void)setMessageTextView:(id)arg0;
- (id)bottomBlurView;
- (void)setBottomBlurView:(id)arg0;
- (id)horizontalLine;

@end