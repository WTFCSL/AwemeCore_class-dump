//
//     Generated by private class-dump
//

@class NSDictionary, NSArray;

@interface AWEECBcmNetworkChecker : NSObject {
    BOOL _hookFinish;
    BOOL _syncFinish;
    int _enable;
    int _shouldReportSuccess;
    NSDictionary *_originSettings;
    NSArray *_monitorList;
}

@property (class, readonly) AWEECBcmNetworkChecker *shared;

@property BOOL hookFinish;
@property BOOL syncFinish;
@property (retain, nonatomic) NSDictionary *originSettings;
@property int enable;
@property int shouldReportSuccess;
@property (copy, nonatomic) NSArray *monitorList;

+ (id)shared;

- (id)monitorList;
- (void)setMonitorList:(id)arg0;
- (void)hookNetwork;
- (BOOL)syncFinish;
- (void)setSyncFinish:(BOOL)arg0;
- (void)setOriginSettings:(id)arg0;
- (id)originSettings;
- (void)setShouldReportSuccess:(int)arg0;
- (BOOL)hookFinish;
- (void)setHookFinish:(BOOL)arg0;
- (void)checkRequest:(id)arg0 response:(id)arg1 data:(id)arg2;
- (void)checkRequest:(id)arg0 accordingToMonitor:(id)arg1 response:(id)arg2 data:(id)arg3;
- (id)bodyToParams:(id)arg0;
- (id)checkPointsResultFrom:(id)arg0 requestParams:(id)arg1;
- (id)appendInfo:(id)arg0 accordingToData:(id)arg1;
- (void)reportResultIsSuccess:(BOOL)arg0 info:(id)arg1;
- (id)checkRequestParams:(id)arg0 accordingToCheckPoint:(id)arg1;
- (id)checkRequestParams:(id)arg0 location:(id)arg1 paramName:(id)arg2 allowValue:(id)arg3 uploadRow:(int)arg4;
- (BOOL)isObjectEmpty:(id)arg0;
- (id)valueOfLocation:(id)arg0 inParams:(id)arg1;
- (id)valueFrom:(id)arg0 index:(int)arg1 locations:(id)arg2;
- (int)shouldReportSuccess;
- (int)enable;
- (id)init;
- (void).cxx_destruct;
- (void)syncSettings;
- (void)setEnable:(int)arg0;

@end
