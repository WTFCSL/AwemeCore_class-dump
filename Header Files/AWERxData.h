//
//     Generated by private class-dump
//

@class AWERxDisposable, __end_cap_, __end_;

@interface AWERxData : NSObject {
    struct vector<AWERxDisposable *, std::allocator<AWERxDisposable *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<AWERxDisposable *__strong *, std::allocator<AWERxDisposable *>> { id *__value_; } x1; } m_disposables;
    struct unordered_map<NSString *, AWERxDisposable *, OCStrHash, OCStrEqual, std::allocator<std::pair<NSString *const, AWERxDisposable *>>> { struct __hash_table<std::__hash_value_type<NSString *, AWERxDisposable *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, AWERxDisposable *>, OCStrHash, OCStrEqual>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, AWERxDisposable *>, OCStrEqual, OCStrHash>, std::allocator<std::__hash_value_type<NSString *, AWERxDisposable *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, AWERxDisposable *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, AWERxDisposable *>, OCStrHash, OCStrEqual>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, AWERxDisposable *>, OCStrEqual, OCStrHash>> { float __value_; } __p3_; } __table_; } m_disposables_map;
    AWERxDisposable *_steamDisposable;
}

@property (retain, nonatomic) AWERxDisposable *steamDisposable;

- (id)steamDisposable;
- (void)setSteamDisposable:(id)arg0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
