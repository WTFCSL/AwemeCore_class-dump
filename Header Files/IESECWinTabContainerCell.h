//
//     Generated by private class-dump
//

@class NSString, IESECWinTabContainerObject, IESECSlidingTabContainerView;
@protocol IESECWinTabContainerCellContainerViewDelegate;

@interface IESECWinTabContainerCell : UICollectionViewCell <IESECTabContainerDataSource, IESECTabContainerDelegate, UIScrollViewDelegate> {
    IESECWinTabContainerObject *_object;
    IESECSlidingTabContainerView *_containerView;
    id<IESECWinTabContainerCellContainerViewDelegate> _cellContainerViewDelegate;
}

@property (retain, nonatomic) IESECSlidingTabContainerView *containerView;
@property (weak, nonatomic) id<IESECWinTabContainerCellContainerViewDelegate> cellContainerViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabContainer:(id)arg0 tabViewElementForIndex:(long long)arg1;
- (long long)numberOfTabViewElementsInTabContainer:(id)arg0;
- (void)tabContainer:(id)arg0 willMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)tabContainer:(id)arg0 cancelMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)tabContainer:(id)arg0 didMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)bindObject:(id)arg0;
- (id)cellContainerViewDelegate;
- (void)setCellContainerViewDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setupUI;

@end