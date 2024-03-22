//
//     Generated by private class-dump
//

@class NSString, AWEMusicCollectionSectionHeaderView, NSArray;

@interface AWEMiniLunaPlaylistSectionViewModel : NSObject <AWEMusicCollectionSectionViewModelProtocol> {
    BOOL _showAddButton;
    id /* block */ _didShowPlaylistBlock;
    id /* block */ _addButtonClickBlock;
    NSArray *_playlistArray;
    long long _totalCount;
    NSString *_title;
    AWEMusicCollectionSectionHeaderView *_headerView;
    NSArray *_cellModelArray;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEMusicCollectionSectionHeaderView *headerView;
@property (retain, nonatomic) NSArray *cellModelArray;
@property (copy, nonatomic) id /* block */ didShowPlaylistBlock;
@property (copy, nonatomic) id /* block */ addButtonClickBlock;
@property (retain, nonatomic) NSArray *playlistArray;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL showAddButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellModelArray;
- (id)cellViewModelArray;
- (id)sectionFooterView;
- (void)setPlaylistArray:(id)arg0;
- (id)playlistArray;
- (void)setDidShowPlaylistBlock:(id /* block */)arg0;
- (void)setAddButtonClickBlock:(id /* block */)arg0;
- (void)setCellModelArray:(id)arg0;
- (id /* block */)didShowPlaylistBlock;
- (id /* block */)addButtonClickBlock;
- (double)sectionHeaderHeight;
- (double)sectionFooterHeight;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg0;
- (void)setHeaderView:(id)arg0;
- (id)title;
- (long long)numberOfRows;
- (id)headerView;
- (long long)totalCount;
- (void)setTitle:(id)arg0;
- (id)sectionHeaderView;
- (BOOL)showAddButton;
- (void)setShowAddButton:(BOOL)arg0;
- (void)setTotalCount:(long long)arg0;

@end