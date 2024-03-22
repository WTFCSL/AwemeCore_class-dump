//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface HGTimer : NSObject {
    NSMutableDictionary *_timeout;
    NSMutableDictionary *_interval;
    NSMutableDictionary *_timeoutNT;
    NSMutableDictionary *_intervalNT;
}

@property (retain, nonatomic) NSMutableDictionary *interval;

- (void)setTimeout:(long long)arg0 time:(long long)arg1 inRunLoop:(id)arg2 callback:(id /* block */)arg3;
- (void)setInterval:(long long)arg0 time:(long long)arg1 inRunLoop:(id)arg2 callback:(id /* block */)arg3;
- (void)setTimeout:(long long)arg0 time:(long long)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)_timerInnerFireFunction:(id)arg0;
- (void)setInterval:(long long)arg0 time:(long long)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)setTimeout:(long long)arg0 time:(long long)arg1 callbackMainThread:(id /* block */)arg2;
- (void)setInterval:(long long)arg0 time:(long long)arg1 callbackMainThread:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)interval;
- (void)setInterval:(id)arg0;
- (void)dealloc;
- (void)clearInterval:(long long)arg0;
- (void)clearTimeout:(long long)arg0;

@end
