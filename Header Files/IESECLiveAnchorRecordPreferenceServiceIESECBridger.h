//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveAnchorRecordPreferenceService;

@interface IESECLiveAnchorRecordPreferenceServiceIESECBridger : NSObject <IESECLiveAnchorRecordPreferenceService> {
    id<IESLiveAnchorRecordPreferenceService> _protoObj;
}

@property (retain, nonatomic) id<IESLiveAnchorRecordPreferenceService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)arg0;
+ (id)bridgedProtocol;

- (void)setProtoObj:(id)arg0;
- (id)protoObj;
- (void).cxx_destruct;
- (BOOL)playbackAllowed;

@end
