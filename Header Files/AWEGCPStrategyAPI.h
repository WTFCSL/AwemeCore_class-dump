//
//     Generated by private class-dump
//

@class IESGCPApi;

@interface AWEGCPStrategyAPI : NSObject {
    IESGCPApi *_api;
}

@property (retain, nonatomic) IESGCPApi *api;

- (void)requestImpressionReportWithItemIds:(id)arg0 contentType:(int)arg1 channelId:(id)arg2 completion:(id /* block */)arg3;
- (void)requestStrategyListWithGameId:(id)arg0 tabId:(id)arg1 lastVideoOffset:(long long)arg2 lastLiveOffset:(long long)arg3 count:(long long)arg4 isChoicenessContent:(BOOL)arg5 completion:(id /* block */)arg6;
- (id)videoItemWithString:(id)arg0;
- (id)liveItem:(id)arg0;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
