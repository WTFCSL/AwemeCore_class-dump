//
//     Generated by private class-dump
//

@interface AppMonitorSwitchDataConverter : NSObject

+ (id)getInstanceID;
+ (id)sharedInstance;
+ (void)setInstanceID:(id)arg0;

- (BOOL)isEmptyofDic;
- (id)getSwitchResultForStat:(id)arg0 monitorPoint:(id)arg1 Dimension:(id)arg2 RandomNum:(int)arg3;
- (id)getSwitchResultForCountAndAlarm:(id)arg0 monitorPoint:(id)arg1 Type:(id)arg2 Arg:(id)arg3 RandomNum:(int)arg4;
- (void)removeDicContent;
- (void)setDicContent:(id)arg0;
- (id)init;

@end