//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface APRiskReportRequest : NSObject {
    NSString *_os;
    NSString *_apdid;
    NSString *_pubApdid;
    NSString *_priApdid;
    NSString *_token;
    NSString *_umidToken;
    NSString *_version;
    NSString *_lastTime;
    NSString *_dynamicKey;
    NSDictionary *_dataMap;
    NSDictionary *_bizData;
}

@property (retain, nonatomic) NSString *os;
@property (retain, nonatomic) NSString *apdid;
@property (retain, nonatomic) NSString *pubApdid;
@property (retain, nonatomic) NSString *priApdid;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *umidToken;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *lastTime;
@property (retain, nonatomic) NSString *dynamicKey;
@property (retain, nonatomic) NSDictionary *dataMap;
@property (retain, nonatomic) NSDictionary *bizData;

- (void)setBizData:(id)arg0;
- (id)dataMap;
- (void)setDataMap:(id)arg0;
- (void)setApdid:(id)arg0;
- (id)apdid;
- (id)pubApdid;
- (void)setPubApdid:(id)arg0;
- (id)priApdid;
- (void)setPriApdid:(id)arg0;
- (id)umidToken;
- (void)setUmidToken:(id)arg0;
- (id)dynamicKey;
- (void)setDynamicKey:(id)arg0;
- (id)bizData;
- (void)setLastTime:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)os;
- (void)setToken:(id)arg0;
- (id)token;
- (id)version;
- (id)lastTime;
- (void)setOs:(id)arg0;

@end
