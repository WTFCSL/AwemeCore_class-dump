//
//     Generated by private class-dump
//

@interface VeLivePlayerLogManager : NSObject

+ (void)writeLogLevel:(unsigned long long)arg0 tag:(id)arg1 log:(id)arg2;
+ (void)initVolcLog;
+ (void)setLogConfiguration:(id)arg0;
+ (void)setLegacyAPILogLevel:(unsigned long long)arg0;
+ (void)writeLogLevel:(unsigned long long)arg0 tag:(id)arg1 fileName:(char *)arg2 line:(int)arg3 log:(id)arg4;
+ (void)writeLogLevel:(unsigned long long)arg0 tag:(id)arg1 fileName:(char *)arg2 line:(int)arg3 format:(id)arg4;
+ (void)writeLogLevel:(unsigned long long)arg0 tag:(id)arg1 fileName:(char *)arg2 function:(char *)arg3 line:(int)arg4 format:(id)arg5;
+ (void)setLogLevel:(unsigned long long)arg0;

@end