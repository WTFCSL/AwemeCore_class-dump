//
//     Generated by private class-dump
//

@class NSString;

@interface HMDStoreCondition : NSObject {
    long long _judgeType;
    NSString *_key;
    double _threshold;
    NSString *_stringValue;
}

@property (nonatomic) long long judgeType;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) double threshold;
@property (copy, nonatomic) NSString *stringValue;

- (void)setJudgeType:(long long)arg0;
- (long long)judgeType;
- (id)key;
- (double)threshold;
- (id)init;
- (void).cxx_destruct;
- (void)setStringValue:(id)arg0;
- (void)setKey:(id)arg0;
- (id)stringValue;
- (void)setThreshold:(double)arg0;

@end