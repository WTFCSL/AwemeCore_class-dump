//
//     Generated by private class-dump
//

@protocol DUXPickerDelegate <NSObject>

- (long long)componentCountInDUXPicker:(id)arg0;
- (long long)duxPicker:(id)arg0 numberOfRowsInComponent:(long long)arg1;

@optional

- (id)duxPicker:(id)arg0 titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)duxPicker:(id)arg0 attributedTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (BOOL)isNeedFontAdaptive;
- (double)pickerView:(id)arg0 widthForComponent:(long long)arg1;

@end