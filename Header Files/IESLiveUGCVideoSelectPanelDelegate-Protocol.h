//
//     Generated by private class-dump
//

@protocol IESLiveUGCVideoSelectPanelDelegate <NSObject>

- (void)getMVListWithParams:(id)arg0 loadMore:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)changeMVListWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)chooseMVListWithParams:(id)arg0 completion:(id /* block */)arg1;

@optional

- (void)videoSelectPanelWillHide;
- (void)videoSelectPanelDidShow;

@end