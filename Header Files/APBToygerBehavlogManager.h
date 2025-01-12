//
//     Generated by private class-dump
//

@class NSDictionary, BisBehavLog;

@interface APBToygerBehavlogManager : NSObject {
    NSDictionary *_config;
    BisBehavLog *_behavLog;
}

@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) BisBehavLog *behavLog;

- (void)clearTask;
- (id)buildClientInfo;
- (id)buildToken;
- (id)buildCommon;
- (id)behavLog;
- (id)generateLogWithInvokeType:(id)arg0 withRetry:(long long)arg1;
- (void)setBehavLog:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)addTask:(id)arg0;
- (id)currentTime;

@end
