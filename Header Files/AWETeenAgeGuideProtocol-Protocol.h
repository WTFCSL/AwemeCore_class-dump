//
//     Generated by private class-dump
//

@class AWETeenLoadingButton;

@protocol AWETeenAgeGuideProtocol <NSObject>

+ (id)ageGuideWithGender:(long long)arg0 birthday:(id)arg1 params:(id)arg2;

@property (retain, nonatomic) AWETeenLoadingButton *submitButton;
@property (copy, nonatomic) id /* block */ clickSubmitAction;
@property (copy, nonatomic) id /* block */ closeAlertCompletion;
@property (nonatomic) BOOL isFullScreen;

- (id /* block */)clickSubmitAction;
- (void)setClickSubmitAction:(id /* block */)arg0;
- (id /* block */)closeAlertCompletion;
- (void)setCloseAlertCompletion:(id /* block */)arg0;
- (void)dismiss;
- (BOOL)isFullScreen;
- (void)show;
- (void)dismissWithAnimation:(BOOL)arg0;
- (void)setIsFullScreen:(BOOL)arg0;
- (id)submitButton;
- (void)setSubmitButton:(id)arg0;

@end