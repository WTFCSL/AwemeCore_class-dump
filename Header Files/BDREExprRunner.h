//
//     Generated by private class-dump
//

@class BDREOperatorManager, BDREFuncManager, BDREExprCacheManager;

@interface BDREExprRunner : NSObject {
    BDREFuncManager *_funcManager;
    BDREOperatorManager *_operatorManager;
    BDREExprCacheManager *_cacheManager;
}

@property (retain, nonatomic) BDREFuncManager *funcManager;
@property (retain, nonatomic) BDREOperatorManager *operatorManager;
@property (retain, nonatomic) BDREExprCacheManager *cacheManager;

+ (id)sharedRunner;

- (id)execute:(id)arg0 preCommands:(id)arg1 withEnv:(id)arg2 uuid:(id)arg3;
- (id)commandsFromExpr:(id)arg0;
- (id)initWithShared;
- (id)funcManager;
- (id)operatorManager;
- (id)execute:(id)arg0 withEnv:(id)arg1 uuid:(id)arg2;
- (void)logExecuteExprWithResponse:(id)arg0 expr:(id)arg1 uuid:(id)arg2;
- (void)logErrorEventWithCode:(long long)arg0 cel:(id)arg1 message:(id)arg2;
- (void)logEventWithResponse:(id)arg0 expr:(id)arg1 uuid:(id)arg2;
- (id)execute:(id)arg0 withEnv:(id)arg1;
- (void)setFuncManager:(id)arg0;
- (void)setOperatorManager:(id)arg0;
- (void)registerFunc:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)cacheManager;
- (void)setCacheManager:(id)arg0;
- (void)registerOperator:(id)arg0;

@end
