//
//     Generated by private class-dump
//

@class NSString;

@interface DYCertificationModel : MTLModel <MTLJSONSerializing> {
    NSString *_descMessage;
    NSString *_profileKey;
    NSString *_smsCodeKey;
    NSString *_identityTicket;
    NSString *_authTicket;
    NSString *_scene;
    NSString *_flow;
}

@property (copy, nonatomic) NSString *descMessage;
@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *smsCodeKey;
@property (copy, nonatomic) NSString *identityTicket;
@property (copy, nonatomic) NSString *authTicket;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)profileKey;
- (void)setProfileKey:(id)arg0;
- (id)smsCodeKey;
- (void)setSmsCodeKey:(id)arg0;
- (id)authTicket;
- (void)setAuthTicket:(id)arg0;
- (id)descMessage;
- (void)setDescMessage:(id)arg0;
- (id)identityTicket;
- (void)setIdentityTicket:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)scene;
- (id)flow;
- (void)setFlow:(id)arg0;

@end
