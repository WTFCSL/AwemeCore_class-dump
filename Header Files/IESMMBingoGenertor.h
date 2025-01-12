//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESMMBingoGenertor : NSObject {
    NSObject<OS_dispatch_semaphore> *sem;
    float _allCount;
    float _genratorCount;
    NSMutableArray *_generators;
    id /* block */ _imageBlock;
    id /* block */ _completion;
    NSString *_videoKey;
    struct CGSize { double width; double height; } _generatorSize;
}

@property (retain, nonatomic) NSMutableArray *generators;
@property (copy, nonatomic) id /* block */ imageBlock;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *videoKey;
@property (nonatomic) struct CGSize { double width; double height; } generatorSize;
@property (nonatomic) float allCount;
@property (nonatomic) float genratorCount;

+ (id)buildSplitDuetCompositionFor:(id)arg0;

- (void)setImageBlock:(id /* block */)arg0;
- (id /* block */)imageBlock;
- (float)allCount;
- (void)setAllCount:(float)arg0;
- (void)setGenerators:(id)arg0;
- (void)setGeneratorSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setVideoKey:(id)arg0;
- (void)_generateFile:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 interval:(double)arg2 key:(id)arg3;
- (void)setGenratorCount:(float)arg0;
- (void)generatorWithAsset:(id)arg0 times:(id)arg1 fps:(double)arg2 key:(id)arg3;
- (void)addGen:(id)arg0;
- (struct CGSize { double x0; double x1; })generatorSize;
- (id)videoKey;
- (void)removeGen:(id)arg0;
- (float)genratorCount;
- (void)generateFile:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 interval:(double)arg2 key:(id)arg3 image:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)cacleGenerator;
- (id)init;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)dealloc;
- (id)generators;

@end
