//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface ACCFrameFetchAndCompressTask : NSObject {
    id /* block */ _resultBlock;
    NSArray *_models;
    NSString *_taskDir;
}

@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) NSString *taskDir;
@property (copy, nonatomic) id /* block */ resultBlock;

+ (id)initialFrameTimesArrayWithDifinedCount:(unsigned long long)arg0;

- (void)didFailedWithError:(id)arg0;
- (void)startWithOriginalMaterialModels:(id)arg0 taskDir:(id)arg1;
- (id)taskDir;
- (void)setTaskDir:(id)arg0;
- (void)extractFrameAndCompressForSingleImage:(id)arg0 completion:(id /* block */)arg1;
- (void)extractFrameAndCompressForSingleVideo:(id)arg0 completion:(id /* block */)arg1;
- (void)extractFrameAndCompressForMultiImages:(id)arg0 completion:(id /* block */)arg1;
- (void)extractFrameAndCompressForMixMaterials:(id)arg0 completion:(id /* block */)arg1;
- (id)createCompressedImagePath;
- (void).cxx_destruct;
- (void)setResultBlock:(id /* block */)arg0;
- (id)models;
- (void)setModels:(id)arg0;
- (id /* block */)resultBlock;

@end
