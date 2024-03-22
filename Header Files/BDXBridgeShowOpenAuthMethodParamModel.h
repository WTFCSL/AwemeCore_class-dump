//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSNumber;

@interface BDXBridgeShowOpenAuthMethodParamModel : BDXBridgeModel {
    NSDictionary *_certificationInfo;
    NSString *_client_key;
    NSString *_redirect_uri;
    NSString *_state;
    NSDictionary *_scopes;
    NSString *_response_type;
    NSNumber *_not_skip_confirm;
    NSString *_comment_id;
    NSString *_agreement_id;
    NSNumber *_proto_show;
}

@property (copy, nonatomic) NSDictionary *certificationInfo;
@property (copy, nonatomic) NSString *client_key;
@property (copy, nonatomic) NSString *redirect_uri;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSDictionary *scopes;
@property (copy, nonatomic) NSString *response_type;
@property (retain, nonatomic) NSNumber *not_skip_confirm;
@property (copy, nonatomic) NSString *comment_id;
@property (copy, nonatomic) NSString *agreement_id;
@property (retain, nonatomic) NSNumber *proto_show;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setComment_id:(id)arg0;
- (id)comment_id;
- (id)client_key;
- (id)redirect_uri;
- (id)response_type;
- (id)certificationInfo;
- (id)not_skip_confirm;
- (id)agreement_id;
- (id)proto_show;
- (void)setCertificationInfo:(id)arg0;
- (void)setClient_key:(id)arg0;
- (void)setRedirect_uri:(id)arg0;
- (void)setResponse_type:(id)arg0;
- (void)setNot_skip_confirm:(id)arg0;
- (void)setAgreement_id:(id)arg0;
- (void)setProto_show:(id)arg0;
- (id)scopes;
- (void)setScopes:(id)arg0;
- (void).cxx_destruct;
- (id)state;
- (void)setState:(id)arg0;

@end