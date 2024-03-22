//
//     Generated by private class-dump
//

@class NSString, IGListAdapter, UICollectionView;

@interface IESECWinMainScrollService : IESECContextService <IESECWinMainScrollService> {
    double _offsetY;
    long long _scrollStatus;
    double _listOffsetY;
    id /* block */ _scrollToTopBlock;
    id /* block */ _scrollToLiveBlock;
    UICollectionView *_collectionView;
    IGListAdapter *_adapter;
    double _startOffset;
}

@property (nonatomic) double startOffset;
@property (nonatomic) double offsetY;
@property (nonatomic) long long scrollStatus;
@property (nonatomic) double listOffsetY;
@property (copy, nonatomic) id /* block */ scrollToTopBlock;
@property (copy, nonatomic) id /* block */ scrollToLiveBlock;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) IGListAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)scrollStatus;
- (void)setScrollStatus:(long long)arg0;
- (double)listOffsetY;
- (void)setListOffsetY:(double)arg0;
- (id /* block */)scrollToTopBlock;
- (void)setScrollToTopBlock:(id /* block */)arg0;
- (id /* block */)scrollToLiveBlock;
- (void)setScrollToLiveBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (double)startOffset;
- (void)setStartOffset:(double)arg0;
- (id)adapter;
- (void)setAdapter:(id)arg0;
- (double)offsetY;
- (void)setOffsetY:(double)arg0;

@end