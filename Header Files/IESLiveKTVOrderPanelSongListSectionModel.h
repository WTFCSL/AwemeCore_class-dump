//
//     Generated by private class-dump
//

@class NSArray;

@interface IESLiveKTVOrderPanelSongListSectionModel : IESLiveKTVOrderPanelBaseSectionModel {
    BOOL _scrollEnable;
    BOOL _noNeedToFetch;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    long long _scrollDirection;
    long long _selectedIndex;
    NSArray *_classArray;
}

@property (copy, nonatomic) NSArray *classArray;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL scrollEnable;
@property (nonatomic) BOOL noNeedToFetch;

- (void)setScrollEnable:(BOOL)arg0;
- (BOOL)scrollEnable;
- (void)refreshModelWithFatherModel:(id)arg0;
- (void)fetchTabArrayWithCompletion:(id /* block */)arg0;
- (BOOL)noNeedToFetch;
- (id)getClassWithCategory:(id)arg0;
- (void)setClassArray:(id)arg0;
- (void)setNoNeedToFetch:(BOOL)arg0;
- (long long)scrollDirection;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg0;
- (unsigned long long)sectionType;
- (void)setScrollDirection:(long long)arg0;
- (long long)selectedIndex;
- (void)setMinimumInteritemSpacing:(double)arg0;
- (void)setMinimumLineSpacing:(double)arg0;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (Class)sectionClass;
- (id)classArray;

@end
