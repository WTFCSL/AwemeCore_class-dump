//
//     Generated by private class-dump
//

@protocol APBEventProtocol;

@interface APBEventListener : NSObject {
    struct set<APBEventType, std::__1::less<APBEventType>, std::__1::allocator<APBEventType> > { struct __tree<APBEventType, std::__1::less<APBEventType>, std::__1::allocator<APBEventType> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<APBEventType, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::less<APBEventType> > { unsigned long long __value_; } __pair3_; } __tree_; } _registeredEvents;
    struct map<std::__1::basic_string<char>, long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, long> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, long>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, long>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, long>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _eventTriggered;
    id<APBEventProtocol> _delegate;
}

@property (weak, nonatomic) id<APBEventProtocol> delegate;

- (void)onAppResignActive:(id)arg0;
- (void)onAppResumeActive:(id)arg0;
- (void)onAppEnterForeground:(id)arg0;
- (void)onAlertAppear:(id)arg0;
- (void)onAlertDisappear:(id)arg0;
- (void)onGlobalTimeout:(id)arg0;
- (void)onTaskTimeout:(id)arg0;
- (void)onAbnormalClose:(id)arg0;
- (void)removeTriggerCnt:(long long)arg0;
- (id)_eventType:(long long)arg0 withNoti:(id)arg1;
- (void)increaseTriggerCnt:(long long)arg0;
- (void)registerAllEvents;
- (void)unregisterAllEvents;
- (long long)eventTriggeredTimes:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)unregisterEvent:(long long)arg0;
- (void)dealloc;
- (void)registerEvent:(long long)arg0;
- (id).cxx_construct;

@end
