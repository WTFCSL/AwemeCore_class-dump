//
//     Generated by private class-dump
//

@class NSString, NSObject;

@interface HMDKVOPair : NSObject {
    BOOL _actived;
    BOOL _crashed;
    NSObject *_HMDObserver;
    Class _HMDObserverClass;
    void *_HMDObserverPtr;
    unsigned long long _HMDObserverSize;
    NSString *_HMDKeyPath;
    unsigned long long _HMDOption;
    void *_HMDContext;
}

@property (readonly, weak, nonatomic) NSObject *HMDObserver;
@property (readonly, nonatomic) Class HMDObserverClass;
@property (readonly, nonatomic) void *HMDObserverPtr;
@property (readonly, nonatomic) unsigned long long HMDObserverSize;
@property (readonly, copy, nonatomic) NSString *HMDKeyPath;
@property (readonly, nonatomic) unsigned long long HMDOption;
@property (readonly, nonatomic) void *HMDContext;
@property (readonly, nonatomic, getter=isActived) BOOL actived;
@property (readonly, nonatomic, getter=isCrashed) BOOL crashed;

- (id)initWithObserver:(id)arg0 keypath:(id)arg1 options:(unsigned long long)arg2 context:(void *)arg3;
- (void)activeWithObservee:(id)arg0;
- (void)deactiveWithObservee:(id)arg0;
- (id)HMDObserver;
- (Class)HMDObserverClass;
- (void *)HMDObserverPtr;
- (unsigned long long)HMDObserverSize;
- (id)HMDKeyPath;
- (unsigned long long)HMDOption;
- (void *)HMDContext;
- (BOOL)isActived;
- (BOOL)isCrashed;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;

@end
