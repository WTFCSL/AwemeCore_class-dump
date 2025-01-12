//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AMapLogHandler : NSObject {
    NSString *_componentName;
    NSObject<OS_dispatch_queue> *_logHandlerQueue;
}

@property (copy, nonatomic) NSString *componentName;
@property (readonly, nonatomic) NSString *logHandlerName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logHandlerQueue;
@property (readonly, nonatomic, getter=isOnGlobalLoggingQueue) BOOL onGlobalLoggingQueue;
@property (readonly, nonatomic, getter=isOnInternalLoggerQueue) BOOL onInternalLoggerQueue;

- (id)logHandlerQueue;
- (void)uploadLogWithlevelStr:(id)arg0 complete:(id /* block */)arg1;
- (id)logHandlerName;
- (BOOL)isOnGlobalLoggingQueue;
- (BOOL)isOnInternalLoggerQueue;
- (void)setLogHandlerQueue:(id)arg0;
- (id)componentName;
- (void)logMessage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setComponentName:(id)arg0;

@end
