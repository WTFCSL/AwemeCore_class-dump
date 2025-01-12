//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSSet;

@interface IESECLynxCardPerfInfo : NSObject {
    NSString *_sceneTag;
    NSString *_url;
    long long _createTime;
    NSDictionary *_resPerf;
    NSDictionary *_setupTiming;
    NSDictionary *_updateTiming;
    NSSet *_updateFlag;
    long long _setupDrawEnd;
    long long _updateDrawEnd;
}

@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long createTime;
@property (copy, nonatomic) NSDictionary *resPerf;
@property (copy, nonatomic) NSDictionary *setupTiming;
@property (copy, nonatomic) NSDictionary *updateTiming;
@property (copy, nonatomic) NSSet *updateFlag;
@property (nonatomic) long long setupDrawEnd;
@property (nonatomic) long long updateDrawEnd;

+ (id)perfInfoWithSetupInfo:(id)arg0 updateTiming:(id)arg1 resource:(id)arg2;

- (id)sceneTag;
- (void)setSceneTag:(id)arg0;
- (void)setUpdateTiming:(id)arg0;
- (id)initWithSetupInfo:(id)arg0 updateTiming:(id)arg1 resource:(id)arg2;
- (void)parseSetupTiming:(id)arg0;
- (void)parseUpdateTiming:(id)arg0;
- (void)parseResPerf:(id)arg0;
- (void)setResPerf:(id)arg0;
- (long long)setupDrawEnd;
- (void)setSetupDrawEnd:(long long)arg0;
- (void)setSetupTiming:(id)arg0;
- (long long)updateDrawEnd;
- (void)setUpdateDrawEnd:(long long)arg0;
- (id)resPerf;
- (id)setupTiming;
- (id)updateFlag;
- (void)setUpdateFlag:(id)arg0;
- (id)updateTiming;
- (void).cxx_destruct;
- (void)setCreateTime:(long long)arg0;
- (void)setUrl:(id)arg0;
- (long long)createTime;
- (id)url;

@end
