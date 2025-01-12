//
//     Generated by private class-dump
//

@class GamePlayManager, NSArray, AWEDealWithServerPhotoManager, NSOperationQueue, NSString, NSObject;
@protocol OS_dispatch_queue, ACCCutSameVideoCompressorProtocol;

@interface AWECutSameMaterialImportManager : NSObject <ACCCutSameMaterialImportManagerProtocol> {
    id<ACCCutSameVideoCompressorProtocol> _compressor;
    Class _config;
    NSString *_fillMode;
    NSArray *_curMaterials;
    GamePlayManager *_gpManager;
    id /* block */ _curProgressHandler;
    NSOperationQueue *_reverseQueue;
    AWEDealWithServerPhotoManager *_manager;
    NSObject<OS_dispatch_queue> *_importHandlerQueue;
    struct CGSize { double width; double height; } _outputSize;
}

@property (copy, nonatomic) NSArray *curMaterials;
@property (retain, nonatomic) GamePlayManager *gpManager;
@property (copy, nonatomic) id /* block */ curProgressHandler;
@property (retain, nonatomic) NSOperationQueue *reverseQueue;
@property (retain, nonatomic) AWEDealWithServerPhotoManager *manager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *importHandlerQueue;
@property (retain, nonatomic) id<ACCCutSameVideoCompressorProtocol> compressor;
@property (retain, nonatomic) Class config;
@property (copy, nonatomic) NSString *fillMode;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)reverseQueue;
- (void)setReverseQueue:(id)arg0;
- (void)importMaterials:(id)arg0 progressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)importMaterials:(id)arg0 handleCartoonType:(unsigned long long)arg1 handleGameplayAlgorithm:(id)arg2 currentTemplate:(id)arg3 progressHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)reproduceImage:(id)arg0 toPath:(id)arg1;
- (void)saveResource:(id)arg0 outputPath:(id)arg1 toSandboxWithCompletionHandler:(id /* block */)arg2;
- (id)curMaterials;
- (void)setCompressor:(id)arg0;
- (void)setCurMaterials:(id)arg0;
- (void)setCurProgressHandler:(id /* block */)arg0;
- (id)createMaterialModelFromAssets:(id)arg0 withCartoonType:(unsigned long long)arg1 gameplayAlgorithm:(id)arg2;
- (void)setGpManager:(id)arg0;
- (id)gpManager;
- (void)checkProgress;
- (void)compressAssetModel:(id)arg0 progressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)importHandlerQueue;
- (int)loadImageFromICloudWithPHAsset:(id)arg0 imageSize:(struct CGSize { double x0; double x1; })arg1 progressHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)requestAVAssetFromiCloudWithModel:(id)arg0 progressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)targetSizeBlock:(id /* block */)arg0;
- (id)moveFileToCachePath:(id)arg0;
- (id /* block */)curProgressHandler;
- (id)p_changeCartoonTypeToGameplayAlgorithm:(unsigned long long)arg0;
- (id)selectPicToProcessFromAssets:(id)arg0 withCartoonType:(unsigned long long)arg1 withGameplayAlgorithm:(id)arg2;
- (id)selectPicToProcessFromAssets:(id)arg0 withFragment:(id)arg1;
- (unsigned long long)convertGPMediaTypeFromAWEAssetType:(unsigned long long)arg0;
- (void)setImportHandlerQueue:(id)arg0;
- (void)setFillMode:(id)arg0;
- (id)init;
- (id)fillMode;
- (BOOL)isCompleted;
- (void)setConfig:(Class)arg0;
- (void).cxx_destruct;
- (Class)config;
- (struct CGSize { double x0; double x1; })outputSize;
- (void)clearCache;
- (void)setManager:(id)arg0;
- (id)manager;
- (void)cancelAll;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (id)compressor;

@end
