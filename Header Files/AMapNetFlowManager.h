//
//     Generated by private class-dump
//

@class NSMutableDictionary, AMapErrorCodeStrategy;

@interface AMapNetFlowManager : NSObject {
    NSMutableDictionary *_blockConfig;
    NSMutableDictionary *_domainMaps;
    NSMutableDictionary *_domainStatistic;
    AMapErrorCodeStrategy *_appBlock;
    NSMutableDictionary *_errorCodeBlock;
}

@property (retain, nonatomic) NSMutableDictionary *blockConfig;
@property (retain, nonatomic) NSMutableDictionary *domainMaps;
@property (retain, nonatomic) NSMutableDictionary *domainStatistic;
@property (retain, nonatomic) AMapErrorCodeStrategy *appBlock;
@property (retain, nonatomic) NSMutableDictionary *errorCodeBlock;

+ (void)updateNetFlowConfig:(id)arg0;
+ (id)exchangeDomain:(id)arg0;
+ (id)isBlock:(id)arg0;
+ (void)checkResponse:(id)arg0 withRequest:(id)arg1 responseData:(id)arg2;
+ (id)sharedManager;

- (id)blockConfig;
- (id)domainMaps;
- (void)updateNetFlowConfig:(id)arg0;
- (void)loadCloudConfig;
- (id)exchangeDomain:(id)arg0;
- (id)isBlock:(id)arg0;
- (void)checkResponse:(id)arg0 withRequest:(id)arg1 responseData:(id)arg2;
- (void)updateNetFlowBlockConfig:(id)arg0;
- (void)updateNetFlowDomainMapsConfig:(id)arg0;
- (void)setBlockConfig:(id)arg0;
- (void)setDomainMaps:(id)arg0;
- (id)domainStatistic;
- (void)setDomainStatistic:(id)arg0;
- (id)appBlock;
- (void)setAppBlock:(id)arg0;
- (id)errorCodeBlock;
- (void)setErrorCodeBlock:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
