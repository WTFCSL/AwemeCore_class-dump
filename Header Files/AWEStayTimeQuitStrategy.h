//
//     Generated by private class-dump
//

@class MMKV, AWEStayTimeQuitRecordModel, AWEStayTimeQuitConfigModel, NSString;

@interface AWEStayTimeQuitStrategy : NSObject <AWELaunchLandingStrategyProtocol> {
    AWEStayTimeQuitConfigModel *_configModel;
    AWEStayTimeQuitRecordModel *_recordModel;
    MMKV *_mmkv;
    NSString *_cacheKey;
}

@property (retain, nonatomic) AWEStayTimeQuitConfigModel *configModel;
@property (retain, nonatomic) AWEStayTimeQuitRecordModel *recordModel;
@property (retain, nonatomic) MMKV *mmkv;
@property (copy, nonatomic) NSString *cacheKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (id)recordModel;
- (void)setRecordModel:(id)arg0;
- (BOOL)shouldAvoidCondition;
- (id)initWithLandingContext:(id)arg0;
- (BOOL)shouldStrategyEffect;
- (void)executeLaunchLandingWithCompletionBlock:(id /* block */)arg0;
- (id)getConfigWithLandingModel:(id)arg0;
- (void)cacheRecord;
- (void)initConfigWithContext:(id)arg0;
- (BOOL)checkConfigAndRecord;
- (void)updateQuitIfNeedWithStayTime:(long long)arg0;
- (id)cacheKey;
- (void)setCacheKey:(id)arg0;
- (void).cxx_destruct;
- (void)updateFrequency;

@end
