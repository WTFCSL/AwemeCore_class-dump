//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESECLynxCardPerfMonitor : NSObject {
    BOOL _disableCardMonitor;
    NSString *_url;
    NSString *_sceneTag;
    long long _createTime;
    NSMutableDictionary *_updateFlag;
}

@property (nonatomic) long long createTime;
@property (retain, nonatomic) NSMutableDictionary *updateFlag;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *sceneTag;
@property (nonatomic) BOOL disableCardMonitor;

- (id)sceneTag;
- (void)setSceneTag:(id)arg0;
- (void)setDisableCardMonitor:(BOOL)arg0;
- (id)getSceneTagWithURL:(id)arg0;
- (id)getUrlQueryItem:(id)arg0 url:(id)arg1;
- (BOOL)disableCardMonitor;
- (id)monitorLynxCardSetup:(id)arg0 resource:(id)arg1;
- (id)monitorLynxCardUpdate:(id)arg0 updateTiming:(id)arg1 resource:(id)arg2;
- (id)updateFlag;
- (void)setUpdateFlag:(id)arg0;
- (id)p_perfInfoWithSetupInfo:(id)arg0 updateTiming:(id)arg1 resource:(id)arg2;
- (void)p_reportLynxCardPerfInfo:(id)arg0;
- (id)p_filterUpdateTiming:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCreateTime:(long long)arg0;
- (void)setUrl:(id)arg0;
- (long long)createTime;
- (id)url;

@end
