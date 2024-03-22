//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSTimer, UILabel, UIButton;

@interface IESLiveGameOpenPlatformBottomAlertView : UIView {
    NSString *_titleString;
    NSString *_descriptionString;
    NSString *_buttonDescString;
    NSString *_urlString;
    long long _remainTime;
    id /* block */ _urlBlock;
    id /* block */ _countDownBlock;
    id /* block */ _confirmBlock;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_urlButton;
    UIImageView *_urlButtonArrowImage;
    UIButton *_confirmButton;
    NSTimer *_countDownTimer;
}

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) UIButton *urlButton;
@property (weak, nonatomic) UIImageView *urlButtonArrowImage;
@property (weak, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSString *buttonDescString;
@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) long long remainTime;
@property (copy, nonatomic) id /* block */ urlBlock;
@property (copy, nonatomic) id /* block */ countDownBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void)didSetAttachingDIContext;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg0;
- (void)p_setupUI;
- (void)confirmButtonDidClick:(id)arg0;
- (long long)remainTime;
- (void)setRemainTime:(long long)arg0;
- (void)setupCountDownTimer;
- (void)setCountDownBlock:(id /* block */)arg0;
- (id /* block */)countDownBlock;
- (void)setUrlButton:(id)arg0;
- (void)setUrlButtonArrowImage:(id)arg0;
- (void)urlButtonDidClick:(id)arg0;
- (id)buttonDescString;
- (id)buttonDescWithSeconds:(long long)arg0;
- (id /* block */)urlBlock;
- (void)setButtonDescString:(id)arg0;
- (void)setUrlBlock:(id /* block */)arg0;
- (id)urlButton;
- (id)urlButtonArrowImage;
- (id)urlString;
- (id)initWithOperation:(id)arg0;
- (id)descriptionString;
- (void).cxx_destruct;
- (void)stopTimer;
- (id)titleLabel;
- (void)setDescriptionString:(id)arg0;
- (void)setUrlString:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)titleString;
- (void)setTitleString:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;

@end
