//
//     Generated by private class-dump
//

@class NSString, CJPayUnionBindCardAuthorizationResponse;

@interface CJPayUnionBindCardHalfAccreditViewModel : CJPayBindCardPageBaseModel {
    NSString *_signOrderNo;
    CJPayUnionBindCardAuthorizationResponse *_authorizationResponse;
}

@property (copy, nonatomic) NSString *signOrderNo;
@property (retain, nonatomic) CJPayUnionBindCardAuthorizationResponse *authorizationResponse;

+ (id)keyMapperDict;

- (id)signOrderNo;
- (void)setSignOrderNo:(id)arg0;
- (void)setAuthorizationResponse:(id)arg0;
- (id)authorizationResponse;
- (void).cxx_destruct;

@end
