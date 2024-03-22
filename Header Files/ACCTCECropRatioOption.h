//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface ACCTCECropRatioOption : NSObject {
    double _ratioValue;
    long long _ratioType;
    NSString *_title;
    NSString *_imageName;
    NSDictionary *_ratioTrackNameDic;
    struct CGSize { double width; double height; } _minimumCropSize;
}

@property (copy, nonatomic) NSDictionary *ratioTrackNameDic;
@property (nonatomic) double ratioValue;
@property (nonatomic) long long ratioType;
@property (nonatomic) struct CGSize { double width; double height; } minimumCropSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *ratioTrackName;

- (id)ratioTrackName;
- (id)ratioTrackNameDic;
- (id)initWithRatioType:(long long)arg0 ratioValue:(double)arg1;
- (void)setMinimumCropSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setRatioTrackNameDic:(id)arg0;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (id)title;
- (id)description;
- (void)setTitle:(id)arg0;
- (double)ratioValue;
- (long long)ratioType;
- (void)setRatioType:(long long)arg0;
- (struct CGSize { double x0; double x1; })minimumCropSize;
- (void)setRatioValue:(double)arg0;

@end
