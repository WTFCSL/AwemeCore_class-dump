//
//     Generated by private class-dump
//

@class NSString, DolphinRerankConfiguration, NSDictionary;
@protocol DolphinRerankDataSource;

@interface DolphinRerankService : NSObject {
    BOOL _isRanking;
    NSString *_serviceName;
    DolphinRerankConfiguration *_configuration;
    id<DolphinRerankDataSource> _dataSource;
    double _lastRequestTime;
    NSDictionary *_pitayaDataTemplate;
}

@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) DolphinRerankConfiguration *configuration;
@property (weak, nonatomic) id<DolphinRerankDataSource> dataSource;
@property (nonatomic) double lastRequestTime;
@property (nonatomic) BOOL isRanking;
@property (copy, nonatomic) NSDictionary *pitayaDataTemplate;

- (double)lastRequestTime;
- (void)setLastRequestTime:(double)arg0;
- (BOOL)isRanking;
- (void)startDolphinRerankWithTasks:(id)arg0 rerankContext:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (id)pitayaDataTemplate;
- (void)setPitayaDataTemplate:(id)arg0;
- (long long)operateTypeFromTaskName:(id)arg0;
- (void)setIsRanking:(BOOL)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)serviceName;
- (id)configuration;
- (void)setServiceName:(id)arg0;
- (void)setConfiguration:(id)arg0;
- (id)initWithName:(id)arg0 configuration:(id)arg1;

@end