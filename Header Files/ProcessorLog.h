//
//     Generated by private class-dump
//

@interface ProcessorLog : NSObject

+ (void)log:(int)arg0 filename:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
+ (void)setPrintLevel:(int)arg0;
+ (void)setCallbackLevel:(int)arg0;
+ (void)setErrorCallbackFirstOnly:(int)arg0;
+ (void)setCallback:(void /* function */ *)arg0;

@end
