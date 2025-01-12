//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXStrangerConVersionRangeModel : MTLModel <TIMXStrangerConvVersionRangeModelProtocol> {
    long long _minVersion;
    long long _maxVersion;
}

@property (nonatomic) long long minVersion;
@property (nonatomic) long long maxVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMaxVersion:(long long)arg0;
- (long long)maxVersion;
- (void)setMinVersion:(long long)arg0;
- (long long)minVersion;

@end
