//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface RTVDeallocHelper : NSObject {
    struct Mutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
    NSMutableArray *_deallocBlocks;
}

@property (retain, nonatomic) NSMutableArray *deallocBlocks;

- (void)addDeallocBlock:(id /* block */)arg0;
- (id)deallocBlocks;
- (void)setDeallocBlocks:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)willDealloc;
- (id).cxx_construct;

@end
