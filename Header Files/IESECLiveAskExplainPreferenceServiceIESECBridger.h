//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveAskExplainPreferenceService;

@interface IESECLiveAskExplainPreferenceServiceIESECBridger : NSObject <IESECLiveAskExplainPreferenceService> {
    id<IESLiveAskExplainPreferenceService> _protoObj;
}

@property (retain, nonatomic) id<IESLiveAskExplainPreferenceService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)arg0;
+ (id)bridgedProtocol;

- (BOOL)askExplainAllowed;
- (void)setProtoObj:(id)arg0;
- (id)protoObj;
- (void).cxx_destruct;

@end
