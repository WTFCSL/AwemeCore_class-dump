//
//     Generated by private class-dump
//

@interface RACImmediateScheduler : RACScheduler

- (id)scheduleRecursiveBlock:(id /* block */)arg0;
- (id)after:(id)arg0 schedule:(id /* block */)arg1;
- (id)after:(id)arg0 repeatingEvery:(double)arg1 withLeeway:(double)arg2 schedule:(id /* block */)arg3;
- (id)init;
- (id)schedule:(id /* block */)arg0;

@end