//
//     Generated by private class-dump
//

@class NSString, BDUGLuckyPageReleasePerPageStrategyModel, BDUGLuckyPageReleaseManager, NSObject;
@protocol OS_dispatch_source, BDXContainerProtocol;

@interface BDUGLuckyPageReleasePageMonitor : NSObject {
    BOOL _containerHidden;
    BOOL _containerRecycled;
    BOOL _memoryMonitorUsed;
    NSString *_path;
    BDUGLuckyPageReleasePerPageStrategyModel *_strategy;
    id<BDXContainerProtocol> _container;
    BDUGLuckyPageReleaseManager *_parentManager;
    NSObject<OS_dispatch_source> *_timedRemoveTimer;
    unsigned long long _timedRemoveTimerCounter;
}

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) BDUGLuckyPageReleasePerPageStrategyModel *strategy;
@property (weak, nonatomic) id<BDXContainerProtocol> container;
@property (weak, nonatomic) BDUGLuckyPageReleaseManager *parentManager;
@property (nonatomic) BOOL containerHidden;
@property (nonatomic) BOOL containerRecycled;
@property (nonatomic) BOOL memoryMonitorUsed;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timedRemoveTimer;
@property (nonatomic) unsigned long long timedRemoveTimerCounter;

- (id)viewControllerOfResponder:(id)arg0;
- (void)stopPageHideStrategy;
- (id)initWithPath:(id)arg0 strategy:(id)arg1 container:(id)arg2 parent:(id)arg3;
- (void)startPageHideStrategy;
- (void)triggerMemoryWarningStrategyWithStrategy:(id)arg0 availableMemoryMB:(float)arg1;
- (void)triggerOtherPageOpenStrategyWithPage:(id)arg0 strategy:(id)arg1 availableMemoryMB:(float)arg2;
- (void)triggerOtherPageAppearStrategyWithPageName:(id)arg0 page:(void *)arg1 strategy:(id)arg2 availableMemoryMB:(float)arg3;
- (void)updateStrategy:(id)arg0;
- (void)triggerPageHideMemoryStrategyWithMemoryStatus:(const void *)arg0;
- (void)startMemoryMonitor;
- (void)stopMemoryMonitor;
- (BOOL)containerHidden;
- (void)removeContainerKitViewWithEventParams:(id)arg0 ignoreHidden:(BOOL)arg1;
- (void)setContainerHidden:(BOOL)arg0;
- (BOOL)isInTopVCInNavigationControllerWithVC:(id)arg0;
- (void)restartTimedRemoveTimerWithInterval:(double)arg0;
- (void)setContainerRecycled:(BOOL)arg0;
- (void)cancelTimedRemoveTimer;
- (void)triggerPageHideTimedStrategyWithDelay:(double)arg0;
- (unsigned long long)timedRemoveTimerCounter;
- (void)setTimedRemoveTimerCounter:(unsigned long long)arg0;
- (id)timedRemoveTimer;
- (void)setTimedRemoveTimer:(id)arg0;
- (BOOL)isTopVCInNavigationControllerWithVC:(id)arg0;
- (BOOL)isVC:(id)arg0 childVCOf:(id)arg1;
- (BOOL)memoryMonitorUsed;
- (void)setMemoryMonitorUsed:(BOOL)arg0;
- (BOOL)containerRecycled;
- (id)container;
- (void)setPath:(id)arg0;
- (id)strategy;
- (id)init;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)path;
- (id)parentManager;
- (void)setParentManager:(id)arg0;
- (void)dealloc;
- (void)setStrategy:(id)arg0;

@end
