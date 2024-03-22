//
//     Generated by private class-dump
//

@interface IESECColorManager : NSObject {
    unsigned long long _currentTheme;
    struct shared_ptr<iesec::color_manager_impl> { struct color_manager_impl *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
    struct unordered_map<std::string, std::pair<UIColor *, UIColor *>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::pair<UIColor *, UIColor *>>>> { struct __hash_table<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, std::equal_to<std::string>, std::hash<std::string>>> { float __value_; } __p3_; } __table_; } _color_scheme_map;
    unsigned long long _preferredColorTheme;
}

@property (readonly, nonatomic) unsigned long long effectiveColorTheme;
@property (nonatomic) unsigned long long preferredColorTheme;

+ (id)p_buildColorStatePropertyWithTarget:(id)arg0 propertyName:(id)arg1 useState:(BOOL)arg2 state:(unsigned long long)arg3;
+ (void)iesec_colorForTarget:(id)arg0 propertyName:(id)arg1 color:(id)arg2;
+ (void)iesec_colorForTarget:(id)arg0 propertyName:(id)arg1 color:(id)arg2 state:(unsigned long long)arg3;
+ (void)iesec_colorForTarget:(id)arg0 propertyName:(id)arg1 colorName:(id)arg2;
+ (void)iesec_colorForTarget:(id)arg0 propertyName:(id)arg1 colorName:(id)arg2 state:(unsigned long long)arg3;
+ (void)initialize;
+ (id)sharedManager;

- (id)colorForKey:(id)arg0;
- (unsigned long long)effectiveColorTheme;
- (void)setPreferredColorTheme:(unsigned long long)arg0;
- (unsigned long long)preferredColorTheme;
- (void).cxx_destruct;
- (id).cxx_construct;

@end