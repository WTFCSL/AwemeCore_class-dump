//
//     Generated by private class-dump
//

@class NSString;

@interface IESECAddressServiceAddressUpdateConfig : MTLModel <MTLJSONSerializing> {
    long long _offsetDistance;
    long long _noGpsRequestInterval;
}

@property (nonatomic) long long offsetDistance;
@property (nonatomic) long long noGpsRequestInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)offsetDistance;
- (long long)noGpsRequestInterval;
- (void)setOffsetDistance:(long long)arg0;
- (void)setNoGpsRequestInterval:(long long)arg0;

@end