//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ECOMTIMMulticastDelegateNode : NSObject {
    BOOL _sync;
    int _priority;
    id _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_key;
}

@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int priority;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL sync;

- (BOOL)sync;
- (id)key;
- (void).cxx_destruct;
- (void)setSync:(BOOL)arg0;
- (void)setPriority:(int)arg0;
- (void)setKey:(id)arg0;
- (id)delegate;
- (id)queue;
- (void)setDelegate:(id)arg0;
- (int)priority;
- (void)setQueue:(id)arg0;

@end
