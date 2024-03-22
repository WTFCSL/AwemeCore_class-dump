//
//     Generated by private class-dump
//

@class NSString, IESLiveBattleDrawPropAnimationQueue;

@interface IESLiveBattleDrawViewModel : NSObject <HTSLiveMessageSubscriber> {
    BOOL _openBattleDraw;
    IESLiveBattleDrawPropAnimationQueue *_drawQueue;
}

@property (retain, nonatomic) IESLiveBattleDrawPropAnimationQueue *drawQueue;
@property (nonatomic) BOOL openBattleDraw;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)arg0;
- (void)clearAllNodes;
- (BOOL)openBattleDraw;
- (BOOL)checkMessageIsVaild:(id)arg0;
- (id)drawQueue;
- (void)setDrawQueue:(id)arg0;
- (void)setOpenBattleDraw:(BOOL)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end