//
//     Generated by private class-dump
//

@interface WCTDelete : WCTChainCall {
    struct StatementDelete { void /* function */ **_vptr$Statement; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } m_description; } _statement;
    int _changes;
}

- (id)initWithCore:(const void *)arg0 andTableName:(id)arg1;
- (id)where:(const void *)arg0;
- (id)orderBy:(const void *)arg0;
- (id)limit:(const void *)arg0;
- (int)changes;
- (BOOL)execute;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)offset:(const void *)arg0;

@end
