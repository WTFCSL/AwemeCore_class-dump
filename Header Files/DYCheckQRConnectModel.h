//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface DYCheckQRConnectModel : DYAPassportResponseModel {
    NSString *_descUrl;
    NSString *_extra;
    NSString *_redirectUrl;
    NSString *_status;
    NSDictionary *_userData;
}

@property (copy, nonatomic) NSString *descUrl;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *redirectUrl;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSDictionary *userData;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)descUrl;
- (void)setDescUrl:(id)arg0;
- (long long)connectState;
- (void).cxx_destruct;
- (id)userData;
- (id)status;
- (id)extra;
- (void)setUserData:(id)arg0;
- (void)setStatus:(id)arg0;
- (id)redirectUrl;
- (void)setRedirectUrl:(id)arg0;

@end
