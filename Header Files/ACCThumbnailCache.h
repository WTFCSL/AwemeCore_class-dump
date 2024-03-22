//
//     Generated by private class-dump
//

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface ACCThumbnailCache : NSObject {
    BOOL _strongGeneratedImage;
    double _tolerance;
    NSMutableArray *_generatorDurationArray;
    NSCache *_memoryCache;
    NSOperationQueue *_queue;
    NSMutableDictionary *_requestPool;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_generators;
}

@property (retain, nonatomic) NSCache *memoryCache;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSMutableDictionary *requestPool;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *generators;
@property (retain, nonatomic) NSMutableArray *generatorDurationArray;
@property (nonatomic) BOOL strongGeneratedImage;
@property (nonatomic) double tolerance;

- (void)setGenerators:(id)arg0;
- (id)getThumbnailForAsset:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 preferedSize:(struct CGSize { double x0; double x1; })arg2 rotation:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)generatorDurationArray;
- (id)requestPool;
- (id)keyForAsset:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 preferedSize:(struct CGSize { double x0; double x1; })arg2;
- (long long)imageOrientationFromRotateType:(unsigned long long)arg0;
- (id)cachedImageForKey:(id)arg0 orientation:(long long)arg1;
- (void)setGeneratorDurationArray:(id)arg0;
- (void)setRequestPool:(id)arg0;
- (BOOL)strongGeneratedImage;
- (id)initWithCacheCount:(unsigned long long)arg0 strongGeneratedImage:(BOOL)arg1;
- (void)setStrongGeneratedImage:(BOOL)arg0;
- (void)setTolerance:(double)arg0;
- (id)init;
- (double)tolerance;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)setDispatchQueue:(id)arg0;
- (id)dispatchQueue;
- (id)memoryCache;
- (id)queue;
- (void)dealloc;
- (void)setQueue:(id)arg0;
- (id)generators;
- (void)setMemoryCache:(id)arg0;

@end
