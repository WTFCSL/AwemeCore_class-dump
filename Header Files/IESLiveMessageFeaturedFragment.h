//
//     Generated by private class-dump
//

@class NSArray, IESLivePSComponentConfigModel, IESLiveMessageFeaturedAreaView, NSString;

@interface IESLiveMessageFeaturedFragment : IESLiveRoomComponent <IESLiveInteractAction, HTSLiveMessageSubscriber, IESLiveMessageFeaturedRouter, IESLiveMessageFeaturedAreaViewDelegate, IESLiveSocialInteractAction> {
    BOOL _enableMessageFeatured;
    BOOL _needLoadMessageFeaturedWhenEnable;
    BOOL _messageListDidShow;
    IESLivePSComponentConfigModel *_messageFeaturedComponentConfig;
    IESLiveMessageFeaturedAreaView *_messageFeaturedView;
    NSArray *_nextShowNodes;
    NSString *_messageFeaturedSettingUrl;
    long long _needCachedCountWhenHidden;
    long long _needCachedBufferCountWhenSettingChanged;
}

@property (nonatomic) BOOL enableMessageFeatured;
@property (nonatomic) BOOL needLoadMessageFeaturedWhenEnable;
@property (nonatomic) BOOL messageListDidShow;
@property (retain, nonatomic) IESLivePSComponentConfigModel *messageFeaturedComponentConfig;
@property (retain, nonatomic) IESLiveMessageFeaturedAreaView *messageFeaturedView;
@property (copy, nonatomic) NSArray *nextShowNodes;
@property (copy, nonatomic) NSString *messageFeaturedSettingUrl;
@property (nonatomic) long long needCachedCountWhenHidden;
@property (nonatomic) long long needCachedBufferCountWhenSettingChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)startInteractiveWithScene:(unsigned long long)arg0;
- (void)endInteractiveWithScene:(unsigned long long)arg0;
- (void)currentLayoutDidChangedFrom:(id)arg0 to:(id)arg1;
- (BOOL)enableMessageFeatured;
- (void)messageListFirstFrameDidShow;
- (void)showMessageFeaturedActionSheet;
- (void)setEnableMessageFeatured:(BOOL)arg0;
- (void)setMessageFeaturedSettingUrl:(id)arg0;
- (void)setNeedCachedBufferCountWhenSettingChanged:(long long)arg0;
- (void)setNeedCachedCountWhenHidden:(long long)arg0;
- (void)showMessageFeaturedArea;
- (void)addToolbarItem;
- (BOOL)showMessageFeaturedComponentWithReason:(id)arg0;
- (BOOL)hideMessageFeaturedComponentWithReason:(id)arg0;
- (BOOL)updateMessageFeaturedConfig;
- (id)messageFeaturedView;
- (void)setNeedLoadMessageFeaturedWhenEnable:(BOOL)arg0;
- (BOOL)messageListDidShow;
- (id)messageFeaturedComponentConfig;
- (void)trackMessageFeaturedEvent:(id)arg0 extraParams:(id)arg1;
- (void)saveCurrentShowingNodesWhenClose;
- (void)setMessageFeaturedView:(id)arg0;
- (long long)needCachedBufferCountWhenSettingChanged;
- (void)setMessageListDidShow:(BOOL)arg0;
- (BOOL)needLoadMessageFeaturedWhenEnable;
- (void)updateMessageFeaturedEnableStatus:(BOOL)arg0;
- (void)openMessageFeaturedSettingLynxViewWithSource:(id)arg0;
- (id)nextShowNodes;
- (void)setNextShowNodes:(id)arg0;
- (long long)needCachedCountWhenHidden;
- (void)clickMessageFeaturedToolbarItem;
- (id)messageFeaturedSettingUrl;
- (void)setupMessageFeaturedAreaView:(id)arg0;
- (void)setMessageFeaturedComponentConfig:(id)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end
