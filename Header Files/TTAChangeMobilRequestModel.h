//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface TTAChangeMobilRequestModel : NSObject {
    NSString *_captcha;
    NSString *_mobile;
    NSString *_codeString;
    NSString *_ticket;
    NSString *_authToken;
    NSString *_unUseableMobileTickt;
    NSDictionary *_customParams;
}

@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *codeString;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *unUseableMobileTickt;
@property (retain, nonatomic) NSDictionary *customParams;

- (void)setCustomParams:(id)arg0;
- (id)customParams;
- (id)unUseableMobileTickt;
- (void)setUnUseableMobileTickt:(id)arg0;
- (id)codeString;
- (void)setCodeString:(id)arg0;
- (id)captcha;
- (void)setCaptcha:(id)arg0;
- (void)setAuthToken:(id)arg0;
- (id)authToken;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:(id)arg0;
- (id)mobile;
- (void)setMobile:(id)arg0;

@end
