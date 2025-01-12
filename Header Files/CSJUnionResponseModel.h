//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface CSJUnionResponseModel : CSJResponseModel {
    NSArray *_creativesAry;
    NSString *_did;
    NSString *_message;
    long long _reason;
    NSString *_errorMsg;
    NSString *_desc;
}

@property (copy) NSArray *creativesAry;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long reason;
@property (retain, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *desc;

+ (void)makeResponseModelWithDictionary:(id)arg0 finishBlock:(id /* block */)arg1;
+ (id)host_appid;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (id)did;
- (void)setDid:(id)arg0;
- (id)creativesAry;
- (void)setupDataWithDictionary:(id)arg0;
- (void)setupCreativesWithDic:(id)arg0;
- (void)safeMssdkReportForScene;
- (void)setCreativesAry:(id)arg0;
- (void)mssdkReportForScene;
- (id)desc;
- (void)setMessage:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (long long)reason;
- (id)message;
- (void)setReason:(long long)arg0;
- (void)setDesc:(id)arg0;

@end
