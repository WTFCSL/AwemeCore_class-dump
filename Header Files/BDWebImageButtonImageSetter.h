//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface BDWebImageButtonImageSetter : NSObject {
    NSMutableDictionary *_requestDictionary;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)imageRequestForState:(unsigned long long)arg0;
- (void)setImageRequest:(id)arg0 state:(unsigned long long)arg1;
- (id)backgroundRequestForState:(unsigned long long)arg0;
- (void)setBackgroundRequest:(id)arg0 state:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)requestDictionary;

@end
