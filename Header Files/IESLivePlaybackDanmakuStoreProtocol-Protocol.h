//
//     Generated by private class-dump
//

@class HTSEventContext, RACSubject, IESLivePlaybackComponentContext, HTSLiveEpisode;

@protocol IESLivePlaybackDanmakuStoreProtocol <NSObject>

@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) RACSubject *danmakuAuthChange;
@property (nonatomic) BOOL danmakuAuthEnabled;
@property (nonatomic) BOOL enableWelcomeMsg;
@property (readonly, nonatomic) HTSLiveEpisode *itemRoomModel;
@property (readonly, nonatomic) BOOL portraitEpisode;

@optional

- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)setEventContext:(id)arg0;
- (void)setDanmakuAuthEnabled:(BOOL)arg0;
- (void)setEnableWelcomeMsg:(BOOL)arg0;
- (id)danmakuAuthChange;
- (void)updateVideoRoom:(id)arg0;
- (void)trackDanmakuShowWithNode:(id)arg0;
- (void)trackDanmakuClickWithNode:(id)arg0;
- (void)setDanmakuAuthChange:(id)arg0;
- (BOOL)danmakuAuthEnabled;
- (BOOL)enableWelcomeMsg;
- (id)itemRoomModel;
- (BOOL)portraitEpisode;
- (id)eventContext;

@end
