//
//     Generated by private class-dump
//

@class IESLiveMultiKTVMVGuidePanel, IESLiveMultiKTVStore, IESLiveUGCVideoSelectPanel, IESLiveUGCVideoSelectPanelViewModel;

@interface IESLiveUGCVideoSelectPanelHandler : NSObject {
    IESLiveUGCVideoSelectPanel *_videoSelectPanel;
    IESLiveMultiKTVMVGuidePanel *_guidePanel;
    IESLiveUGCVideoSelectPanelViewModel *_selectPanelViewModel;
    IESLiveMultiKTVStore *_store;
}

@property (retain, nonatomic) IESLiveUGCVideoSelectPanel *videoSelectPanel;
@property (retain, nonatomic) IESLiveMultiKTVMVGuidePanel *guidePanel;
@property (retain, nonatomic) IESLiveUGCVideoSelectPanelViewModel *selectPanelViewModel;
@property (weak, nonatomic) IESLiveMultiKTVStore *store;

- (void)didSetAttachingDIContext;
- (id)guidePanel;
- (void)setGuidePanel:(id)arg0;
- (void)showVideoSelectPanelWithSource:(id)arg0;
- (id)initWithDelegate:(id)arg0 multiKTVStore:(id)arg1;
- (void)showGuidePanelWithSource:(id)arg0;
- (id)selectPanelViewModel;
- (id)videoSelectPanel;
- (void)setVideoSelectPanel:(id)arg0;
- (void)setSelectPanelViewModel:(id)arg0;
- (id)userType;
- (void).cxx_destruct;
- (id)store;
- (BOOL)isConnected;
- (void)setStore:(id)arg0;

@end
