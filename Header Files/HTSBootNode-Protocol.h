//
//     Generated by private class-dump
//

@class NSString;

@protocol HTSBootNode <NSObject>

@property (readonly) BOOL isMainThread;
@property (readonly) unsigned int qos;
@property (readonly) double delayDuration;
@property (readonly) BOOL enabled;
@property (readonly) NSString *uniqueId;

- (double)delayDuration;
- (void)run;
- (BOOL)enabled;
- (id)uniqueId;
- (BOOL)isMainThread;
- (unsigned int)qos;

@end
