//
//     Generated by private class-dump
//

@protocol IESLiveSlideBeautyPickerViewDelegate <NSObject>

- (void)slidePickerView:(id)arg0 didChangeValue:(double)arg1 forTag:(id)arg2 item:(id)arg3;
- (void)sliderPickerView:(id)arg0 didApplyBeautyNodes:(id)arg1;

@optional

- (void)sliderPickerViewDidClearRedDot:(id)arg0;
- (void)sliderPickerView:(id)arg0 didFinishValueChange:(long long)arg1 forItem:(id)arg2;
- (void)sliderPickerView:(id)arg0 didClickItem:(id)arg1;
- (void)sliderPickerView:(id)arg0 removeBeautyNodes:(id)arg1;
- (void)sliderPickerView:(id)arg0 didExpandItem:(id)arg1 selectedIndex:(long long)arg2;
- (void)sliderPickerView:(id)arg0 didClickBackButton:(id)arg1;
- (void)sliderPickerView:(id)arg0 beautySwitchOn:(BOOL)arg1;
- (void)sliderPickerViewResetButtonClicked:(id)arg0;

@end
