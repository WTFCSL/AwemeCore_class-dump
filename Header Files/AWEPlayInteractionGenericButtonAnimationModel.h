//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPlayInteractionGenericButtonAnimationModel : MTLModel <MTLJSONSerializing> {
    NSString *_name;
    long long _startTime;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (long long)startTime;
- (void)setName:(id)arg0;
- (id)name;

@end
