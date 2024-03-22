//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface AWEPSSOSecondaryVerificationInfo : NSObject {
    NSString *_profileKey;
    NSString *_sharkTicket;
    NSNumber *_verifyType;
    NSString *_ticket;
    NSString *_verifyMobile;
    NSDictionary *_OAuthInfo;
}

@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *sharkTicket;
@property (copy, nonatomic) NSNumber *verifyType;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *verifyMobile;
@property (copy, nonatomic) NSDictionary *OAuthInfo;

- (id)paramsDictionary;
- (id)profileKey;
- (id)OAuthInfo;
- (void)setProfileKey:(id)arg0;
- (id)sharkTicket;
- (void)setSharkTicket:(id)arg0;
- (id)verifyMobile;
- (void)setVerifyMobile:(id)arg0;
- (void)setOAuthInfo:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)ticket;
- (void)setTicket:(id)arg0;
- (id)verifyType;
- (void)setVerifyType:(id)arg0;

@end
