//
//     Generated by private class-dump
//

@interface AMapAnalyticsLogProvider : NSObject

+ (id)JSONErrorLogWithLogs:(id)arg0;
+ (id)eventLogWithID:(id)arg0 params:(id)arg1 component:(id)arg2;
+ (id)errorLogWithType:(id)arg0 name:(id)arg1 detail:(id)arg2 component:(id)arg3;
+ (id)eventLogWithLogs:(id)arg0;
+ (id)logStringWithDictionary:(id)arg0 encrypted:(BOOL)arg1 appendComma:(BOOL)arg2;
+ (id)errorLogHeader;
+ (void)decodeLogDicFromLogData:(id)arg0 analysisJson:(id)arg1;
+ (id)decodeLogDicFromLogData:(id)arg0;

@end
