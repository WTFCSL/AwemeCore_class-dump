//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface ACCAssetImageGeneratorTracker : NSObject {
    NSMutableArray *_clipDurationArray;
}

@property (retain, nonatomic) NSMutableArray *clipDurationArray;

+ (void)trackAssetImageGeneratorWithType:(unsigned long long)arg0 frames:(long long)arg1 beginTime:(double)arg2 extra:(id)arg3;
+ (void)trackAssetImageGeneratorWithType:(unsigned long long)arg0 durations:(id)arg1 extra:(id)arg2;
+ (id)getSceneOfType:(unsigned long long)arg0;

- (id)clipDurationArray;
- (void)setClipDurationArray:(id)arg0;
- (void).cxx_destruct;

@end
