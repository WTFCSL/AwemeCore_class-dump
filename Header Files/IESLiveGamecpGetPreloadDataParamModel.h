//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESLiveGamecpGetPreloadDataParamModel : IESLiveBridgeModel {
    NSString *_taskId;
    NSNumber *_timeout;
    NSString *_preloadId;
}

@property (copy, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSString *preloadId;

+ (id)modelCustomPropertyMapper;

- (id)preloadId;
- (void)setPreloadId:(id)arg0;
- (void).cxx_destruct;
- (id)timeout;
- (id)taskId;
- (void)setTimeout:(id)arg0;
- (void)setTaskId:(id)arg0;

@end
