//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiteRedPacketGuideInfo : MTLModel <MTLJSONSerializing> {
    long long _publishCount;
    long long _publishLimit;
}

@property (nonatomic) long long publishCount;
@property (nonatomic) long long publishLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)publishCount;
- (void)setPublishCount:(long long)arg0;
- (long long)publishLimit;
- (void)setPublishLimit:(long long)arg0;
- (void)setValue:(id)arg0 forUndefinedKey:(id)arg1;

@end
