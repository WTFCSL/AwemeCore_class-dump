//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEFeedTabJumpConditionTriggerManager : NSObject {
    NSMutableDictionary *_bindingDict;
}

@property (retain, nonatomic) NSMutableDictionary *bindingDict;

- (id)bindingDict;
- (void)setBindingDict:(id)arg0;
- (void)addTriggerByEventType:(long long)arg0;
- (void)startObserveWithHandler:(id /* block */)arg0;
- (void)triggerByEventType:(long long)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end