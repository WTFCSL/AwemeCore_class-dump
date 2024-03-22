//
//     Generated by private class-dump
//

@class IESLiveIMAppConfig, IESLiveIMBizConfig;

@protocol IESLiveIMPaaSClient <NSObject>

@property (retain, nonatomic) IESLiveIMAppConfig *appConfig;
@property (retain, nonatomic) IESLiveIMBizConfig *bizConfig;

- (void)setAppConfig:(id)arg0;
- (id)bizConfig;
- (void)setBizConfig:(id)arg0;
- (void)registerWith:(id)arg0 receiver:(id)arg1;
- (void)reconnect;
- (void)stop;
- (void)cleanup;
- (void)setup;
- (void)start;
- (id)appConfig;
- (void)unregisterWith:(id)arg0;

@end
