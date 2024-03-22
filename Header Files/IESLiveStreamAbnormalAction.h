//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, IESLiveStreamAbnormalView;
@protocol IESLiveStreamAbnormalActionDispatcher, IESLivePlayerProtocol;

@interface IESLiveStreamAbnormalAction : NSObject <IESLiveSEIListener, IESLiveStreamAbnormalActionProtocol> {
    BOOL isShow;
    BOOL _lastMuted;
    id<IESLivePlayerProtocol> _player;
    IESLiveStreamAbnormalView *_streamAbnormalView;
    NSMutableSet *_showingSourceSet;
    id<IESLiveStreamAbnormalActionDispatcher> _abnormalActionDispatcher;
    struct CGSize { double width; double height; } _lastContainerViewSize;
}

@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) IESLiveStreamAbnormalView *streamAbnormalView;
@property (retain, nonatomic) NSMutableSet *showingSourceSet;
@property (nonatomic) struct CGSize { double width; double height; } lastContainerViewSize;
@property (nonatomic) BOOL lastMuted;
@property (retain, nonatomic) id<IESLiveStreamAbnormalActionDispatcher> abnormalActionDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isShow;

- (void)didSetAttachingDIContext;
- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg0;
- (void)updateStreamAbnormalView:(id)arg0 shouldShow:(BOOL)arg1 source:(unsigned long long)arg2;
- (void)updateStreamAbnormalView:(id)arg0 shouldShow:(BOOL)arg1 source:(unsigned long long)arg2 superview:(id)arg3;
- (void)removeStreamAbnormalViewForce;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)updateStreamAbnormalViewLayout;
- (void)resetStreamAbnormalViewWhenStart;
- (id)showingSourceSet;
- (id)abnormalActionDispatcher;
- (void)updateStreamAbnormalView:(BOOL)arg0 source:(unsigned long long)arg1;
- (void)updateStreamAbnormalView:(BOOL)arg0 source:(unsigned long long)arg1 superview:(id)arg2;
- (void)updateAbnormalAlogInfo:(id)arg0 shouldShow:(BOOL)arg1 source:(unsigned long long)arg2;
- (id)streamAbnormalView;
- (void)setLastContainerViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setStreamAbnormalView:(id)arg0;
- (BOOL)lastMuted;
- (struct CGSize { double x0; double x1; })lastContainerViewSize;
- (id)abnormalSoureDescription:(unsigned long long)arg0;
- (void)setShowingSourceSet:(id)arg0;
- (void)setLastMuted:(BOOL)arg0;
- (void)setAbnormalActionDispatcher:(id)arg0;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg0;
- (void)setPlayer:(id)arg0;
- (id)player;

@end
