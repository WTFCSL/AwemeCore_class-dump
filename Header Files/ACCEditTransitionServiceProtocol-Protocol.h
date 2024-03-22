//
//     Generated by private class-dump
//

@class NSString, UIView;

@protocol ACCEditTransitionServiceProtocol <NSObject>

@property (retain, nonatomic) UIView *beforeTransitionSnapshotView;
@property (retain, nonatomic) UIView *avoidShowBgColorViewWhenDisapper;
@property (readonly, copy, nonatomic) NSString *previousPage;

- (void)presentViewController:(id)arg0 completion:(id /* block */)arg1;
- (void)presentViewController:(id)arg0 customTransitionDelegate:(id)arg1 completion:(id /* block */)arg2;
- (id)beforeTransitionSnapshotView;
- (void)setBeforeTransitionSnapshotView:(id)arg0;
- (id)avoidShowBgColorViewWhenDisapper;
- (void)setAvoidShowBgColorViewWhenDisapper:(id)arg0;
- (void)unregisterObserver:(id)arg0;
- (id)initWithContainerViewController:(id)arg0;
- (void)registerObserver:(id)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)dismissViewController:(id)arg0 completion:(id /* block */)arg1;

@end
