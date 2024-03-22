//
//     Generated by private class-dump
//

@interface IESMMEffectAlgorithmBach : NSObject {
    void *_algoHandle;
}

@property (nonatomic) void *algoHandle;

- (void)addBachAlgorithmName:(id)arg0 config:(id)arg1 algoType:(unsigned long long)arg2;
- (void)removeAllBachAlgorithm;
- (id)getBachAlgorithmResultWithAlgoType:(unsigned long long)arg0;
- (Class)resultClassWithAlgoType:(unsigned long long)arg0;
- (id)initWithAlgorithmHandle:(void *)arg0;
- (void)setAlgoHandle:(void *)arg0;
- (void *)algoHandle;
- (int)parseBachAlgoTypeFromAlgoType:(unsigned long long)arg0;

@end