//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface ACCPropPickerViewDataSource : NSObject <UICollectionViewDataSource> {
    NSArray *_items;
}

@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCommonStyleForCell:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setItems:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)items;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;

@end
