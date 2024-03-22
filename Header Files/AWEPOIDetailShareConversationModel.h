//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEPOIDetailShareConversationModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_shortId;
    NSString *_avatarUrl;
}

@property (retain, nonatomic) NSNumber *shortId;
@property (copy, nonatomic) NSString *avatarUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)shortId;
- (void)setAvatarUrl:(id)arg0;
- (void)setShortId:(id)arg0;
- (id)avatarUrl;
- (void).cxx_destruct;

@end
