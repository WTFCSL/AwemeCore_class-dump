//
//     Generated by private class-dump
//

@interface LEBLog : NSObject

+ (void)logLevel:(unsigned long long)arg0 file:(const char *)arg1 lineNumber:(int)arg2 functionName:(const char *)arg3 format:(id)arg4;
+ (id)getRedirectTodayLogFilePath;
+ (void)enableLEBLog:(BOOL)arg0;
+ (void)redirectLEBLogToDocumentFolder;
+ (void)redirectLEBLogToTarget:(id)arg0 output:(SEL)arg1;
+ (void)redirectLEBAbnormalLogToTarget:(id)arg0 output:(SEL)arg1;

@end