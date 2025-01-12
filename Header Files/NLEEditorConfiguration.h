//
//     Generated by private class-dump
//

@class VEEditorSessionConfig, IESMMImageMovieInfo;

@interface NLEEditorConfiguration : NSObject {
    BOOL _crossplatInput;
    BOOL _crossplatCompile;
    BOOL _notSupportCrossplat;
    BOOL _crossplatMultiTrack;
    BOOL _isRecordFromCamera;
    BOOL _enableStikerSynchronization;
    BOOL _isCutSame;
    BOOL _isDuet;
    BOOL _enableAdpatOldFields;
    BOOL _enableCompileOnMainthread;
    BOOL _enableStickerCommitOpt;
    BOOL _enableCoexistGlobalEffect;
    BOOL _enableRemoveCompileFileOpt;
    BOOL _enableResetCompileSetting;
    BOOL _enableUUIDAsStickerId;
    BOOL _enableCompileLock;
    BOOL _enableSyncModelInAudio;
    BOOL _enableGlobalEffectInMultitrack;
    BOOL _enableHotUpdate;
    BOOL _enableIsolateEditAndPublishEditorReleaseUnusedMemory;
    BOOL _enableResourceAsyncRender;
    BOOL _resourceFinderUseUUID;
    BOOL _enableGetStateLock;
    BOOL _enableImageTemplateConfig;
    BOOL _usingDefaultFpsToMinus1;
    BOOL _enableRenderWithStageModel;
    BOOL _enableMeasureOptimiztion;
    BOOL _enableOptSmallImagePreview;
    BOOL _enablePreviewWhenStartCompile;
    IESMMImageMovieInfo *_imageMovieInfo;
    VEEditorSessionConfig *_veConfig;
    unsigned long long _stickerNormalizMode;
    double _minFps;
    double _maxFps;
}

@property (nonatomic) BOOL crossplatInput;
@property (nonatomic) BOOL crossplatCompile;
@property (nonatomic) BOOL notSupportCrossplat;
@property (nonatomic) BOOL crossplatMultiTrack;
@property (nonatomic) BOOL isRecordFromCamera;
@property (nonatomic) BOOL enableStikerSynchronization;
@property (retain, nonatomic) IESMMImageMovieInfo *imageMovieInfo;
@property (retain, nonatomic) VEEditorSessionConfig *veConfig;
@property (nonatomic) BOOL isCutSame;
@property (nonatomic) BOOL isDuet;
@property (nonatomic) BOOL enableAdpatOldFields;
@property (nonatomic) unsigned long long stickerNormalizMode;
@property (nonatomic) BOOL enableCompileOnMainthread;
@property (nonatomic) BOOL enableStickerCommitOpt;
@property (nonatomic) BOOL enableCoexistGlobalEffect;
@property (nonatomic) BOOL enableRemoveCompileFileOpt;
@property (nonatomic) BOOL enableResetCompileSetting;
@property (nonatomic) BOOL enableUUIDAsStickerId;
@property (nonatomic) BOOL enableCompileLock;
@property (nonatomic) BOOL enableSyncModelInAudio;
@property (nonatomic) BOOL enableGlobalEffectInMultitrack;
@property (nonatomic) BOOL enableHotUpdate;
@property (nonatomic) BOOL enableIsolateEditAndPublishEditorReleaseUnusedMemory;
@property (nonatomic) BOOL enableResourceAsyncRender;
@property (nonatomic) BOOL resourceFinderUseUUID;
@property (nonatomic) BOOL enableGetStateLock;
@property (nonatomic) BOOL enableImageTemplateConfig;
@property (nonatomic) BOOL usingDefaultFpsToMinus1;
@property (nonatomic) double minFps;
@property (nonatomic) double maxFps;
@property (nonatomic) BOOL enableRenderWithStageModel;
@property (nonatomic) BOOL enableMeasureOptimiztion;
@property (nonatomic) BOOL enableOptSmallImagePreview;
@property (nonatomic) BOOL enablePreviewWhenStartCompile;

- (BOOL)enableStickerCommitOpt;
- (void)setEnableStickerCommitOpt:(BOOL)arg0;
- (id)veConfig;
- (BOOL)enableCompileOnMainthread;
- (BOOL)enableRemoveCompileFileOpt;
- (BOOL)enableCoexistGlobalEffect;
- (BOOL)enableResetCompileSetting;
- (BOOL)enableCompileLock;
- (BOOL)isRecordFromCamera;
- (void)setIsRecordFromCamera:(BOOL)arg0;
- (id)imageMovieInfo;
- (void)setImageMovieInfo:(id)arg0;
- (BOOL)enableGlobalEffectInMultitrack;
- (void)setEnableCoexistGlobalEffect:(BOOL)arg0;
- (BOOL)enableImageTemplateConfig;
- (BOOL)isCutSame;
- (BOOL)isDuet;
- (BOOL)enableStikerSynchronization;
- (BOOL)enableOptSmallImagePreview;
- (BOOL)enableHotUpdate;
- (BOOL)enableSyncModelInAudio;
- (BOOL)enableResourceAsyncRender;
- (BOOL)enableGetStateLock;
- (BOOL)usingDefaultFpsToMinus1;
- (double)minFps;
- (double)maxFps;
- (BOOL)enablePreviewWhenStartCompile;
- (BOOL)enableIsolateEditAndPublishEditorReleaseUnusedMemory;
- (BOOL)enableUUIDAsStickerId;
- (BOOL)notSupportCrossplat;
- (void)setNotSupportCrossplat:(BOOL)arg0;
- (BOOL)crossplatCompile;
- (void)setCrossplatCompile:(BOOL)arg0;
- (BOOL)crossplatInput;
- (void)setCrossplatInput:(BOOL)arg0;
- (BOOL)crossplatMultiTrack;
- (void)setCrossplatMultiTrack:(BOOL)arg0;
- (BOOL)enableAdpatOldFields;
- (void)setVeConfig:(id)arg0;
- (void)setEnableStikerSynchronization:(BOOL)arg0;
- (void)setIsCutSame:(BOOL)arg0;
- (void)setIsDuet:(BOOL)arg0;
- (void)setEnableAdpatOldFields:(BOOL)arg0;
- (unsigned long long)stickerNormalizMode;
- (void)setStickerNormalizMode:(unsigned long long)arg0;
- (void)setEnableCompileOnMainthread:(BOOL)arg0;
- (void)setEnableRemoveCompileFileOpt:(BOOL)arg0;
- (void)setEnableResetCompileSetting:(BOOL)arg0;
- (void)setEnableUUIDAsStickerId:(BOOL)arg0;
- (void)setEnableCompileLock:(BOOL)arg0;
- (void)setEnableSyncModelInAudio:(BOOL)arg0;
- (void)setEnableGlobalEffectInMultitrack:(BOOL)arg0;
- (void)setEnableHotUpdate:(BOOL)arg0;
- (void)setEnableIsolateEditAndPublishEditorReleaseUnusedMemory:(BOOL)arg0;
- (void)setEnableResourceAsyncRender:(BOOL)arg0;
- (BOOL)resourceFinderUseUUID;
- (void)setResourceFinderUseUUID:(BOOL)arg0;
- (void)setEnableGetStateLock:(BOOL)arg0;
- (void)setEnableImageTemplateConfig:(BOOL)arg0;
- (void)setUsingDefaultFpsToMinus1:(BOOL)arg0;
- (void)setMinFps:(double)arg0;
- (void)setMaxFps:(double)arg0;
- (BOOL)enableRenderWithStageModel;
- (void)setEnableRenderWithStageModel:(BOOL)arg0;
- (BOOL)enableMeasureOptimiztion;
- (void)setEnableMeasureOptimiztion:(BOOL)arg0;
- (void)setEnableOptSmallImagePreview:(BOOL)arg0;
- (void)setEnablePreviewWhenStartCompile:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end
