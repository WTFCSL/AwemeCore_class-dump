//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayThreeDSEnrollResultResonse : JSONModel {
    NSString *_verifyID;
    NSString *_actionUrl;
    NSString *_authInformation;
}

@property (copy, nonatomic) NSString *verifyID;
@property (copy, nonatomic) NSString *actionUrl;
@property (copy, nonatomic) NSString *authInformation;
@property (readonly, copy, nonatomic) NSString *accessToken;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)verifyID;
- (void)setVerifyID:(id)arg0;
- (void).cxx_destruct;
- (id)actionUrl;
- (void)setActionUrl:(id)arg0;
- (id)accessToken;
- (id)authInformation;
- (void)setAuthInformation:(id)arg0;

@end
