//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol EEUIAnnotationAssetUIMoreMaxSize, EEUIAnnotationAssetUIMoreAutoCutting, EEUIAnnotationAssetUIMoreAlgorithmRequirement;

@protocol EEUIAnnotationAssetUIMore <NSObject>

@property (readonly, nonatomic) NSArray *originalValue;
@property (readonly, nonatomic) NSArray *currentValue;
@property (readonly, nonatomic) NSArray *lastValue;
@property (readonly, copy, nonatomic) NSString *from;
@property (readonly, nonatomic) int assetType;
@property (readonly, nonatomic) NSArray *suffixes;
@property (readonly, nonatomic) long long minCount;
@property (readonly, nonatomic) long long maxCount;
@property (readonly, nonatomic) id<EEUIAnnotationAssetUIMoreMaxSize> maxSize;
@property (readonly, nonatomic) id<EEUIAnnotationAssetUIMoreAutoCutting> autoCutting;
@property (readonly, nonatomic) id<EEUIAnnotationAssetUIMoreAlgorithmRequirement> algorithmRequirement;
@property (readonly, nonatomic) BOOL needLoading;
@property (readonly, nonatomic) BOOL needGuide;
@property (readonly, copy, nonatomic) NSString *imgKey;

- (BOOL)needLoading;
- (id)autoCutting;
- (id)algorithmRequirement;
- (BOOL)needGuide;
- (id)imgKey;
- (long long)minCount;
- (id)maxSize;
- (id)currentValue;
- (int)assetType;
- (id)lastValue;
- (long long)maxCount;
- (id)originalValue;
- (id)from;
- (id)suffixes;

@end
