//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDUGLuckyRouterContext : NSObject {
    BOOL _alreadyHandle;
    NSString *_originUrl;
    NSString *_currentUrl;
    NSDictionary *_extraParams;
    id /* block */ _routerCompletion;
    id /* block */ _routerContextCompletion;
    double _routingStartTime;
}

@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *currentUrl;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL alreadyHandle;
@property (copy, nonatomic) id /* block */ routerCompletion;
@property (copy, nonatomic) id /* block */ routerContextCompletion;
@property (nonatomic) double routingStartTime;

- (id)extraParams;
- (id)originUrl;
- (void)setExtraParams:(id)arg0;
- (void)setCurrentUrl:(id)arg0;
- (id)currentUrl;
- (void)setAlreadyHandle:(BOOL)arg0;
- (double)routingStartTime;
- (id /* block */)routerContextCompletion;
- (void)setRouterContextCompletion:(id /* block */)arg0;
- (BOOL)alreadyHandle;
- (void)finishWithResult:(BOOL)arg0 errorInfo:(id)arg1;
- (void)setupData:(id)arg0 extraParams:(id)arg1;
- (id)initWithUrl:(id)arg0 extraParams:(id)arg1 contextCompletion:(id /* block */)arg2;
- (id /* block */)routerCompletion;
- (void)setRouterCompletion:(id /* block */)arg0;
- (id)initWithUrl:(id)arg0 completion:(id /* block */)arg1;
- (id)initWithUrl:(id)arg0 contextCompletion:(id /* block */)arg1;
- (void)setOriginUrl:(id)arg0;
- (void)setRoutingStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end