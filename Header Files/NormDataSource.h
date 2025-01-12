//
//     Generated by private class-dump
//

@class NSString;

@interface NormDataSource : NSObject <MPSCNNInstanceNormalizationDataSource> {
    unsigned long long numberOfFeatureChannels;
}

@property (readonly, nonatomic) unsigned long long numberOfFeatureChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChannel:(unsigned long long)arg0 epsilon:(float)arg1 gamma:(float *)arg2 beta:(float *)arg3;
- (float)epsilon;
- (float *)beta;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (float *)gamma;
- (id)label;
- (unsigned long long)numberOfFeatureChannels;

@end
