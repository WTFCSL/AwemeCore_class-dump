//
//     Generated by private class-dump
//

@class NSString, MXMetricManager;

@interface AWEMetricMonitor : NSObject <MXMetricManagerSubscriber> {
    MXMetricManager *_manager;
}

@property (retain, nonatomic) MXMetricManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setManager:(id)arg0;
- (id)manager;
- (void)didReceiveMetricPayloads:(id)arg0;

@end
