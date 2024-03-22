//
//     Generated by private class-dump
//

@class NSNumber;

@interface IESLiveStackDynamicConfig : IESLiveStackDynamicRule {
    long long _distribution;
    long long _aligment;
    NSNumber *_spacing;
}

@property (nonatomic) long long distribution;
@property (nonatomic) long long aligment;
@property (retain, nonatomic) NSNumber *spacing;

- (void)executeAtState:(unsigned long long)arg0 managedStack:(id)arg1;
- (long long)aligment;
- (id)initWithDistribution:(long long)arg0 aligment:(long long)arg1 spacing:(id)arg2;
- (void)setAligment:(long long)arg0;
- (id)spacing;
- (long long)distribution;
- (void)setDistribution:(long long)arg0;
- (void)setSpacing:(id)arg0;
- (void).cxx_destruct;

@end
