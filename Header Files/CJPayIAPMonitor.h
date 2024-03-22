//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayIAPMonitor : NSObject {
    BOOL _useProductCache;
    NSString *_businessIdentify;
    NSString *_version;
    NSString *_iapType;
    double _startTime;
    long long _createBizOrderRetryCount;
    long long _sendTransactionRetryCount;
}

@property (nonatomic) double startTime;
@property (nonatomic) long long createBizOrderRetryCount;
@property (nonatomic) long long sendTransactionRetryCount;
@property (copy, nonatomic) NSString *businessIdentify;
@property (nonatomic) BOOL useProductCache;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *iapType;

- (void)setIapType:(id)arg0;
- (void)monitorService:(id)arg0 category:(id)arg1 extra:(id)arg2;
- (id)iapType;
- (void)monitor:(unsigned long long)arg0 category:(id)arg1 extra:(id)arg2;
- (void)p_monitorWakeUpWithCategory:(id)arg0 extra:(id)arg1;
- (void)p_monitorRequestProductsWithCategory:(id)arg0 extra:(id)arg1;
- (void)p_monitorCreateBizOrderWithCategory:(id)arg0 extra:(id)arg1;
- (void)p_monitorStartPaymentWithCategory:(id)arg0 extra:(id)arg1;
- (void)p_monitorReceiveTransactionWithCategory:(id)arg0 extra:(id)arg1;
- (void)p_monitorVerifyTransactionWithCategory:(id)arg0 extra:(id)arg1;
- (void)p_monitorCallbackResultWithCategory:(id)arg0 extra:(id)arg1;
- (void)p_monitorStagesCostTimeWithCategory:(id)arg0 extra:(id)arg1;
- (void)setCreateBizOrderRetryCount:(long long)arg0;
- (void)setSendTransactionRetryCount:(long long)arg0;
- (long long)createBizOrderRetryCount;
- (id)businessIdentify;
- (long long)sendTransactionRetryCount;
- (BOOL)useProductCache;
- (void)p_monitorInitWithCategory:(id)arg0 extra:(id)arg1;
- (void)setBusinessIdentify:(id)arg0;
- (void)setUseProductCache:(BOOL)arg0;
- (void)setStartTime:(double)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (double)startTime;

@end
