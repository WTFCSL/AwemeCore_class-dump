//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BmfSuperResolution : NSObject <IBmfSuperResolution> {
    float scaleRatio;
    unsigned long long buffer_size;
    BOOL only_texture;
    BOOL _sr_impl_init_finish_;
    BOOL _sync_;
    BOOL _use_individual_cmd_buf_;
    BOOL _use_multi_sharp_;
    int _algo_type_;
    int _scale_mode_;
    int _process_mode_;
    int _max_width_;
    int _max_height_;
    int _level_count_;
    int _sharp_level_;
    NSObject<OS_dispatch_queue> *_sr_impl_init_queue_;
    NSString *_lib_path_;
    NSString *_license_module_name_;
    int *_level_;
    NSString *_weight_path_;
    struct shared_ptr<BmfImageDataPool<BmfTextureData>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _texDataPool;
    struct shared_ptr<std::mutex> { struct mutex *__ptr_; struct __shared_weak_count *__cntrl_; } _mtx;
    struct shared_ptr<SR_IMPL_BASE> { struct SR_IMPL_BASE *__ptr_; struct __shared_weak_count *__cntrl_; } _sr_impl_;
}

@property (nonatomic) struct shared_ptr<BmfImageDataPool<BmfTextureData>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } texDataPool;
@property (nonatomic) struct shared_ptr<std::mutex> { struct mutex *__ptr_; struct __shared_weak_count *__cntrl_; } mtx;
@property BOOL sr_impl_init_finish_;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sr_impl_init_queue_;
@property struct shared_ptr<SR_IMPL_BASE> { struct SR_IMPL_BASE *__ptr_; struct __shared_weak_count *__cntrl_; } sr_impl_;
@property (nonatomic) int algo_type_;
@property (nonatomic) int scale_mode_;
@property (nonatomic) int process_mode_;
@property (copy, nonatomic) NSString *lib_path_;
@property (nonatomic) int max_width_;
@property (nonatomic) int max_height_;
@property (copy, nonatomic) NSString *license_module_name_;
@property (nonatomic) BOOL sync_;
@property int *level_;
@property int level_count_;
@property (nonatomic) int sharp_level_;
@property (copy, nonatomic) NSString *weight_path_;
@property (nonatomic) BOOL use_individual_cmd_buf_;
@property (nonatomic) BOOL use_multi_sharp_;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)processImageWithScaleRatioAndError:(id)arg0 :(float)arg1 :(id *)arg2;
- (id)processImageWithError:(id)arg0 :(id *)arg1;
- (id)initWithErrInfo:(int)arg0 :(int)arg1 :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(BOOL)arg7 :(id *)arg8;
- (void *)processVideo:(struct __CVBuffer { } *)arg0;
- (int)retainBmfSrData:(void *)arg0;
- (id)init:(int)arg0 :(int)arg1 :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(BOOL)arg7;
- (void *)processVideoAndOuputOnlyTexture:(struct __CVBuffer { } *)arg0;
- (BOOL)sync_;
- (int)algo_type_;
- (void)setSr_impl_init_finish_:(BOOL)arg0;
- (void)setMtx:(struct shared_ptr<std::mutex> { struct mutex *x0; struct __shared_weak_count *x1; })arg0;
- (void)setLevel_:(int *)arg0;
- (void)setAlgo_type_:(int)arg0;
- (void)setScale_mode_:(int)arg0;
- (void)setProcess_mode_:(int)arg0;
- (void)setLib_path_:(id)arg0;
- (void)setMax_width_:(int)arg0;
- (void)setMax_height_:(int)arg0;
- (void)setLicense_module_name_:(id)arg0;
- (void)setSync_:(BOOL)arg0;
- (void)setWeight_path_:(id)arg0;
- (int)initSrImpl;
- (void)setUse_multi_sharp_:(BOOL)arg0;
- (int)process_mode_;
- (struct shared_ptr<BmfImageDataPool<BmfTextureData>> { void *x0; struct __shared_weak_count *x1; })texDataPool;
- (void)setTexDataPool:(struct shared_ptr<BmfImageDataPool<BmfTextureData>> { void *x0; struct __shared_weak_count *x1; })arg0;
- (void)setUse_individual_cmd_buf_:(BOOL)arg0;
- (void)setSharp_level_:(int)arg0;
- (int)scale_mode_;
- (id)lib_path_;
- (id)license_module_name_;
- (id)weight_path_;
- (int)max_width_;
- (int)max_height_;
- (void)setSr_impl_:(struct shared_ptr<SR_IMPL_BASE> { struct SR_IMPL_BASE *x0; struct __shared_weak_count *x1; })arg0;
- (void)setLevel_count_:(int)arg0;
- (int *)level_;
- (struct shared_ptr<SR_IMPL_BASE> { struct SR_IMPL_BASE *x0; struct __shared_weak_count *x1; })sr_impl_;
- (struct shared_ptr<std::mutex> { struct mutex *x0; struct __shared_weak_count *x1; })mtx;
- (BOOL)use_multi_sharp_;
- (BOOL)use_individual_cmd_buf_;
- (int)getSharpValueByLevel:(int)arg0;
- (void *)processVideoRoi:(struct __CVBuffer { } *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;
- (id)sr_impl_init_queue_;
- (void)setSr_impl_init_queue_:(id)arg0;
- (BOOL)sr_impl_init_finish_;
- (int)sharp_level_;
- (int)copyToMetalTexture:(void **)arg0 :(int *)arg1 :(int *)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(id)arg6 :(id)arg7;
- (void *)process:(void **)arg0 :(int *)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;
- (id)initWithExtraInfo:(int)arg0 :(int)arg1 :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(BOOL)arg7 :(struct BmfSrInitExtraInfo { id x0; } *)arg8;
- (void *)processVideo:(struct __CVBuffer { } *)arg0 WithExtraInfo:(struct BmfSrExtraInfo { struct BmfRect { int x0; int x1; int x2; int x3; } x0; struct BmfSrColor { int x0; int x1; int x2; } x1; int x2; int x3; int x4; BOOL x5; } *)arg1 AndExtraMode:(int)arg2;
- (void *)processWithExtraInfo:(void **)arg0 :(int *)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(struct BmfSrExtraInfo { struct BmfRect { int x0; int x1; int x2; int x3; } x0; struct BmfSrColor { int x0; int x1; int x2; } x1; int x2; int x3; int x4; BOOL x5; } *)arg6 :(int)arg7;
- (id)processImage:(id)arg0;
- (id)processImageWithScaleRatio:(id)arg0 :(float)arg1;
- (void *)processVideoWithScaleRatio:(struct __CVBuffer { } *)arg0 :(int)arg1;
- (int)level_count_;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end