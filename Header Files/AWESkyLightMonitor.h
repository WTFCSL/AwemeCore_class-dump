//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWESkyLightMonitor : NSObject {
    NSMutableDictionary *_monitorDic;
}

@property (retain, nonatomic) NSMutableDictionary *monitorDic;

+ (id)sharedInstance;

- (void)startQueryTabType:(long long)arg0 action:(long long)arg1;
- (void)didQueryEndTabType:(long long)arg0 error:(id)arg1;
- (void)didRenderEndTabType:(long long)arg0;
- (id)monitorDic;
- (id)actionNameForAction:(long long)arg0;
- (id)tabNameForType:(long long)arg0;
- (void)setMonitorDic:(id)arg0;
- (void).cxx_destruct;

@end
