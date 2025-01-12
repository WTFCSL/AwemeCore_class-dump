//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPadLeftSideBarAdapter : NSObject <AWEPadLeftSideBarAdapter>

@property (readonly, nonatomic) BOOL enable;
@property (readonly, nonatomic) double leftSideBarWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (id)getAdapter;

- (double)leftSideBarWidth;
- (void)performNormalExecution:(id /* block */)arg0;
- (void)layoutSideBarTransition:(id)arg0 originX:(double)arg1;
- (void)setupBottomBarView;
- (void)updateBottomBarView:(BOOL)arg0;
- (void)updateBottomBarViewAfterRotateTransition;
- (BOOL)enable;
- (id)weakTarget;

@end
