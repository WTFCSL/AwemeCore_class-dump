//
//     Generated by private class-dump
//

@class NSNumber;

@interface BDGetBcmChainV2ParamModel : IESLiveBridgeModel {
    BOOL _isDomainStandard;
    NSNumber *_chainLength;
}

@property (retain, nonatomic) NSNumber *chainLength;
@property (nonatomic) BOOL isDomainStandard;

+ (id)modelCustomPropertyMapper;

- (id)chainLength;
- (void)setChainLength:(id)arg0;
- (BOOL)isDomainStandard;
- (void)setIsDomainStandard:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end
