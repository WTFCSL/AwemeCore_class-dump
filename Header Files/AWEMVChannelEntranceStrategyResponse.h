//
//     Generated by private class-dump
//

@class AWEMVChannelEntranceStrategyDebugInfo;

@interface AWEMVChannelEntranceStrategyResponse : AWEBaseApiModel {
    unsigned long long _strategy;
    AWEMVChannelEntranceStrategyDebugInfo *_debugInfo;
}

@property (nonatomic) unsigned long long strategy;
@property (retain, nonatomic) AWEMVChannelEntranceStrategyDebugInfo *debugInfo;

+ (id)debugInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)strategy;
- (void).cxx_destruct;
- (id)debugInfo;
- (void)setStrategy:(unsigned long long)arg0;
- (void)setDebugInfo:(id)arg0;

@end