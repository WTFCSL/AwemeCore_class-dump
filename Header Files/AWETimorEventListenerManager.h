//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWETimorEventListenerManager : NSObject {
    NSMutableArray *_eventListeners;
}

@property (retain, nonatomic) NSMutableArray *eventListeners;

+ (id)shareInstance;

- (void)addTimorEventListener:(id)arg0 subscribeEvent:(id)arg1;
- (void)removeTimorEventListener:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)eventListeners;
- (void)setEventListeners:(id)arg0;

@end
