//
//     Generated by private class-dump
//

@class UIFont, IESECSliceXBaseTextField, UIImageView, IESECSliceXBaseView, NSString, UIColor, UIImage;

@interface IESECSliceXBuyNowCounterView : IESECSliceXViewElementView <UITextFieldDelegate> {
    BOOL _shakeAnimation;
    BOOL _editing;
    BOOL _keyboardShown;
    id /* block */ _valueChanged;
    long long _currentNumber;
    UIFont *_inputFont;
    UIColor *_inputColor;
    long long _minValue;
    long long _maxValue;
    NSString *_valueUnit;
    UIFont *_buttonTitleFont;
    UIImage *_increaseImage;
    UIImage *_decreaseImage;
    NSString *_increaseTitle;
    NSString *_decreaseTitle;
    IESECSliceXBaseView *_coverView;
    UIImageView *_decreaseImageView;
    UIImageView *_increaseImageView;
    IESECSliceXBaseTextField *_inputTextField;
    NSString *_minToast;
    NSString *_maxToast;
    NSString *_decreaseImageStr;
    NSString *_increaseImageStr;
    NSString *_changeQuantityEvent;
}

@property (retain, nonatomic) IESECSliceXBaseView *coverView;
@property (retain, nonatomic) UIImageView *decreaseImageView;
@property (retain, nonatomic) UIImageView *increaseImageView;
@property (retain, nonatomic) IESECSliceXBaseTextField *inputTextField;
@property (retain, nonatomic) NSString *minToast;
@property (retain, nonatomic) NSString *maxToast;
@property (nonatomic) BOOL keyboardShown;
@property (retain, nonatomic) NSString *decreaseImageStr;
@property (retain, nonatomic) NSString *increaseImageStr;
@property (retain, nonatomic) NSString *changeQuantityEvent;
@property (copy, nonatomic) id /* block */ valueChanged;
@property (nonatomic) BOOL shakeAnimation;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) long long currentNumber;
@property (retain, nonatomic) UIFont *inputFont;
@property (retain, nonatomic) UIColor *inputColor;
@property (nonatomic) long long minValue;
@property (nonatomic) long long maxValue;
@property (copy, nonatomic) NSString *valueUnit;
@property (retain, nonatomic) UIFont *buttonTitleFont;
@property (retain, nonatomic) UIImage *increaseImage;
@property (retain, nonatomic) UIImage *decreaseImage;
@property (copy, nonatomic) NSString *increaseTitle;
@property (copy, nonatomic) NSString *decreaseTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentNumber;
- (void)setCurrentNumber:(long long)arg0;
- (void)setKeyboardShown:(BOOL)arg0;
- (BOOL)updateWithSliceXElement:(id)arg0 error:(id *)arg1;
- (void)setChangeQuantityEvent:(id)arg0;
- (void)setMinToast:(id)arg0;
- (void)setMaxToast:(id)arg0;
- (void)configBtnColor;
- (void)setInputFont:(id)arg0;
- (void)setButtonTitleFont:(id)arg0;
- (id)decreaseImageView;
- (id)increaseImageView;
- (void)valueIncrease;
- (void)valueDecrease;
- (id)decreaseImageStr;
- (void)setDecreaseImageStr:(id)arg0;
- (id)increaseImageStr;
- (void)setIncreaseImageStr:(id)arg0;
- (id)inputFont;
- (void)verifyInput;
- (id)valueUnit;
- (id)maxToast;
- (id)minToast;
- (id)changeQuantityEvent;
- (void)doneBtnAction;
- (BOOL)shakeAnimation;
- (void)setShakeAnimation:(BOOL)arg0;
- (void)setValueUnit:(id)arg0;
- (id)increaseImage;
- (void)setIncreaseImage:(id)arg0;
- (id)decreaseImage;
- (void)setDecreaseImage:(id)arg0;
- (id)increaseTitle;
- (void)setIncreaseTitle:(id)arg0;
- (id)decreaseTitle;
- (void)setDecreaseTitle:(id)arg0;
- (void)setDecreaseImageView:(id)arg0;
- (void)setIncreaseImageView:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (long long)maxValue;
- (BOOL)isEditing;
- (void)setEditing:(BOOL)arg0;
- (void)triggerEvent;
- (long long)minValue;
- (void)setMinValue:(long long)arg0;
- (void)setMaxValue:(long long)arg0;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)arg0;
- (void)setupUI;
- (id)inputColor;
- (void)setInputColor:(id)arg0;
- (id /* block */)valueChanged;
- (void)setValueChanged:(id /* block */)arg0;
- (id)buttonTitleFont;
- (id)inputTextField;
- (void)setInputTextField:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;
- (BOOL)keyboardShown;

@end
