//
//     Generated by private class-dump
//

@class NSString;

@interface PTYOpenTrace : NSObject <PTYOpenTraceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportTrace:(const void *)arg0 filter:(const void *)arg1;
+ (BOOL)enabled;
+ (void)setup:(id)arg0;

@end
