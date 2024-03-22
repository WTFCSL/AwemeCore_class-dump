//
//     Generated by private class-dump
//

@class LOTComposition, NSString, AWEActivityPendantDataModel, NSArray, UIImage, AWEActivityCapsuleDataModel, NSDictionary;

@interface AWEActivityConfigModel : MTLModel <MTLJSONSerializing> {
    BOOL _canCloseExpandedPendant;
    BOOL _canCloseFoldedPendant;
    BOOL _enableFold;
    BOOL _enableFoldedPendantRouter;
    BOOL _disableForceShow;
    BOOL _disableAvoidStrategy;
    BOOL _isInternalResource;
    NSString *_activityName;
    long long _rainID;
    AWEActivityPendantDataModel *_pendantData;
    AWEActivityCapsuleDataModel *_capsuleData;
    NSString *_pendantTypeName;
    unsigned long long _pendantType;
    unsigned long long _coldStartShow;
    long long _countOfDisappearAfter;
    long long _timeOfDisappearAfter;
    long long _closeHoursNotShow;
    double _startTime;
    double _endTime;
    NSArray *_showTab;
    unsigned long long _taskType;
    NSArray *_taskArray;
    LOTComposition *_pendantExpendedLottie;
    LOTComposition *_pendantFoldedLottie;
    UIImage *_expandedImage;
    UIImage *_foldedImage;
}

@property (retain, nonatomic) NSString *activityName;
@property (nonatomic) long long rainID;
@property (retain, nonatomic) AWEActivityPendantDataModel *pendantData;
@property (retain, nonatomic) AWEActivityCapsuleDataModel *capsuleData;
@property (retain, nonatomic) NSString *pendantTypeName;
@property (nonatomic) unsigned long long pendantType;
@property (nonatomic) BOOL canCloseExpandedPendant;
@property (nonatomic) BOOL canCloseFoldedPendant;
@property (nonatomic) unsigned long long coldStartShow;
@property (nonatomic) long long countOfDisappearAfter;
@property (nonatomic) long long timeOfDisappearAfter;
@property (nonatomic) long long closeHoursNotShow;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSArray *showTab;
@property (nonatomic) BOOL enableFold;
@property (nonatomic) BOOL enableFoldedPendantRouter;
@property (nonatomic) BOOL disableForceShow;
@property (nonatomic) BOOL disableAvoidStrategy;
@property (nonatomic) unsigned long long taskType;
@property (retain, nonatomic) NSArray *taskArray;
@property (retain, nonatomic) LOTComposition *pendantExpendedLottie;
@property (retain, nonatomic) LOTComposition *pendantFoldedLottie;
@property (retain, nonatomic) UIImage *expandedImage;
@property (retain, nonatomic) UIImage *foldedImage;
@property (nonatomic) BOOL isInternalResource;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)canCloseExpandedPendant;
- (BOOL)canCloseFoldedPendant;
- (void)setPendantExpendedLottie:(id)arg0;
- (void)setPendantFoldedLottie:(id)arg0;
- (void)setExpandedImage:(id)arg0;
- (void)setFoldedImage:(id)arg0;
- (BOOL)enableFold;
- (BOOL)enableFoldedPendantRouter;
- (id)foldedImage;
- (id)pendantExpendedLottie;
- (id)pendantFoldedLottie;
- (long long)countOfDisappearAfter;
- (id)pendantData;
- (unsigned long long)pendantType;
- (void)setIsInternalResource:(BOOL)arg0;
- (id)showTab;
- (long long)rainID;
- (void)setRainID:(long long)arg0;
- (void)setPendantData:(id)arg0;
- (id)capsuleData;
- (void)setCapsuleData:(id)arg0;
- (id)pendantTypeName;
- (void)setPendantTypeName:(id)arg0;
- (void)setPendantType:(unsigned long long)arg0;
- (void)setCanCloseExpandedPendant:(BOOL)arg0;
- (void)setCanCloseFoldedPendant:(BOOL)arg0;
- (unsigned long long)coldStartShow;
- (void)setColdStartShow:(unsigned long long)arg0;
- (void)setCountOfDisappearAfter:(long long)arg0;
- (long long)timeOfDisappearAfter;
- (void)setTimeOfDisappearAfter:(long long)arg0;
- (long long)closeHoursNotShow;
- (void)setCloseHoursNotShow:(long long)arg0;
- (void)setShowTab:(id)arg0;
- (void)setEnableFold:(BOOL)arg0;
- (void)setEnableFoldedPendantRouter:(BOOL)arg0;
- (BOOL)disableForceShow;
- (void)setDisableForceShow:(BOOL)arg0;
- (BOOL)disableAvoidStrategy;
- (void)setDisableAvoidStrategy:(BOOL)arg0;
- (id)taskArray;
- (void)setTaskArray:(id)arg0;
- (id)expandedImage;
- (BOOL)isInternalResource;
- (unsigned long long)taskType;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)endTime;
- (double)startTime;
- (void)setEndTime:(double)arg0;
- (void)setTaskType:(unsigned long long)arg0;
- (id)activityName;
- (void)setActivityName:(id)arg0;

@end
