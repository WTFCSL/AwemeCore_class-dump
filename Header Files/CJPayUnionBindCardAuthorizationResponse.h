//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;
@protocol CJPayMemAgreementModel;

@interface CJPayUnionBindCardAuthorizationResponse : CJPayBaseResponse {
    NSString *_authorizationIconUrl;
    NSString *_nameMask;
    NSString *_idCodeMask;
    NSString *_mobileMask;
    NSArray<CJPayMemAgreementModel> *_agreements;
    NSString *_guideMessage;
    NSDictionary *_protocolGroupNames;
}

@property (retain, nonatomic) NSString *authorizationIconUrl;
@property (retain, nonatomic) NSString *nameMask;
@property (retain, nonatomic) NSString *idCodeMask;
@property (retain, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *agreements;
@property (retain, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)nameMask;
- (void)setNameMask:(id)arg0;
- (id)guideMessage;
- (id)protocolGroupNames;
- (id)agreements;
- (void)setAgreements:(id)arg0;
- (id)idCodeMask;
- (id)mobileMask;
- (void)setMobileMask:(id)arg0;
- (void)setProtocolGroupNames:(id)arg0;
- (void)setGuideMessage:(id)arg0;
- (void)setIdCodeMask:(id)arg0;
- (id)authorizationIconUrl;
- (void)setAuthorizationIconUrl:(id)arg0;
- (void).cxx_destruct;

@end
