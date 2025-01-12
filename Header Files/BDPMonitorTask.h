//
//     Generated by private class-dump
//

@class NSArray;

@interface BDPMonitorTask : NSObject {
    BOOL _isStart;
    NSArray *_triggerFrequencys;
    long long _triggerIndex;
    id /* block */ _callback;
}

@property (copy, nonatomic) NSArray *triggerFrequencys;
@property (nonatomic) long long triggerIndex;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL isStart;

- (void)triggerCallback;
- (id)initWithFrequencys:(id)arg0 callback:(id /* block */)arg1;
- (void)setTriggerFrequencys:(id)arg0;
- (id)triggerFrequencys;
- (BOOL)isStart;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id /* block */)callback;
- (void)stop;
- (void)setIsStart:(BOOL)arg0;
- (void)start;
- (void)dealloc;
- (long long)triggerIndex;
- (void)setTriggerIndex:(long long)arg0;

@end
