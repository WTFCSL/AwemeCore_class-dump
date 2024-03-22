//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPluginTrackerCustomImpl : NSObject <BDPTrackerPluginDelegate> {
    NSArray *_commonParamKeys;
    NSArray *_localCommonParamKeys;
}

@property (copy, nonatomic) NSArray *commonParamKeys;
@property (copy, nonatomic) NSArray *localCommonParamKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)commonParamKeys;
- (id)localCommonParamKeys;
- (void)bdp_event:(id)arg0 params:(id)arg1;
- (void)bdp_eventV1Label:(id)arg0 eventName:(id)arg1 extraData:(id)arg2;
- (id)bdp_commonTrackParamsWithSchema:(id)arg0;
- (void)setCommonParamKeys:(id)arg0;
- (void)setLocalCommonParamKeys:(id)arg0;
- (void).cxx_destruct;

@end
