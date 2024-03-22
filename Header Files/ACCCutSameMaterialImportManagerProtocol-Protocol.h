//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCCutSameVideoCompressorProtocol;

@protocol ACCCutSameMaterialImportManagerProtocol <NSObject>

@property (retain, nonatomic) id<ACCCutSameVideoCompressorProtocol> compressor;
@property (retain, nonatomic) Class config;
@property (copy, nonatomic) NSString *fillMode;
@property (nonatomic) struct CGSize { double x0; double x1; } outputSize;

- (void)importMaterials:(id)arg0 progressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)importMaterials:(id)arg0 handleCartoonType:(unsigned long long)arg1 handleGameplayAlgorithm:(id)arg2 currentTemplate:(id)arg3 progressHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)reproduceImage:(id)arg0 toPath:(id)arg1;
- (void)saveResource:(id)arg0 outputPath:(id)arg1 toSandboxWithCompletionHandler:(id /* block */)arg2;
- (id)curMaterials;
- (void)setCompressor:(id)arg0;
- (void)setFillMode:(id)arg0;
- (id)fillMode;
- (void)setConfig:(Class)arg0;
- (Class)config;
- (struct CGSize { double x0; double x1; })outputSize;
- (void)clearCache;
- (void)cancelAll;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (id)compressor;

@end
