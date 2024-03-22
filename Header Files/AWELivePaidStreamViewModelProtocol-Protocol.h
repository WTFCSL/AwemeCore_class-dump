//
//     Generated by private class-dump
//

@class NSDictionary;
@protocol AWELivePaidLivePlayerDelegate, AWELivePaidStreamViewModelDelegate;

@protocol AWELivePaidStreamViewModelProtocol <NSObject>

@property (weak, nonatomic) id<AWELivePaidLivePlayerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) id<AWELivePaidStreamViewModelDelegate> viewModelDelegate;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (void)enterRoomAction;
- (void)receiveChannelMessage:(id)arg0;
- (BOOL)vipPaidStreamDisabled;
- (id)viewModelDelegate;
- (void)requestPaidLiveBeforePlayWithBlock:(id /* block */)arg0;
- (void)playerDidStart;
- (void)playerDidStop;
- (BOOL)shouldPlayWithMuteAndShowMaskView;
- (void)installPaidStreamWithModel:(id)arg0 liveSource:(long long)arg1;
- (void)setViewModelDelegate:(id)arg0;
- (id)initWithPlayer:(id)arg0;
- (id)delegate;
- (void)uninstall;
- (void)setDelegate:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end