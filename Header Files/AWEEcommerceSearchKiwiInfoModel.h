//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWETrackerContext, AWEDynamicPatchModel;

@interface AWEEcommerceSearchKiwiInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _isWrapHeight;
    BOOL _needPlayFinish;
    BOOL _isAutoPlay;
    BOOL _isNativeReportShow;
    BOOL _isTracked;
    AWEDynamicPatchModel *_kiwiDynamic;
    double _customMaxHeight;
    NSDictionary *_logInfo;
    AWETrackerContext *_trackerContext;
    double _realHeight;
}

@property (retain, nonatomic) AWEDynamicPatchModel *kiwiDynamic;
@property (nonatomic) double customMaxHeight;
@property (retain, nonatomic) NSDictionary *logInfo;
@property (nonatomic) BOOL isWrapHeight;
@property (nonatomic) BOOL needPlayFinish;
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) BOOL isNativeReportShow;
@property (retain, nonatomic) AWETrackerContext *trackerContext;
@property (nonatomic) BOOL isTracked;
@property (nonatomic) double realHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)kiwiDynamicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)logInfo;
- (void)setLogInfo:(id)arg0;
- (double)realHeight;
- (void)setRealHeight:(double)arg0;
- (id)trackerContext;
- (void)setTrackerContext:(id)arg0;
- (BOOL)needPlayFinish;
- (void)setNeedPlayFinish:(BOOL)arg0;
- (BOOL)shouldAutoFold;
- (id)kiwiDynamic;
- (void)setKiwiDynamic:(id)arg0;
- (double)customMaxHeight;
- (void)setCustomMaxHeight:(double)arg0;
- (BOOL)isWrapHeight;
- (void)setIsWrapHeight:(BOOL)arg0;
- (BOOL)isNativeReportShow;
- (void)setIsNativeReportShow:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setIsAutoPlay:(BOOL)arg0;
- (BOOL)isAutoPlay;
- (BOOL)isTracked;
- (void)setIsTracked:(BOOL)arg0;

@end
