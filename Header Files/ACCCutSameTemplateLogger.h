//
//     Generated by private class-dump
//

@class NSString;

@interface ACCCutSameTemplateLogger : NSObject <VideoTemplateLoggerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)logger:(id)arg0 log:(id)arg1 level:(long long)arg2 file:(id)arg3 function:(id)arg4 line:(int)arg5 message:(id)arg6;

@end
