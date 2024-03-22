//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary;

@interface DitoPerformanceModel : NSObject <DitoLogInfoProtocol> {
    NSString *_scene;
    NSString *_pageKey;
    NSString *_type;
    NSString *_uniqueID;
    NSString *_sessionID;
    NSString *_stage;
    double _duration;
    NSDictionary *_extraParams;
}

@property (retain, nonatomic) NSMutableDictionary *stageMap;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *stage;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)pageKey;
- (void)setPageKey:(id)arg0;
- (id)stageMap;
- (void)setStageMap:(id)arg0;
- (void)addStageTimes:(id)arg0 withDuration:(double)arg1;
- (id)fetchLogDescription;
- (id)fetchLogParams;
- (id)fetchDefaultPerformanceDictionary;
- (unsigned long long)logType;
- (id)initWithContext:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)uniqueID;
- (id)sessionID;
- (void)setUniqueID:(id)arg0;
- (id)type;
- (id)stage;
- (double)duration;
- (void)setType:(id)arg0;
- (unsigned long long)logLevel;
- (void)setStage:(id)arg0;
- (id)scene;
- (void)setDuration:(double)arg0;

@end