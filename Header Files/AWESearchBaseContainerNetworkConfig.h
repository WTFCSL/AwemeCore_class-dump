//
//     Generated by private class-dump
//

@interface AWESearchBaseContainerNetworkConfig : NSObject {
    BOOL _customAnylyseResponse;
    BOOL _netStepSign;
    BOOL _needPostMethod;
    long long _requestDataCount;
    unsigned long long _flowRequestType;
}

@property (nonatomic) long long requestDataCount;
@property (nonatomic) BOOL customAnylyseResponse;
@property (nonatomic) BOOL netStepSign;
@property (nonatomic) BOOL needPostMethod;
@property (nonatomic) unsigned long long flowRequestType;

- (void)setFlowRequestType:(unsigned long long)arg0;
- (void)setRequestDataCount:(long long)arg0;
- (void)setCustomAnylyseResponse:(BOOL)arg0;
- (void)setNetStepSign:(BOOL)arg0;
- (void)setNeedPostMethod:(BOOL)arg0;
- (long long)requestDataCount;
- (BOOL)customAnylyseResponse;
- (BOOL)netStepSign;
- (BOOL)needPostMethod;
- (unsigned long long)flowRequestType;
- (id)init;

@end