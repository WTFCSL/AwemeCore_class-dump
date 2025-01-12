//
//     Generated by private class-dump
//

@class IESLivePlaybackTitleStatusModel, NSString, IESLivePlaybackTitleStatusView, IESLivePlaybackSubtitleStatusView;

@interface IESLivePlaybackTitleStatusFragment : IESLivePlaybackComponent <IESLivePlaybackSmallWindowAction, IESLiveMessageSubscriber> {
    IESLivePlaybackTitleStatusView *_titleStatusView;
    IESLivePlaybackSubtitleStatusView *_subtitleStatusView;
    IESLivePlaybackTitleStatusModel *_titleStatusModel;
}

@property (retain, nonatomic) IESLivePlaybackTitleStatusView *titleStatusView;
@property (retain, nonatomic) IESLivePlaybackSubtitleStatusView *subtitleStatusView;
@property (retain, nonatomic) IESLivePlaybackTitleStatusModel *titleStatusModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentOrientationChanged:(long long)arg0;
- (BOOL)convergedModule;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (void)streamChangedWithEpisode:(id)arg0;
- (void)setSubtitleStatusView:(id)arg0;
- (void)setTitleStatusView:(id)arg0;
- (void)smallWindowDidChangeToFirstPlay;
- (id)titleStatusView;
- (id)subtitleStatusView;
- (void)updateTitleVisiable;
- (void)updateTitleVisiable:(BOOL)arg0;
- (id)titleStatusModel;
- (void)setTitleStatusModel:(id)arg0;
- (void).cxx_destruct;

@end
