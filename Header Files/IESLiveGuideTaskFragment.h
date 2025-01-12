//
//     Generated by private class-dump
//

@class IESLiveGuideToolBarItem;
@protocol IESLiveGuideToolBarProvider;

@interface IESLiveGuideTaskFragment : IESLiveGuideComponent {
    BOOL _hasTrackShowEvent;
    IESLiveGuideToolBarItem *_taskToolbarItem;
    id<IESLiveGuideToolBarProvider> _guideToolbarProvider;
}

@property (retain, nonatomic) IESLiveGuideToolBarItem *taskToolbarItem;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> guideToolbarProvider;
@property (nonatomic) BOOL hasTrackShowEvent;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentMount;
- (BOOL)hasTrackShowEvent;
- (void)setHasTrackShowEvent:(BOOL)arg0;
- (id)getTrackParamsWithItem:(id)arg0;
- (id)guideToolbarProvider;
- (void)setGuideToolbarProvider:(id)arg0;
- (id)trackClickParams:(id)arg0;
- (id)taskToolbarItem;
- (void)p_trackEventWithEventName:(id)arg0 noticeDot:(BOOL)arg1 taskIds:(id)arg2 source:(id)arg3;
- (void)updateTaskList:(id)arg0;
- (id)p_showToolbarNoticeDotIfNeedWithTaskList:(id)arg0;
- (void)setTaskToolbarItem:(id)arg0;
- (void).cxx_destruct;

@end
