//
//     Generated by private class-dump
//

@protocol ACCMVTemplateModelProtocol;

@protocol ACCCutSameWorksManagerProtocol <NSObject>

@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> currrentTemplate;
@property (copy, nonatomic) id /* block */ downloadCompletion;

- (void)clearDavinciEffectCache;
- (void)importMaterial:(id)arg0 progressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)importWorksAssetModel:(id)arg0 progressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)reprocessTemplate;
- (void)cancelCurrentTask;
- (void)clearTemplateZip;
- (id)defaultConfigForLVExport;
- (id)lastImportedAssets;
- (id)currrentTemplate;
- (void)setCurrrentTemplate:(id)arg0;
- (void)clearCache;
- (id /* block */)downloadCompletion;
- (void)setDownloadCompletion:(id /* block */)arg0;

@end
