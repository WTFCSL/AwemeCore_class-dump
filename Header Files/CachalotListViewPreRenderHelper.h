//
//     Generated by private class-dump
//

@class NSString, CachalotMainLoopIdleTaskManager;
@protocol CachalotListViewPreRenderHelperDelegate;

@interface CachalotListViewPreRenderHelper : NSObject {
    BOOL _shutDown;
    long long _preRenderCountBefore;
    long long _preRenderCountAfter;
    NSString *_sceneName;
    CachalotMainLoopIdleTaskManager *_taskManager;
    id<CachalotListViewPreRenderHelperDelegate> _delegate;
    struct _NSRange { unsigned long long location; unsigned long long length; } _renderRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _leadingPreRenderRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _trailingPreRenderRange;
}

@property (retain, nonatomic) CachalotMainLoopIdleTaskManager *taskManager;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } renderRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } leadingPreRenderRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } trailingPreRenderRange;
@property (weak, nonatomic) id<CachalotListViewPreRenderHelperDelegate> delegate;
@property (nonatomic) long long preRenderCountBefore;
@property (nonatomic) long long preRenderCountAfter;
@property (nonatomic) BOOL shutDown;
@property (copy, nonatomic) NSString *sceneName;
@property (readonly, nonatomic) BOOL enabled;

- (id)initWithDelegate:(id)arg0 taskManager:(id)arg1;
- (BOOL)p_enabled;
- (void)p_updateRenderRangeForBeginDisplay:(long long)arg0 totalCount:(long long)arg1;
- (void)p_updateRenderRangeForEndDisplay:(long long)arg0 totalCount:(long long)arg1;
- (id)p_visibleIndexes;
- (void)p_updatePreRenderRange:(long long)arg0;
- (long long)preRenderCountBefore;
- (long long)preRenderCountAfter;
- (void)refreshPreRenderStatus:(long long)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })leadingPreRenderRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })trailingPreRenderRange;
- (void)setLeadingPreRenderRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)setTrailingPreRenderRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)p_triggerPreRender:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 currentLeading:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 lastLeading:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 currentTrailing:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg3 lastTrailing:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg4;
- (id)p_indexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 butNotInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)p_handlePreRenderForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)p_cancelPreRenderAtIndexes:(id)arg0;
- (void)p_cancelPreRenderForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)p_triggerCacheAutoCleaning;
- (void)p_handlePreRenderAtIndex:(long long)arg0;
- (void)p_cancelPreRenderAtIndex:(long long)arg0;
- (void)beginDisplayAtIndex:(long long)arg0 totalCount:(long long)arg1;
- (void)endDisplayAtIndex:(long long)arg0 totalCount:(long long)arg1;
- (void)setShutDown:(BOOL)arg0;
- (void)setPreRenderCountBefore:(long long)arg0;
- (void)setPreRenderCountAfter:(long long)arg0;
- (id)taskManager;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg0;
- (BOOL)shutDown;
- (id)delegate;
- (id)sceneName;
- (void)setDelegate:(id)arg0;
- (void)setTaskManager:(id)arg0;
- (void)setSceneName:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })renderRange;
- (void)setRenderRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;

@end