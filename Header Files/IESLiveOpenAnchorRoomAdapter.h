//
//     Generated by private class-dump
//

@class NSDictionary, HTSHotsoonRoomAPI, IESLiveSkipCertificateApi;
@protocol IESLiveCreateRoomPreCheckService, IESLiveMonitor, IESLiveVerifyConfig;

@interface IESLiveOpenAnchorRoomAdapter : NSObject {
    NSDictionary *_extraTrackParams;
    NSDictionary *_createRoomExtraParams;
    HTSHotsoonRoomAPI *_api;
    id<IESLiveCreateRoomPreCheckService> _preCheckService;
    id<IESLiveMonitor> _monitor;
    id<IESLiveVerifyConfig> _verifyConfig;
    unsigned long long _createRoomType;
    IESLiveSkipCertificateApi *_skipApi;
}

@property (retain, nonatomic) HTSHotsoonRoomAPI *api;
@property (retain, nonatomic) id<IESLiveCreateRoomPreCheckService> preCheckService;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;
@property (nonatomic) unsigned long long createRoomType;
@property (retain, nonatomic) IESLiveSkipCertificateApi *skipApi;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (copy, nonatomic) NSDictionary *createRoomExtraParams;

- (void)setExtraTrackParams:(id)arg0;
- (id)extraTrackParams;
- (id)createRoomExtraParams;
- (void)setCreateRoomExtraParams:(id)arg0;
- (id)preCheckService;
- (void)setPreCheckService:(id)arg0;
- (id)verifyConfig;
- (void)setVerifyConfig:(id)arg0;
- (void)p_setupCreateRoomExtraParamsJust4Once;
- (void)createRoomWithType:(unsigned long long)arg0 openLiveModel:(id)arg1 enableShop:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)handleCreateRoomError:(id)arg0 checkInfo:(id)arg1;
- (BOOL)isValidRoom:(id)arg0;
- (unsigned long long)createRoomType;
- (void)triggerFaceRecognitionWithScene:(id)arg0 flow:(id)arg1 ticket:(id)arg2;
- (void)triggerFaceRecognitionWithType:(id)arg0;
- (void)popupProfessionCertificatePanel:(id)arg0;
- (id)skipApi;
- (id)handlePayloadParamsWithSourceParams:(id)arg0 openLiveModel:(id)arg1;
- (id)mediaTypeFromLiveType:(unsigned long long)arg0;
- (unsigned long long)mapFromHTSLiveType:(unsigned long long)arg0;
- (void)setCreateRoomType:(unsigned long long)arg0;
- (void)roomCreated:(id)arg0 withError:(id)arg1 checkInfo:(id)arg2 mediaType:(id)arg3 completion:(id /* block */)arg4;
- (void)setSkipApi:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
