//
//     Generated by private class-dump
//

@class IESLiveVipChatEntranceCacheManager;

@interface IESLiveVipChatApi : HTSLiveApi {
    IESLiveVipChatEntranceCacheManager *_cacheManager;
}

@property (retain, nonatomic) IESLiveVipChatEntranceCacheManager *cacheManager;

- (void)requestVipChatEntranceWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)enableEntranceCache;
- (long long)apiFrequency;
- (void)p_getVipChatEntranceWithRoomID:(id)arg0 frequency:(long long)arg1 completion:(id /* block */)arg2;
- (void)p_requestVipChatEntranceWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)p_cacheResponse:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)cacheManager;
- (void)setCacheManager:(id)arg0;

@end