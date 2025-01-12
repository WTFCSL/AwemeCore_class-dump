//
//     Generated by private class-dump
//

@class HTSLiveEpisode, NSString, NSHashTable, IESLivePlaybackPaidStreamParameterCreator;
@protocol IESVSVideoPlayerRouter;

@interface IESLivePlaybackPaidStreamCreator : NSObject <IESLivePlaybackPaidStreamCreatorProtocol> {
    HTSLiveEpisode *_episode;
    IESLivePlaybackPaidStreamParameterCreator *_parameterCreator;
    id<IESVSVideoPlayerRouter> _videoPlayer;
    NSHashTable *_externalPlugins;
}

@property (retain, nonatomic) NSHashTable *externalPlugins;
@property (readonly, weak, nonatomic) HTSLiveEpisode *episode;
@property (readonly, weak, nonatomic) IESLivePlaybackPaidStreamParameterCreator *parameterCreator;
@property (retain, nonatomic) id<IESVSVideoPlayerRouter> videoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)creatorShouldActive:(id)arg0;

- (id)extraTrackParams;
- (void)handlePaidLiveDataMessage:(id)arg0;
- (long long)paidScene;
- (id)externalPlugins;
- (void)setExternalPlugins:(id)arg0;
- (id)parameterCreator;
- (id)customPlugins;
- (void)paidStreamCreate:(unsigned long long)arg0 paidObject:(id)arg1;
- (id)currentPaidStream;
- (void)paidStreamUnmount;
- (id)basicPlugins;
- (id)initWithEpisode:(id)arg0 parameterCreator:(id)arg1 externalPlugins:(id)arg2;
- (void)setVideoPlayer:(id)arg0;
- (id)videoPlayer;
- (void).cxx_destruct;
- (id)allPlugins;
- (id)episode;

@end
