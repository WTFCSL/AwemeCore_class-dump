//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWEFeedPrecisionDowngradeErrorData : NSObject {
    NSString *_imprID;
    NSMutableArray *_errorCodeArray;
    double _occurTime;
    NSString *_provider;
}

@property (retain, nonatomic) NSString *imprID;
@property (retain, nonatomic) NSMutableArray *errorCodeArray;
@property (nonatomic) double occurTime;
@property (retain, nonatomic) NSString *provider;

- (id)imprID;
- (void)setErrorCodeArray:(id)arg0;
- (void)setOccurTime:(double)arg0;
- (void)setImprID:(id)arg0;
- (id)errorCodeArray;
- (double)occurTime;
- (id)initWithErrorInfo:(id)arg0 timestamp:(double)arg1 provider:(id)arg2 imprId:(id)arg3;
- (void)addErrorCode:(id)arg0 timestamp:(double)arg1;
- (void)setProvider:(id)arg0;
- (id)init;
- (id)provider;
- (void).cxx_destruct;
- (id)description;

@end