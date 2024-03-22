//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol IESLiveKTVOrderPanelProtocol;

@interface IESLiveKTVOrderPanelCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {
    long long _selectedIndex;
    NSArray *_viewModelArray;
    id<IESLiveKTVOrderPanelProtocol> _panelModel;
}

@property (copy, nonatomic) NSArray *viewModelArray;
@property (weak, nonatomic) id<IESLiveKTVOrderPanelProtocol> panelModel;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewModelArray;
- (void)setViewModelArray:(id)arg0;
- (id)panelModel;
- (void)setPanelModel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 collectionViewLayout:(id)arg1 viewModelArray:(id)arg2 panelModel:(id)arg3;
- (void)exitSearchMode;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setSelectedIndex:(long long)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)scrollToTop;
- (void)performUpdate;
- (long long)selectedIndex;
- (void)setupView;

@end
