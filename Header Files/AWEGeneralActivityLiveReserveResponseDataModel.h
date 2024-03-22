//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGeneralActivityLiveReserveResponseDataModel : MTLModel <IGListDiffable, MTLJSONSerializing> {
    long long _responseStatus;
    NSString *_message;
    NSString *_prompts;
}

@property (nonatomic) long long responseStatus;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *prompts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)setMessage:(id)arg0;
- (void)setResponseStatus:(long long)arg0;
- (void).cxx_destruct;
- (id)message;
- (long long)responseStatus;
- (id)prompts;
- (void)setPrompts:(id)arg0;

@end
