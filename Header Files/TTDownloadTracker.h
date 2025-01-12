//
//     Generated by private class-dump
//

@interface TTDownloadTracker : NSObject {
    id /* block */ _eventBlock;
}

@property (copy, nonatomic) id /* block */ eventBlock;

+ (id)sharedInstance;

- (void)sendEvent:(unsigned long long)arg0 eventModel:(id)arg1;
- (id)eventNameWithEvent:(unsigned long long)arg0;
- (id)statusWithCommonEvent:(unsigned long long)arg0;
- (void)sendFinishEventWithModel:(id)arg0;
- (void)sendCancelEventWithModel:(id)arg0;
- (void)sendFailEventWithModel:(id)arg0 failCode:(long long)arg1 failMsg:(id)arg2;
- (void)sendUncompleteEventWithModel:(id)arg0;
- (void).cxx_destruct;
- (void)setEventBlock:(id /* block */)arg0;
- (id /* block */)eventBlock;

@end
