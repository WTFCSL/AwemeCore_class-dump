//
//     Generated by private class-dump
//

@class NSTimer, NSString;

@interface AWEMemoriesLocalImageSectionController : AWEBaseListSectionController <AWEMemoriesPlayerSectionControllerProtocol> {
    BOOL _isActive;
    NSTimer *_timer;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)sectionDidEndDisplayingCell:(id)arg0 index:(long long)arg1;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)viewControllerWillAppear:(BOOL)arg0 isBeingPresented:(BOOL)arg1 isMovingToParentViewController:(BOOL)arg2;
- (void)p_startTimer;
- (void)playSection;
- (void)pauseSection;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (Class)cellClass;
- (void)setTimer:(id)arg0;
- (BOOL)isActive;
- (void)dealloc;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)timerAction;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)restartTimer;

@end
