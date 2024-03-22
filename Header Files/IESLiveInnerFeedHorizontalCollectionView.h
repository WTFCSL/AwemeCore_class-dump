//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveInnerFeedHorizontalCollectionView : UICollectionView <UIGestureRecognizerDelegate> {
    BOOL _tabViewShow;
    int _tabTriggerMethod;
}

@property (nonatomic) int tabTriggerMethod;
@property (nonatomic) BOOL tabViewShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTabTriggerMethod:(int)arg0;
- (void)setTabViewShow:(BOOL)arg0;
- (int)tabTriggerMethod;
- (BOOL)tabViewShow;
- (void)updateTabViewShow:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 collectionViewLayout:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;

@end