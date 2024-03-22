//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableArray, IESLiveEZDanmakuReuseViewPool;
@protocol IESLiveEZDanmakuDispatcherDelegate;

@interface IESLiveEZDanmakuDispatcher : NSObject <IESLiveEZDanmakuSpiritDelegate, IESLiveEZDanmakuDispatcherProtocol> {
    NSArray *_activatedSpirits;
    id<IESLiveEZDanmakuDispatcherDelegate> _delegate;
    NSMutableArray *_queuedSpirits;
    NSMutableArray *_mutableActivatedSipirts;
    IESLiveEZDanmakuReuseViewPool *_viewPool;
}

@property (retain, nonatomic) NSMutableArray *queuedSpirits;
@property (retain, nonatomic) NSMutableArray *mutableActivatedSipirts;
@property (retain, nonatomic) IESLiveEZDanmakuReuseViewPool *viewPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveEZDanmakuDispatcherDelegate> delegate;

- (void)fragmentOrientationChanged:(long long)arg0;
- (void)updateWithEZDanamkuSettings:(id)arg0;
- (void)deactivateAllSpirits;
- (id)queuedSpirits;
- (id)mutableActivatedSipirts;
- (void)danmakuSpirit:(id)arg0 stateDidChange:(long long)arg1;
- (id)activatedSpirits;
- (void)addEZDanmakuSiprit:(id)arg0;
- (void)dispatchSpirits;
- (void)assembleReuseViewPool:(id)arg0;
- (void)clearQueuedSpirits;
- (void)setQueuedSpirits:(id)arg0;
- (void)setMutableActivatedSipirts:(id)arg0;
- (void)setViewPool:(id)arg0;
- (void)p_dispatchSpirit:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)viewPool;

@end
