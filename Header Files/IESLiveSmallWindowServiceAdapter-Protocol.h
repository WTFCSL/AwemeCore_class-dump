//
//     Generated by private class-dump
//

@protocol IESLiveSmallWindowServiceAdapter <NSObject>

@property (nonatomic) BOOL selfManage;
@property (readonly, nonatomic) BOOL manualHideSmallWindow;

@optional

- (void)showSmallLiveWindowFrom:(id)arg0;
- (void)hideSmallLiveWindow;
- (void)registerAllowListVCClass:(Class)arg0 withTag:(id)arg1;
- (void)unregisterAllowListVCClass:(Class)arg0;
- (void)setSmallWindowHiddenCompletion:(id /* block */)arg0;
- (void)setTapSmallWindowAction:(id /* block */)arg0;
- (void)setSmallWindowMuteStateDidChangedAction:(id /* block */)arg0;
- (BOOL)hasWindowView;
- (void)setSelfManage:(BOOL)arg0;
- (void)transferSmallLiveToView:(id)arg0;
- (void)setSmallWindowMute:(BOOL)arg0;
- (BOOL)selfManage;
- (void)setSmallWindowTop:(double)arg0;
- (void)showSmallLiveWindowFrom:(id)arg0 extraParam:(id)arg1 preferOptions:(id)arg2;
- (BOOL)manualHideSmallWindow;
- (void)hideSmallWindow;
- (void)switchResolution:(id)arg0 complete:(id /* block */)arg1;

@end
