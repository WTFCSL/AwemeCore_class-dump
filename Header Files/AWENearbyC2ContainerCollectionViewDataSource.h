//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWENearbyC2ContainerCollectionViewDataSource : NSObject <UICollectionViewDataSource> {
    NSArray *_delegates;
}

@property (copy, nonatomic) NSArray *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSourceDelegateArray:(id)arg0;
- (id)delegates;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setDelegates:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;

@end
