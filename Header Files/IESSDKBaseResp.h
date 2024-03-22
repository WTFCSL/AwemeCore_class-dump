//
//     Generated by private class-dump
//

@class NSString, IESSDKBaseReq, NSDictionary;

@interface IESSDKBaseResp : NSObject {
    long long _consumerProductType;
    long long _platformProductType;
    long long _errCode;
    NSString *_errString;
    NSDictionary *_passUserInfo;
    NSString *_userID;
    NSString *_lang;
    NSString *_country;
    NSString *_responseId;
    IESSDKBaseReq *_originalBaseReq;
}

@property (copy, nonatomic) NSString *responseId;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (retain, nonatomic) IESSDKBaseReq *originalBaseReq;
@property (nonatomic) long long consumerProductType;
@property (nonatomic) long long platformProductType;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errString;
@property (copy, nonatomic) NSDictionary *passUserInfo;
@property (copy, nonatomic) NSString *userID;

- (long long)errCode;
- (void)setErrCode:(long long)arg0;
- (id)errString;
- (void)setErrString:(id)arg0;
- (id)originalBaseReq;
- (void)setOriginalBaseReq:(id)arg0;
- (void)setPlatformProductType:(long long)arg0;
- (long long)consumerProductType;
- (void)setConsumerProductType:(long long)arg0;
- (long long)platformProductType;
- (id)passUserInfo;
- (void)setPassUserInfo:(id)arg0;
- (id)userID;
- (id)country;
- (id)init;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setCountry:(id)arg0;
- (id)responseId;
- (void)setResponseId:(id)arg0;
- (id)lang;
- (void)setLang:(id)arg0;

@end