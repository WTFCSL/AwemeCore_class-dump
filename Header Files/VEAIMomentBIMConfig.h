//
//     Generated by private class-dump
//

@class NSArray;

@interface VEAIMomentBIMConfig : NSObject {
    unsigned long long _algorithmType;
    NSArray *_aspectInfos;
    long long _runtimeSelectModels;
}

@property (nonatomic) unsigned long long algorithmType;
@property (retain, nonatomic) NSArray *aspectInfos;
@property (nonatomic) long long runtimeSelectModels;

- (long long)runtimeSelectModels;
- (void)setRuntimeSelectModels:(long long)arg0;
- (void)setAspectInfos:(id)arg0;
- (id)aspectInfos;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)algorithmType;
- (void)setAlgorithmType:(unsigned long long)arg0;

@end
