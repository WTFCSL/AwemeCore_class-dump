//
//     Generated by private class-dump
//

@class NSArray, NSString, NSNumber;

@interface BDXPickerSelectorSource : BDXPickerSource {
    NSArray *_range;
    NSString *_rangeKey;
    NSNumber *_value;
}

@property (retain) NSArray *range;
@property (retain) NSString *rangeKey;
@property (retain) NSNumber *value;

- (id)valuesRow;
- (id)stringValueForRow:(long long)arg0 forComponent:(long long)arg1;
- (id)rangeKey;
- (void)setRangeKey:(id)arg0;
- (void).cxx_destruct;
- (id)value;
- (void)setRange:(id)arg0;
- (id)range;
- (long long)numberOfComponents;
- (void)setValue:(id)arg0;
- (long long)numberOfRowsInComponent:(long long)arg0;

@end