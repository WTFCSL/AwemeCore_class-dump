//
//     Generated by private class-dump
//

@class __end_, __end_cap_, __begin_;

@interface IESECShopProductsObjectPool : NSObject {
    struct deque<id, std::allocator<id>> { struct __split_buffer<__strong id *, std::allocator<__strong id *>> { __begin_ ***__first_; __end_ ***x0; __end_cap_ ***x1; struct __compressed_pair<__strong id **, std::allocator<__strong id *>> { id **__value_; } x2; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<id>> { unsigned long long __value_; } __size_; } _deque;
    unsigned long long _reference_count;
    id /* block */ _objectGenerator;
    unsigned long long _maxSize;
}

@property (nonatomic) unsigned long long maxSize;

- (id)initWithMaxSize:(unsigned long long)arg0 generator:(id /* block */)arg1;
- (unsigned long long)maxSize;
- (void)setMaxSize:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)acquire;
- (id).cxx_construct;
- (id)initWithGenerator:(id /* block */)arg0;
- (void)release:(id)arg0;

@end