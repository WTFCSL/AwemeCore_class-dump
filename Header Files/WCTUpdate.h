//
//     Generated by private class-dump
//

@interface WCTUpdate : WCTChainCall {
    struct StatementUpdate { void /* function */ **_vptr$Statement; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } m_description; BOOL m_set; } _statement;
    struct WCTPropertyList { struct __list_node_base<const WCTProperty, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<const WCTProperty, void *>>> { unsigned long long __value_; } __size_alloc_; } _propertyList;
    int _changes;
}

- (id)where:(const void *)arg0;
- (id)orderBy:(const void *)arg0;
- (id)limit:(const void *)arg0;
- (id)initWithCore:(const void *)arg0 andProperties:(const void *)arg1 andTableName:(id)arg2;
- (BOOL)executeWithObject:(id)arg0;
- (BOOL)executeWithRow:(id)arg0;
- (int)changes;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)offset:(const void *)arg0;

@end
