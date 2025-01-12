//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMTextTriggerAnimationInfo : MTLModel <MTLJSONSerializing> {
    BOOL _inAdvance;
    NSString *_url;
    long long _type;
    NSString *_name;
    long long _version;
    long long _weight;
    long long _beginIndex;
}

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long version;
@property (nonatomic) long long weight;
@property (nonatomic) long long beginIndex;
@property (nonatomic) BOOL inAdvance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)inAdvance;
- (void)setInAdvance:(BOOL)arg0;
- (long long)weight;
- (void)setVersion:(long long)arg0;
- (void)setWeight:(long long)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setUrl:(id)arg0;
- (void)setType:(long long)arg0;
- (long long)version;
- (void)setName:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)url;
- (id)name;
- (long long)beginIndex;
- (void)setBeginIndex:(long long)arg0;

@end
