//
//     Generated by private class-dump
//

@class HTSEventContext, NSDictionary, NSString, IESLiveOpenMultiPosterSharePanelParamModel;
@protocol IESLiveRoomService;

@interface IESLiveVSSharePosterViewModel : NSObject <IESLiveVSSharePosterViewModelInterface> {
    HTSEventContext *_trackContext;
    id /* block */ _enableStoryShare;
    NSDictionary *_storyShareInfo;
    id<IESLiveRoomService> _room;
    IESLiveOpenMultiPosterSharePanelParamModel *_paramModel;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveOpenMultiPosterSharePanelParamModel *paramModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ enableStoryShare;
@property (retain, nonatomic) NSDictionary *storyShareInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)paramModel;
- (id /* block */)enableStoryShare;
- (void)setEnableStoryShare:(id /* block */)arg0;
- (id)storyShareInfo;
- (void)setStoryShareInfo:(id)arg0;
- (void)preLoadImage;
- (void)setParamModel:(id)arg0;
- (void)showShareMultiPosterPanelWithModel:(id)arg0;
- (void)p_showShareMultiPosterPanel;
- (void)showLandscapeShareMultiPosterPanel;
- (void)showShareMultiPosterPanel;
- (id)creatShareChainPreViewArrayDownLoadCompletion:(id /* block */)arg0;
- (id)creatShareChainSaveViewArrayDownLoadCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end