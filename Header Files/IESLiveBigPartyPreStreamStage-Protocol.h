//
//     Generated by private class-dump
//

@class IESLiveLinkmicRoomEnterTracker;
@protocol IESLiveInteractionAsyncResourceLoader, IESLiveBigPartyPreStreamStageDataSource;

@protocol IESLiveBigPartyPreStreamStage <NSObject>

@property (weak, nonatomic) id<IESLiveBigPartyPreStreamStageDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveInteractionAsyncResourceLoader> asyncResourceLoader;
@property (weak, nonatomic) IESLiveLinkmicRoomEnterTracker *roomEnterTracker;
@property (copy, nonatomic) id /* block */ firstRenderBlock;
@property (copy, nonatomic) id /* block */ layoutPlayerBlock;

- (id /* block */)firstRenderBlock;
- (void)setFirstRenderBlock:(id /* block */)arg0;
- (void)layoutPlayerView;
- (id)roomEnterTracker;
- (void)setRoomEnterTracker:(id)arg0;
- (void)setAsyncResourceLoader:(id)arg0;
- (id)asyncResourceLoader;
- (BOOL)needCustomPlayerFrame;
- (void)updateWithList:(id)arg0;
- (void)willLoad;
- (void)updateSinger:(id)arg0;
- (void)customPlayerPropertiesIfNeeded;
- (void)reloadCurrentLayout;
- (void)upDateWithmicPostionItem:(id)arg0;
- (void)setLayoutPlayerBlock:(id /* block */)arg0;
- (id /* block */)layoutPlayerBlock;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (struct CGSize { double x0; double x1; })placeholderSize;
- (void)willUnload;

@optional

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })customPlayFrame;
- (void)updateSEIForVideoKTV:(id)arg0;
- (void)updateWithSEIStyle:(id)arg0;

@end
