//
//     Generated by private class-dump
//

@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface LSIMThrottle : NSObject {
    unsigned long long _type;
    double _interval;
    id /* block */ _taskBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastRunTaskDate;
    NSDate *_nextRunTaskDate;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) double interval;
@property (copy, nonatomic) id /* block */ taskBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *lastRunTaskDate;
@property (retain, nonatomic) NSDate *nextRunTaskDate;

+ (id)throttleWithType:(unsigned long long)arg0 interval:(double)arg1 queue:(id)arg2 taskBlock:(id /* block */)arg3;

- (void)setTaskBlock:(id /* block */)arg0;
- (id)initWithType:(unsigned long long)arg0 interval:(double)arg1 queue:(id)arg2 taskBlock:(id /* block */)arg3;
- (id /* block */)taskBlock;
- (void)setNextRunTaskDate:(id)arg0;
- (void)setLastRunTaskDate:(id)arg0;
- (id)lastRunTaskDate;
- (id)nextRunTaskDate;
- (void)execute;
- (void).cxx_destruct;
- (void)call;
- (double)interval;
- (unsigned long long)type;
- (void)setInterval:(double)arg0;
- (void)invalidate;
- (void)setType:(unsigned long long)arg0;
- (id)queue;
- (void)setQueue:(id)arg0;

@end
