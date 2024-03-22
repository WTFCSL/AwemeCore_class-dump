//
//     Generated by private class-dump
//

@class NSArray;

@interface IESLiveKTVOrderPanelKingSectionModel : IESLiveKTVOrderPanelBaseSectionModel {
    BOOL _hasFetch;
    NSArray *_itemArray;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    long long _scrollDirection;
}

@property (copy, nonatomic) NSArray *itemArray;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) BOOL hasFetch;

- (id)itemArray;
- (void)setItemArray:(id)arg0;
- (void)fetchKingItemArrayWithCompletion:(id /* block */)arg0;
- (BOOL)hasFetch;
- (void)setHasFetch:(BOOL)arg0;
- (long long)scrollDirection;
- (void).cxx_destruct;
- (unsigned long long)sectionType;
- (void)setScrollDirection:(long long)arg0;
- (void)setMinimumInteritemSpacing:(double)arg0;
- (void)setMinimumLineSpacing:(double)arg0;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (Class)sectionClass;

@end
