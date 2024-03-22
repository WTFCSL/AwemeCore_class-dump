//
//     Generated by private class-dump
//

@class ToygerBlob, ToygerAlgorithmConfig, NSString, NSData, ToygerFaceFrame, ToygerSensorHandler, ToygerUploadConfig, ToygerSensorConfig, NSMutableArray, NSObject, ToygerDocFrame, ToygerConfig;
@protocol OS_dispatch_semaphore, ToygerServiceInstanceDelegate;

@interface ToygerServiceInstance : NSObject {
    void *_toygerInstance;
    NSString *_aesKey;
    NSObject<OS_dispatch_semaphore> *_lock;
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } _currentFeature;
    NSString *_zimId;
    struct vector<TGFaceInfo, std::__1::allocator<TGFaceInfo> > { struct TGFaceInfo *__begin_; struct TGFaceInfo *__end_; struct __compressed_pair<TGFaceInfo *, std::__1::allocator<TGFaceInfo> > { struct TGFaceInfo *__value_; } __end_cap_; } _info;
    struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _ext;
    ToygerSensorHandler *_sensorHandler;
    ToygerSensorConfig *_sensorConfig;
    BOOL _fpp_pre_processed;
    BOOL _faceImageEncrypt;
    BOOL _isSensorEnabled;
    BOOL _isBeeLivenessEnabled;
    ToygerConfig *_config;
    id<ToygerServiceInstanceDelegate> _delegate;
    NSString *_aesCipher;
    ToygerAlgorithmConfig *_algorithmConfig;
    ToygerUploadConfig *_uploadConfig;
    ToygerBlob *_blob;
    ToygerFaceFrame *_faceFrame;
    ToygerDocFrame *_docFrame;
    unsigned long long _currentType;
    NSData *_modelData;
    NSString *_modelPath;
    NSData *_mouthModelData;
    NSString *_mouthModelPath;
    NSString *_license;
    NSString *_bundleid;
    struct ToygerCallback { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; } *_callBack;
    NSString *_userid;
    NSString *_cacheFolderPath;
    NSMutableArray *_cachedBlobElemArr;
}

@property (retain, nonatomic) ToygerAlgorithmConfig *algorithmConfig;
@property (retain, nonatomic) ToygerUploadConfig *uploadConfig;
@property (retain, nonatomic) ToygerBlob *blob;
@property (retain, nonatomic) ToygerFaceFrame *faceFrame;
@property (retain, nonatomic) ToygerDocFrame *docFrame;
@property (nonatomic) unsigned long long currentType;
@property (retain, nonatomic) NSData *modelData;
@property (copy, nonatomic) NSString *modelPath;
@property (retain, nonatomic) NSData *mouthModelData;
@property (copy, nonatomic) NSString *mouthModelPath;
@property (copy, nonatomic) NSString *license;
@property (copy, nonatomic) NSString *bundleid;
@property (nonatomic) struct ToygerCallback { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; } *callBack;
@property (nonatomic) BOOL fpp_pre_processed;
@property (retain, nonatomic) NSString *userid;
@property (retain, nonatomic) NSString *cacheFolderPath;
@property (nonatomic) BOOL faceImageEncrypt;
@property (retain, nonatomic) NSMutableArray *cachedBlobElemArr;
@property (nonatomic) BOOL isSensorEnabled;
@property (nonatomic) BOOL isBeeLivenessEnabled;
@property (retain, nonatomic) ToygerConfig *config;
@property (weak, nonatomic) id<ToygerServiceInstanceDelegate> delegate;
@property (retain, nonatomic) NSString *aesCipher;

+ (id)blobTypeNameFrom:(int)arg0;
+ (id)getImageBlobElemwithFrame:(struct TGFrame { char *x0; long long x1; int x2; int x3; int x4; int x5; int x6; int x7; BOOL x8; int *x9; })arg0 faceRect:(struct TGFRect { float x0; float x1; float x2; float x3; })arg1 andInstance:(id)arg2;
+ (id)getAlgParamDetailFromAttr:(struct TGFaceAttr { int x0; BOOL x1; BOOL x2; struct TGFRect { float x0; float x1; float x2; float x3; } x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; short x17; float x18[10]; BOOL x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; int x27; float x28; float x29; int x30; float x31[8]; int x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; long long x37; long long x38; })arg0;
+ (id)getSensorDataofInstance:(id)arg0 atIdx:(long long)arg1;
+ (long long)getToygerState;
+ (id)metaInfo;

- (void)setUploadConfig:(id)arg0;
- (struct ToygerCallback { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; } *)callBack;
- (void)setCallBack:(struct ToygerCallback { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; } *)arg0;
- (id)uploadConfig;
- (id)cacheFolderPath;
- (void)setCacheFolderPath:(id)arg0;
- (void)setAlgorithmConfig:(id)arg0;
- (id)algorithmConfig;
- (void)photinusFinish;
- (id)initWithType:(unsigned long long)arg0 andExtInfo:(id)arg1 errorPtr:(id *)arg2;
- (void)_prepareAlgorithm;
- (void)processSensorData:(id)arg0 withExtraInfo:(id)arg1;
- (void)processImage:(struct opaqueCMSampleBuffer { } *)arg0 byOrientation:(long long)arg1 extraInfo:(id)arg2;
- (id)_buildToygerAlgorithm;
- (BOOL)_prepareModelData;
- (void)setIsBeeLivenessEnabled:(BOOL)arg0;
- (void)setFpp_pre_processed:(BOOL)arg0;
- (BOOL)fpp_pre_processed;
- (id)dataWithDocCaptureImage:(id)arg0 andAeskey:(id)arg1 extraInfo:(id)arg2;
- (id)dataWithSurveillance:(id)arg0 byType:(unsigned long long)arg1 extraInfo:(id)arg2;
- (void)handleRemoteLogofFaceDetectPhase:(id)arg0 ext:(id)arg1;
- (void)setDocConfig:(id)arg0;
- (void)processBestImage;
- (id)aesCipher;
- (void)setAesCipher:(id)arg0;
- (id)faceFrame;
- (void)setFaceFrame:(id)arg0;
- (id)docFrame;
- (void)setDocFrame:(id)arg0;
- (void)setCurrentType:(unsigned long long)arg0;
- (id)mouthModelData;
- (void)setMouthModelData:(id)arg0;
- (id)mouthModelPath;
- (void)setMouthModelPath:(id)arg0;
- (BOOL)faceImageEncrypt;
- (void)setFaceImageEncrypt:(BOOL)arg0;
- (id)cachedBlobElemArr;
- (void)setCachedBlobElemArr:(id)arg0;
- (BOOL)isSensorEnabled;
- (void)setIsSensorEnabled:(BOOL)arg0;
- (BOOL)isBeeLivenessEnabled;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setModelPath:(id)arg0;
- (id)modelData;
- (id)config;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)reset;
- (id).cxx_construct;
- (id)modelPath;
- (id)license;
- (void)setBlob:(id)arg0;
- (id)blob;
- (id)bundleid;
- (void)setBundleid:(id)arg0;
- (void)setModelData:(id)arg0;
- (void)setLicense:(id)arg0;
- (id)userid;
- (void)setUserid:(id)arg0;
- (unsigned long long)currentType;

@end