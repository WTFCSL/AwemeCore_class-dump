//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSString;

@interface AWETeenPlayInteractionMaximumProgressView : UIView <AWETeenPlayInteractionProgressHelperObserver> {
    BOOL _isFontStyleNormal;
    UIImageView *_progressDividingLine;
    UILabel *_progressLeftLabel;
    UILabel *_progressRightLabel;
}

@property (retain, nonatomic) UIImageView *progressDividingLine;
@property (retain, nonatomic) UILabel *progressLeftLabel;
@property (retain, nonatomic) UILabel *progressRightLabel;
@property (nonatomic) BOOL isFontStyleNormal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)progressLeftLabel;
- (id)progressRightLabel;
- (void)setProgressLeftLabel:(id)arg0;
- (void)setProgressRightLabel:(id)arg0;
- (void)progressValueChanged:(double)arg0 currentDuration:(id)arg1 totalDuration:(id)arg2;
- (id)progressDividingLine;
- (BOOL)isFontStyleNormal;
- (void)setIsFontStyleNormal:(BOOL)arg0;
- (void)changeFontWithFontStyle:(BOOL)arg0;
- (void)setProgressDividingLine:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
