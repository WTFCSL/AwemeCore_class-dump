//
//     Generated by private class-dump
//

@interface WCTSelect : WCTSelectBase {
    struct WCTResultList { struct __list_node_base<const WCTResult, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<const WCTResult, void *>>> { unsigned long long __value_; } __size_alloc_; BOOL m_distinct; } _resultList;
    Class _cls;
}

- (id)initWithCore:(const void *)arg0 andResults:(const void *)arg1 fromTable:(id)arg2;
- (void).cxx_destruct;
- (id)nextObject;
- (id)allObjects;
- (id).cxx_construct;

@end
