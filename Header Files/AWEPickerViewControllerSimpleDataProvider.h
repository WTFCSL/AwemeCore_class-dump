//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPickerViewControllerSimpleDataProvider : NSObject <AWEPickerViewControllerDataProvider> {
    double _componentWidth;
    double _rowHeight;
    NSArray *_rowTexts;
    long long _defaultIndex;
}

@property (nonatomic) double componentWidth;
@property (nonatomic) double rowHeight;
@property (retain, nonatomic) NSArray *rowTexts;
@property (nonatomic) long long defaultIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rowTexts;
- (long long)defaultIndexForComponent:(long long)arg0;
- (void)setRowTexts:(id)arg0;
- (void).cxx_destruct;
- (double)rowHeight;
- (void)setRowHeight:(double)arg0;
- (long long)numberOfComponentsInPickerView:(id)arg0;
- (long long)pickerView:(id)arg0 numberOfRowsInComponent:(long long)arg1;
- (double)pickerView:(id)arg0 widthForComponent:(long long)arg1;
- (double)pickerView:(id)arg0 rowHeightForComponent:(long long)arg1;
- (id)pickerView:(id)arg0 titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (long long)defaultIndex;
- (void)setDefaultIndex:(long long)arg0;
- (double)componentWidth;
- (void)setComponentWidth:(double)arg0;

@end
