//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPlayInteractionGenericButtonFrequencyConfigModel : MTLModel <MTLJSONSerializing> {
    long long _period;
    long long _times;
}

@property (nonatomic) long long period;
@property (nonatomic) long long times;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)period;
- (id)init;
- (void)setPeriod:(long long)arg0;
- (long long)times;
- (void)setTimes:(long long)arg0;

@end
