//
//     Generated by private class-dump
//

@interface BDMatrixUniversalMonitor : NSObject

+ (void)launchTime;
+ (void)managerInitOnce;
+ (void)insertMonitor:(id)arg0;
+ (void)syncMonitorMapUnThreadSafe;
+ (BOOL)_addContent:(id)arg0 monitorType:(unsigned long long)arg1;
+ (BOOL)_addContentUnThreadSafe:(id)arg0 content:(id)arg1;
+ (void)requestDataChannelWithType:(unsigned long long)arg0 reportType:(unsigned long long)arg1 needImagesInfo:(BOOL)arg2;
+ (void)asyncAddContent:(id)arg0 monitorType:(unsigned long long)arg1 callback:(id /* block */)arg2;
+ (BOOL)addContent:(id)arg0 monitorType:(unsigned long long)arg1;

@end
