//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESLiveUIInfo : NSObject {
    long long _applicationState;
    NSMutableDictionary *_observerDict;
}

@property (retain, nonatomic) NSMutableDictionary *observerDict;
@property long long applicationState;

+ (id)sharedUIInfo;

- (id)observerDict;
- (void)setObserverDict:(id)arg0;
- (void)onAppLifeCyleChange;
- (id)init;
- (void).cxx_destruct;
- (void)setApplicationState:(long long)arg0;
- (void)dealloc;
- (long long)applicationState;
- (void)removeObservers;

@end
