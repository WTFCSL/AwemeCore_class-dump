//
//     Generated by private class-dump
//

@class TTResponseFilterObject, NSString;

@interface AWELiveNetworkMonitoringImpl : NSObject <IESLiveNetworkMonitoring> {
    TTResponseFilterObject *_responseFilterObj;
}

@property (retain, nonatomic) TTResponseFilterObject *responseFilterObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)responseFilterObj;
- (void)setResponseFilterObj:(id)arg0;
- (void).cxx_destruct;
- (void)endMonitoring;
- (void)beginMonitoring;

@end
