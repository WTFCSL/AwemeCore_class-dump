//
//     Generated by private class-dump
//

@interface HybridResourceMetricInfo : NSObject {
    double _loadCostTime;
    double _parseCostTime;
    double _configMergeCostTime;
    double _createPipelineCostTime;
    double _memoryCostTime;
    double _geckoCostTime;
    double _geckoUpdateCostTime;
    double _geckoTotalCostTime;
    double _cdnCacheCostTime;
    double _cdnCostTime;
    double _cdnTotalCostTime;
    double _builtinCostTime;
}

@property (nonatomic) double loadCostTime;
@property (nonatomic) double parseCostTime;
@property (nonatomic) double configMergeCostTime;
@property (nonatomic) double createPipelineCostTime;
@property (nonatomic) double memoryCostTime;
@property (nonatomic) double geckoCostTime;
@property (nonatomic) double geckoUpdateCostTime;
@property (nonatomic) double geckoTotalCostTime;
@property (nonatomic) double cdnCacheCostTime;
@property (nonatomic) double cdnCostTime;
@property (nonatomic) double cdnTotalCostTime;
@property (nonatomic) double builtinCostTime;

- (void)setParseCostTime:(double)arg0;
- (void)setLoadCostTime:(double)arg0;
- (void)setCreatePipelineCostTime:(double)arg0;
- (void)setMemoryCostTime:(double)arg0;
- (void)setGeckoCostTime:(double)arg0;
- (void)setGeckoUpdateCostTime:(double)arg0;
- (double)geckoCostTime;
- (double)geckoUpdateCostTime;
- (void)setGeckoTotalCostTime:(double)arg0;
- (void)setCdnCostTime:(double)arg0;
- (void)setCdnCacheCostTime:(double)arg0;
- (double)cdnCostTime;
- (double)cdnCacheCostTime;
- (void)setCdnTotalCostTime:(double)arg0;
- (void)setBuiltinCostTime:(double)arg0;
- (id)initWithTaskConfig:(id)arg0 resourceProvider:(id)arg1;
- (id)getMetricInfo;
- (double)loadCostTime;
- (double)parseCostTime;
- (double)configMergeCostTime;
- (void)setConfigMergeCostTime:(double)arg0;
- (double)createPipelineCostTime;
- (double)memoryCostTime;
- (double)geckoTotalCostTime;
- (double)cdnTotalCostTime;
- (double)builtinCostTime;

@end
