//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPayTransferAccountsPayStatusModel : AWEBaseApiModel {
    BOOL _continueQuery;
    NSString *_bizCode;
    NSString *_bizMsg;
    unsigned long long _payStatus;
    long long _retryDuration;
}

@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *bizMsg;
@property (nonatomic) unsigned long long payStatus;
@property (nonatomic) long long retryDuration;
@property (nonatomic) BOOL continueQuery;

+ (id)JSONKeyPathsByPropertyKey;

- (id)bizCode;
- (void)setPayStatus:(unsigned long long)arg0;
- (unsigned long long)payStatus;
- (void)setBizCode:(id)arg0;
- (id)bizMsg;
- (BOOL)continueQuery;
- (void)setBizMsg:(id)arg0;
- (long long)retryDuration;
- (void)setRetryDuration:(long long)arg0;
- (void)setContinueQuery:(BOOL)arg0;
- (void).cxx_destruct;

@end
