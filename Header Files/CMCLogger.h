//
//     Generated by private class-dump
//

@class NSString;

@interface CMCLogger : NSObject <CMCLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loggerWithLevel:(int)arg0 moduleName:(id)arg1 subModule:(id)arg2 cmcTag:(id)arg3 fileName:(const char *)arg4 lineNumber:(int)arg5 funcName:(const char *)arg6 message:(id)arg7;
+ (unsigned long long)aweLevelWithLevel:(int)arg0;

@end
