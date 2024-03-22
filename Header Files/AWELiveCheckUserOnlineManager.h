//
//     Generated by private class-dump
//

@class AWELiveMgetRoomInfoApi, NSMutableDictionary;

@interface AWELiveCheckUserOnlineManager : NSObject {
    BOOL _forceCheck;
    AWELiveMgetRoomInfoApi *_infoApi;
    NSMutableDictionary *_monitorData;
}

@property (retain, nonatomic) AWELiveMgetRoomInfoApi *infoApi;
@property (retain, nonatomic) NSMutableDictionary *monitorData;
@property (nonatomic) BOOL forceCheck;

+ (id)sharedManager;

- (BOOL)forceCheck;
- (void)setForceCheck:(BOOL)arg0;
- (id)_buildCurrenScene:(id)arg0 referString:(id)arg1;
- (id)_buildSceneUIDKey:(id)arg0 userID:(id)arg1;
- (void)addFeedReadyNotification;
- (void)p_postUnRead;
- (id)_getListByScene:(long long)arg0;
- (id)monitorData;
- (void)_updateRoomInfo:(id)arg0 toCenter:(id)arg1;
- (id)_getNeedCheckUserList:(id)arg0 toCenter:(id)arg1;
- (id)_getRequestParams:(id)arg0;
- (id)infoApi;
- (void)uploadMonitorEvent;
- (id)roomIdInResponse:(id)arg0 ofUserId:(id)arg1 andScene:(id)arg2;
- (void)_callMessage:(id)arg0 userList:(id)arg1 updateCurrent:(BOOL)arg2 feedModel:(id)arg3;
- (void)_mgetRoomInfo:(id)arg0 infoList:(id)arg1 userList:(id)arg2 inCenter:(id)arg3 currentChange:(BOOL)arg4;
- (id)_getMegetRequestParams:(id)arg0;
- (void)checkRoomInfo:(id)arg0 userID:(id)arg1 scene:(long long)arg2;
- (void)forceToCheckRoomInfo:(id)arg0 userID:(id)arg1 scene:(long long)arg2;
- (void)setInfoApi:(id)arg0;
- (void)setMonitorData:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end