//
//     Generated by private class-dump
//

@class NSString;

@interface AFDFeedAlbumTextFoldConfigModel : MTLModel <MTLJSONSerializing> {
    BOOL _allowFold;
    double _fromRatio;
    double _toRatio;
    double _ratioThreshold;
    long long _maxLineCount;
    long long _minLineCount;
}

@property (nonatomic) double fromRatio;
@property (nonatomic) double toRatio;
@property (nonatomic) BOOL allowFold;
@property (nonatomic) double ratioThreshold;
@property (nonatomic) long long maxLineCount;
@property (nonatomic) long long minLineCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)fromRatio;
- (double)toRatio;
- (void)setFromRatio:(double)arg0;
- (void)setToRatio:(double)arg0;
- (BOOL)allowFold;
- (void)setAllowFold:(BOOL)arg0;
- (double)ratioThreshold;
- (void)setRatioThreshold:(double)arg0;
- (long long)minLineCount;
- (void)setMinLineCount:(long long)arg0;
- (id)init;
- (void)setMaxLineCount:(long long)arg0;
- (long long)maxLineCount;

@end
