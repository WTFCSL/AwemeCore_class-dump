//
//     Generated by private class-dump
//

@class IESECOrderListContext, NSString;

@interface IESECOrderListDataController : NSObject <YataNetConfigDelegate> {
    BOOL _hasQuerySuccessed;
    IESECOrderListContext *_context;
}

@property (retain, nonatomic) IESECOrderListContext *context;
@property (nonatomic) BOOL hasQuerySuccessed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getLogIdWithResponse:(id)arg0 andError:(id)arg1;
+ (void)requestQueryDataWithContext:(id)arg0;

- (id)bizQueryApi;
- (id)bizUpdateApi;
- (id)yataUplinkExParams;
- (void)setHasQuerySuccessed:(BOOL)arg0;
- (BOOL)hasQuerySuccessed;
- (id)requestQueryWithResultCompletion:(id /* block */)arg0 metricsBlock:(id /* block */)arg1;
- (void)loadMoreWithCompletion:(id /* block */)arg0 metricsBlock:(id /* block */)arg1;
- (void)requestQueryWithCompletion:(id /* block */)arg0 metricsBlock:(id /* block */)arg1;
- (void)requestWithParams:(id)arg0 completion:(id /* block */)arg1 metricsBlock:(id /* block */)arg2;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end