//
//     Generated by private class-dump
//

@class NSString;

@interface BmfVqscoreLiveOC : NSObject <IBmfVqscoreLiveOC> {
    void *_impl_;
}

@property void *impl_;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)processTexture:(id)arg0;
- (id)init:(id)arg0 :(int)arg1 :(int)arg2;
- (void *)impl_;
- (void)setImpl_:(void *)arg0;
- (float)getVqscoreResult;
- (int)process:(struct __CVBuffer { } *)arg0;
- (void)dealloc;

@end