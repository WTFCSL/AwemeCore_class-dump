//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiteShareFeedFissionModel : MTLModel <MTLJSONSerializing> {
    NSString *_inviteToken;
}

@property (copy, nonatomic) NSString *inviteToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)inviteToken;
- (void)setInviteToken:(id)arg0;
- (void).cxx_destruct;

@end
