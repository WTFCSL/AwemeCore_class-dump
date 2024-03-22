//
//     Generated by private class-dump
//

@class HMDCPUBinaryImageInfo, NSMutableDictionary, NSString, NSMutableSet, NSDictionary, NSMutableArray;

@interface HMDCPUExceptionCycleDataCollector : NSObject {
    BOOL _hasBinaryImage;
    BOOL _isFindUserNode;
    BOOL _hasLowPowerModel;
    float _thresholdConfig;
    int _totalThreadCount;
    float _totalCPUUsage;
    long long _startTime;
    long long _endTime;
    unsigned long long _sampleDuration;
    unsigned long long _maxTreeDepth;
    long long _sampleCount;
    NSMutableArray *_collectInfo;
    NSMutableDictionary *_sceneDict;
    NSMutableDictionary *_customSceneDict;
    long long _thermalSeriousState;
    NSMutableSet *_imageNameSet;
    NSMutableDictionary *_imageCPUArchMap;
    NSString *_possibleScene;
    NSDictionary *_imageUUIDMap;
    HMDCPUBinaryImageInfo *_binaryInfo;
}

@property (nonatomic) long long sampleCount;
@property (retain, nonatomic) NSMutableArray *collectInfo;
@property (retain, nonatomic) NSMutableDictionary *sceneDict;
@property (retain, nonatomic) NSMutableDictionary *customSceneDict;
@property (nonatomic) long long thermalSeriousState;
@property (nonatomic) int totalThreadCount;
@property (nonatomic) float totalCPUUsage;
@property (retain, nonatomic) NSMutableSet *imageNameSet;
@property (retain, nonatomic) NSMutableDictionary *imageCPUArchMap;
@property (nonatomic) BOOL isFindUserNode;
@property (nonatomic) BOOL hasLowPowerModel;
@property (copy, nonatomic) NSString *possibleScene;
@property (copy, nonatomic) NSDictionary *imageUUIDMap;
@property (retain, nonatomic) HMDCPUBinaryImageInfo *binaryInfo;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) float thresholdConfig;
@property (nonatomic) unsigned long long sampleDuration;
@property (nonatomic) unsigned long long maxTreeDepth;
@property (nonatomic) BOOL hasBinaryImage;

+ (id)fetchCurrenImageList;

- (unsigned long long)maxTreeDepth;
- (void)setMaxTreeDepth:(unsigned long long)arg0;
- (void)setCollectInfo:(id)arg0;
- (void)setSceneDict:(id)arg0;
- (void)setCustomSceneDict:(id)arg0;
- (void)setImageNameSet:(id)arg0;
- (void)setThermalSeriousState:(long long)arg0;
- (void)setTotalCPUUsage:(float)arg0;
- (void)setTotalThreadCount:(int)arg0;
- (void)setImageUUIDMap:(id)arg0;
- (void)setImageCPUArchMap:(id)arg0;
- (id)collectInfo;
- (id)imageNameSet;
- (id)binaryInfo;
- (void)setBinaryInfo:(id)arg0;
- (id)sceneDict;
- (id)customSceneDict;
- (void)fetchBasicEvnInfoWithRecord:(id)arg0;
- (float)thresholdConfig;
- (id)getMostScene:(id)arg0;
- (void)setPossibleScene:(id)arg0;
- (void)preparImageUUIDMap;
- (void)pushOnceSampledInfo:(id)arg0;
- (id)makeSummaryInExceptionCycle;
- (void)clearAllSampleInfo;
- (void)setThresholdConfig:(float)arg0;
- (BOOL)hasBinaryImage;
- (void)setHasBinaryImage:(BOOL)arg0;
- (long long)thermalSeriousState;
- (int)totalThreadCount;
- (float)totalCPUUsage;
- (id)imageCPUArchMap;
- (BOOL)isFindUserNode;
- (void)setIsFindUserNode:(BOOL)arg0;
- (BOOL)hasLowPowerModel;
- (void)setHasLowPowerModel:(BOOL)arg0;
- (id)possibleScene;
- (id)imageUUIDMap;
- (long long)sampleCount;
- (id)init;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (void)setSampleCount:(long long)arg0;
- (long long)endTime;
- (long long)startTime;
- (void)dealloc;
- (void)setEndTime:(long long)arg0;
- (unsigned long long)sampleDuration;
- (void)setSampleDuration:(unsigned long long)arg0;

@end