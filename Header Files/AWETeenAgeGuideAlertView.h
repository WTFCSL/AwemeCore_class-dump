//
//     Generated by private class-dump
//

@class UIView, NSString, AWETeenLoadingButton, AWETeenAgePickerView, NSMutableDictionary, NSDictionary, UIButton, UILabel;

@interface AWETeenAgeGuideAlertView : UIView <AWETeenAgePickerViewDelegate, AWETeenAgeGuideProtocol> {
    BOOL _isFullScreen;
    AWETeenLoadingButton *_submitButton;
    id /* block */ _clickSubmitAction;
    id /* block */ _closeAlertCompletion;
    UIView *_alertView;
    UIButton *_closeButton;
    UIView *_ageTitleContainer;
    UILabel *_ageTitleLabel;
    UIButton *_ageButton;
    AWETeenAgePickerView *_agePickerView;
    NSMutableDictionary *_profile;
    NSDictionary *_profileCollectionParams;
}

@property (retain, nonatomic) UIView *alertView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *ageTitleContainer;
@property (retain, nonatomic) UILabel *ageTitleLabel;
@property (retain, nonatomic) UIButton *ageButton;
@property (retain, nonatomic) AWETeenAgePickerView *agePickerView;
@property (retain, nonatomic) NSMutableDictionary *profile;
@property (copy, nonatomic) NSDictionary *profileCollectionParams;
@property (retain, nonatomic) AWETeenLoadingButton *submitButton;
@property (copy, nonatomic) id /* block */ clickSubmitAction;
@property (copy, nonatomic) id /* block */ closeAlertCompletion;
@property (nonatomic) BOOL isFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ageGuideWithGender:(long long)arg0 birthday:(id)arg1 params:(id)arg2;

- (void)submitAction;
- (void)p_setupUI;
- (id /* block */)clickSubmitAction;
- (void)setClickSubmitAction:(id /* block */)arg0;
- (id)ageButton;
- (void)setAgeButton:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 gender:(long long)arg1 birthday:(id)arg2;
- (void)setProfileCollectionParams:(id)arg0;
- (void)setAgePickerView:(id)arg0;
- (id)agePickerView;
- (void)p_updateSubmitStatusWithAnimation:(BOOL)arg0;
- (id)ageTitleContainer;
- (id)ageTitleLabel;
- (id)profileCollectionParams;
- (id /* block */)closeAlertCompletion;
- (id)birthdayHelper;
- (void)agePickerViewDidSelected:(id)arg0;
- (void)setCloseAlertCompletion:(id /* block */)arg0;
- (void)setAgeTitleContainer:(id)arg0;
- (void)setAgeTitleLabel:(id)arg0;
- (void)setProfile:(id)arg0;
- (void)dismiss;
- (BOOL)isFullScreen;
- (void).cxx_destruct;
- (void)setAlertView:(id)arg0;
- (void)show;
- (id)profile;
- (void)closeAction;
- (id)alertView;
- (void)dismissWithAnimation:(BOOL)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setIsFullScreen:(BOOL)arg0;
- (id)submitButton;
- (void)setSubmitButton:(id)arg0;

@end
