//
//     Generated by private class-dump
//

@protocol RTVStateRecorder <NSObject>

- (id)addKey:(id)arg0 handler:(id /* block */)arg1;
- (id)addKey:(id)arg0 handler:(id /* block */)arg1 scheduler:(id)arg2;
- (id)stateValueForKey:(id)arg0;
- (void)removeHandlerWithToken:(id)arg0;
- (void)setStateValue:(id)arg0 forKey:(id)arg1 withReason:(id)arg2 andContext:(id)arg3;
- (id)stateValueForKey:(id)arg0 defaultValue:(id)arg1;

@end