//
//     Generated by private class-dump
//

@protocol MPSCNNInstanceNormalizationDataSource <NSObject, NSCopying>

+ (BOOL)supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numberOfFeatureChannels;

- (float *)beta;
- (float *)gamma;
- (id)label;
- (unsigned long long)numberOfFeatureChannels;

@optional

- (float)epsilon;
- (void)purge;
- (BOOL)load;
- (id)copyWithZone:(struct _NSZone { } *)arg0 device:(id)arg1;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)updateGammaAndBetaWithCommandBuffer:(id)arg0 instanceNormalizationStateBatch:(id)arg1;
- (BOOL)updateGammaAndBetaWithInstanceNormalizationStateBatch:(id)arg0;

@end
