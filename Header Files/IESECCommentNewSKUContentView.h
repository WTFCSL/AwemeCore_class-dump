//
//     Generated by private class-dump
//

@class NSString, IGListAdapter, IESECSKUContentViewModel, UICollectionView;
@protocol IESECCommentNewSKUContentViewDelegate;

@interface IESECCommentNewSKUContentView : UIView <IGListAdapterDataSource> {
    IESECSKUContentViewModel *_viewModel;
    id<IESECCommentNewSKUContentViewDelegate> _delegate;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) IESECSKUContentViewModel *viewModel;
@property (weak, nonatomic) id<IESECCommentNewSKUContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)arg0;
- (id)listAdapter:(id)arg0 sectionControllerForObject:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg0;
- (id)listAdapter;
- (id)mainCollection;
- (void)setListAdapter:(id)arg0;
- (void)didSelectSKUItem;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)reloadView;

@end
