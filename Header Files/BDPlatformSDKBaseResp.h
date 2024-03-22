//
//     Generated by private class-dump
//

@class NSString, BDPlatformSDKBaseReq;

@interface BDPlatformSDKBaseResp : NSObject {
    long long _errCode;
    NSString *_errString;
    NSString *_lang;
    NSString *_country;
    NSString *_responseId;
    BDPlatformSDKBaseReq *_originalReq;
}

@property (copy, nonatomic) NSString *responseId;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (retain, nonatomic) BDPlatformSDKBaseReq *originalReq;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errString;

- (long long)errCode;
- (void)setErrCode:(long long)arg0;
- (id)errString;
- (void)setErrString:(id)arg0;
- (id)originalReq;
- (void)setOriginalReq:(id)arg0;
- (id)country;
- (id)init;
- (void).cxx_destruct;
- (void)setCountry:(id)arg0;
- (id)responseId;
- (void)setResponseId:(id)arg0;
- (id)lang;
- (void)setLang:(id)arg0;

@end
