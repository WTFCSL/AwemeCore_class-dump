//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEStudioStoryTTLMinsModel : MTLModel <MTLJSONSerializing> {
    long long _ttlMins;
    NSString *_desc;
    NSString *_btnDesc;
}

@property (readonly, nonatomic) long long ttlMins;
@property (readonly, copy, nonatomic) NSString *desc;
@property (readonly, copy, nonatomic) NSString *btnDesc;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)btnDesc;
- (long long)ttlMins;
- (id)desc;
- (void).cxx_destruct;

@end
