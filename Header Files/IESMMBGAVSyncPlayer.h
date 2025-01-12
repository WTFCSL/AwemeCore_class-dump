//
//     Generated by private class-dump
//

@interface IESMMBGAVSyncPlayer : IESMMBGAVPlayer {
    struct list<std::pair<CMTime, __CVBuffer *>, std::allocator<std::pair<CMTime, __CVBuffer *>>> { struct __list_node_base<std::pair<CMTime, __CVBuffer *>, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::pair<CMTime, __CVBuffer *>, void *>>> { unsigned long long __value_; } __size_alloc_; } videoFrameCache;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isPlayerSeeking;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isStoped;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isPlayed;
}

- (struct __CVBuffer { } *)copyPixelBuffer;
- (void)decodeNextPixelBuffer;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 completeBlock:(id /* block */)arg1;
- (void)clearVideoFrameCache;
- (struct __CVBuffer { } *)copyPixelBufferInterval:(double)arg0;
- (struct __CVBuffer { } *)copyPixelBuffer:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)forcePause:(BOOL)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)play;
- (void)pause;
- (id).cxx_construct;

@end
