//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol IBmfSuperResolution, OS_dispatch_queue, IBmfDevice;

@interface MetalFilterBmfSR : MetalFilterDefault <MetalFilterSource> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } isIniting;
    struct BmfSrExtraInfo { struct BmfRect { int x0; int x1; int x2; int x3; } x0; struct BmfSrColor { int x0; int x1; int x2; } x1; int x2; int x3; int x4; BOOL x5; } *_extraInfo;
    BOOL _enable15SR;
    BOOL _enablesync;
    BOOL _enableRoiSR;
    BOOL _shouldUpdateSr;
    BOOL _isAlreadySetDevice;
    BOOL _isBMFInitFinish;
    BOOL _useBMFSRNewInterface;
    BOOL _enableSRAfterHDR;
    BOOL _enableIndivaldulCmdBuf;
    int _algoType;
    float _roiSRXInRate;
    float _roiSRYInRate;
    float _roiSRWInRate;
    float _roiSRHInRate;
    float _roiSRYColor;
    float _roiSRUColor;
    float _roiSRVColor;
    int _srAlgoType;
    int _srMode;
    int _srExtraMode;
    int _updateSrAlgoType;
    int _lifeId;
    int _sharpLevel;
    id<IBmfSuperResolution> _vrsrLut;
    id<IBmfDevice> _bmfDevice;
    long long _sumFrameCount;
    double _sumCostTime;
    double _averageCostTime;
    long long _sumSuccessFrameCount;
    double _srSuccessRate;
    NSObject<OS_dispatch_queue> *_bmfInitprocessorQueue;
    NSString *_licenseName;
    NSString *_cacheDir;
}

@property (nonatomic) BOOL enable15SR;
@property (nonatomic) BOOL enablesync;
@property (nonatomic) int algoType;
@property (nonatomic) BOOL enableRoiSR;
@property (nonatomic) float roiSRXInRate;
@property (nonatomic) float roiSRYInRate;
@property (nonatomic) float roiSRWInRate;
@property (nonatomic) float roiSRHInRate;
@property (nonatomic) float roiSRYColor;
@property (nonatomic) float roiSRUColor;
@property (nonatomic) float roiSRVColor;
@property int srAlgoType;
@property int srMode;
@property (nonatomic) int srExtraMode;
@property BOOL shouldUpdateSr;
@property (nonatomic) int updateSrAlgoType;
@property (retain, nonatomic) id<IBmfSuperResolution> vrsrLut;
@property (retain, nonatomic) id<IBmfDevice> bmfDevice;
@property int lifeId;
@property (nonatomic) BOOL isAlreadySetDevice;
@property BOOL isBMFInitFinish;
@property (nonatomic) long long sumFrameCount;
@property (nonatomic) double sumCostTime;
@property (nonatomic) double averageCostTime;
@property (nonatomic) long long sumSuccessFrameCount;
@property (nonatomic) double srSuccessRate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bmfInitprocessorQueue;
@property (copy, nonatomic) NSString *licenseName;
@property (nonatomic) BOOL useBMFSRNewInterface;
@property (retain, nonatomic) NSString *cacheDir;
@property (nonatomic) int sharpLevel;
@property (nonatomic) BOOL enableSRAfterHDR;
@property (nonatomic) BOOL enableIndivaldulCmdBuf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCommonParams:(id)arg0;
- (void)setCacheDir:(id)arg0;
- (id)cacheDir;
- (int)srExtraMode;
- (void)setSrExtraMode:(int)arg0;
- (int)algoType;
- (void)setAlgoType:(int)arg0;
- (id)bmfInitprocessorQueue;
- (void)setBmfInitprocessorQueue:(id)arg0;
- (void)checkDownloadAndInitBmf;
- (id)getEffectPatameterStr;
- (int)lifeId;
- (void)setShouldUpdateSr:(BOOL)arg0;
- (void)setUseBMFSRNewInterface:(BOOL)arg0;
- (void)setEnableSRAfterHDR:(BOOL)arg0;
- (void)setEnableIndivaldulCmdBuf:(BOOL)arg0;
- (void)setupBMF:(id)arg0;
- (void)setEnable15SR:(BOOL)arg0;
- (void)setEnablesync:(BOOL)arg0;
- (void)setLicenseName:(id)arg0;
- (BOOL)useBMFSRNewInterface;
- (void)setIsAlreadySetDevice:(BOOL)arg0;
- (BOOL)enable15SR;
- (void)setSrMode:(int)arg0;
- (void)setupBMFByTypeAndScale:(int)arg0;
- (void)setRoiSRXInRate:(float)arg0;
- (void)setRoiSRYInRate:(float)arg0;
- (void)setRoiSRWInRate:(float)arg0;
- (void)setRoiSRHInRate:(float)arg0;
- (void)setRoiSRYColor:(float)arg0;
- (void)setRoiSRUColor:(float)arg0;
- (void)setRoiSRVColor:(float)arg0;
- (void)setSharpLevel:(int)arg0;
- (void)setSrAlgoType:(int)arg0;
- (void)setIsBMFInitFinish:(BOOL)arg0;
- (int)srAlgoType;
- (void)initBmf;
- (void)setVrsrLut:(id)arg0;
- (id)vrsrLut;
- (int)srMode;
- (BOOL)enablesync;
- (id)bmfDevice;
- (void)setBmfDevice:(id)arg0;
- (BOOL)isBMFInitFinish;
- (int)sharpLevel;
- (void *)processWithRoi:(struct __CVBuffer { } *)arg0;
- (BOOL)shouldUpdateSr;
- (int)updateSrAlgoType;
- (void)setLifeId:(int)arg0;
- (BOOL)enableSRAfterHDR;
- (BOOL)enableIndivaldulCmdBuf;
- (BOOL)isAlreadySetDevice;
- (BOOL)enableRoiSR;
- (float)roiSRXInRate;
- (float)roiSRYInRate;
- (float)roiSRWInRate;
- (float)roiSRHInRate;
- (float)roiSRYColor;
- (float)roiSRUColor;
- (float)roiSRVColor;
- (void)setUpdateSrAlgoType:(int)arg0;
- (void)setEnableRoiSR:(BOOL)arg0;
- (void)updateROIInfo:(id)arg0;
- (void)updateSRType:(id)arg0;
- (id)licenseName;
- (long long)sumFrameCount;
- (void)setSumFrameCount:(long long)arg0;
- (double)sumCostTime;
- (void)setSumCostTime:(double)arg0;
- (long long)sumSuccessFrameCount;
- (void)setSumSuccessFrameCount:(long long)arg0;
- (void)setAverageCostTime:(double)arg0;
- (void)setSrSuccessRate:(double)arg0;
- (double)averageCostTime;
- (double)srSuccessRate;
- (BOOL)returnBmfResult:(void *)arg0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)arg0;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;
- (void *)processPixelBuffer:(struct __CVBuffer { } *)arg0;
- (void)dealloc;
- (id)initWithDictionary:(id)arg0 index:(int)arg1;

@end
