//
//     Generated by private class-dump
//

@interface __AWEStorageFileInternalMap : NSObject {
    struct unordered_map<std::string, NSObject<OS_dispatch_queue> *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, NSObject<OS_dispatch_queue> *>>> { struct __hash_table<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, NSObject<OS_dispatch_queue> *>, std::equal_to<std::string>, std::hash<std::string>, true>> { float __value_; } __p3_; } __table_; } queueMap;
    struct unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __hash_table<std::__hash_value_type<std::string, int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>, true>> { float __value_; } __p3_; } __table_; } countMap;
}

+ (id)shareMap;

- (void *)getQueueMap;
- (void *)getCountMap;
- (void).cxx_destruct;
- (id).cxx_construct;

@end