//
//     Generated by private class-dump
//

@class NSArray, ACCTCECropRatioOption;

@interface ACCTCECropRatioOptions : NSObject {
    NSArray *_data;
    ACCTCECropRatioOption *_selectedRatioOption;
    double _originalRatio;
    double _fillRatio;
}

@property (nonatomic) double originalRatio;
@property (nonatomic) double fillRatio;
@property (retain, nonatomic) ACCTCECropRatioOption *selectedRatioOption;
@property (readonly, copy, nonatomic) NSArray *data;

- (id)selectedRatioOption;
- (id)freeOption;
- (void)setSelectedRatioOption:(id)arg0;
- (id)reciprocalOption;
- (void)setFillRatio:(double)arg0;
- (id)originalRatioValue;
- (id)fillRatioValue;
- (id)optionWithRatioType:(long long)arg0;
- (id)initWithOriginalRatio:(double)arg0 fillRatio:(double)arg1;
- (id)data;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)inputData;
- (double)originalRatio;
- (void)setOriginalRatio:(double)arg0;
- (double)fillRatio;

@end