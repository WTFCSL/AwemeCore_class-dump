//
//     Generated by private class-dump
//

@protocol FPLifecycleOwner

@property (nonatomic, readonly) unsigned long long pageState;
@property (nonatomic, readonly) long long appState;
@property (nonatomic, readonly) BOOL isPresenting;
@property (nonatomic, readonly) BOOL isTopVC;

- (BOOL)isTopVC;
- (long long)appState;
- (BOOL)isPresenting;
- (unsigned long long)pageState;

@end
