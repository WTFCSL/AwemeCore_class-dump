//
//     Generated by private class-dump
//

@class __begin_, NSMutableDictionary, IESECShopProductsPlayableTask, UICollectionView, __end_cap_, NSTimer, __end_;
@protocol IESECShopProductsPlayableManagerDelegate, IESECShopProductsPlayableList;

@interface IESECShopProductsPlayableManager : NSObject {
    NSMutableDictionary *_userInfos;
    id<IESECShopProductsPlayableList> _playableList;
    IESECShopProductsPlayableTask *_currentTask;
    struct deque<NSIndexPath *, std::allocator<NSIndexPath *>> { struct __split_buffer<NSIndexPath *__strong *, std::allocator<NSIndexPath *__strong *>> { __begin_ ***__first_; __end_ ***x0; __end_cap_ ***x1; struct __compressed_pair<NSIndexPath *__strong **, std::allocator<NSIndexPath *__strong *>> { id **__value_; } x2; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<NSIndexPath *>> { unsigned long long __value_; } __size_; } _playableQueue;
    BOOL _isActivated;
    NSTimer *_timer;
    UICollectionView *_collectionView;
    id<IESECShopProductsPlayableManagerDelegate> _delegate;
    unsigned long long _strategy;
    double _stationaryTime;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<IESECShopProductsPlayableManagerDelegate> delegate;
@property (nonatomic) unsigned long long strategy;
@property (nonatomic) double stationaryTime;
@property (readonly, nonatomic) IESECShopProductsPlayableTask *currentTask;

- (void)cancelCurrentTask;
- (id)initWithPlayableList:(id)arg0;
- (void)setStationaryTime:(double)arg0;
- (void)updateVisibleArea;
- (void)playNextPlayable;
- (id)taskAtIndexPath:(id)arg0;
- (void)playAtIndexPath:(id)arg0;
- (double)stationaryTime;
- (unsigned long long)strategy;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (id)currentTask;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (id).cxx_construct;
- (void)setStrategy:(unsigned long long)arg0;
- (id)sortedIndexPathsForVisibleItems;

@end
