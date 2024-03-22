//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWELocationModel, UIPickerView, UIButton;

@interface AWELocationPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource> {
    AWELocationModel *_location;
    UIPickerView *_locationPicker;
    UIImageView *_locationPickerIndicator;
    UIButton *_confirmButton;
    id /* block */ _completion;
}

@property (retain, nonatomic) UIPickerView *locationPicker;
@property (retain, nonatomic) UIImageView *locationPickerIndicator;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAnimation;
- (void)dismissAnimation:(id /* block */)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 location:(id)arg1 completion:(id /* block */)arg2;
- (id)locationPicker;
- (id)locationPickerIndicator;
- (void)__onTouchBackgroundView;
- (void)__onTouchConfirmButton;
- (void)setLocationPicker:(id)arg0;
- (void)setLocationPickerIndicator:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)safeAreaInsetsDidChange;
- (void)dealloc;
- (long long)numberOfComponentsInPickerView:(id)arg0;
- (long long)pickerView:(id)arg0 numberOfRowsInComponent:(long long)arg1;
- (double)pickerView:(id)arg0 widthForComponent:(long long)arg1;
- (double)pickerView:(id)arg0 rowHeightForComponent:(long long)arg1;
- (id)pickerView:(id)arg0 viewForRow:(long long)arg1 forComponent:(long long)arg2 reusingView:(id)arg3;
- (void)pickerView:(id)arg0 didSelectRow:(long long)arg1 inComponent:(long long)arg2;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;

@end