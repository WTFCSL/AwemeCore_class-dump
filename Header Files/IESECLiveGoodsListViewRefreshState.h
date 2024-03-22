//
//     Generated by private class-dump
//

@class NSArray, IESECLiveGoodsListViewRefreshInfo, IESECLiveGoodsListPageModel, NSError;

@interface IESECLiveGoodsListViewRefreshState : NSObject {
    BOOL _hasPreviousPage;
    BOOL _hasNextPage;
    IESECLiveGoodsListViewRefreshInfo *_refreshInfo;
    IESECLiveGoodsListPageModel *_listModel;
    long long _selectedIndex;
    NSArray *_items;
    NSError *_error;
}

@property (retain, nonatomic) IESECLiveGoodsListViewRefreshInfo *refreshInfo;
@property (retain, nonatomic) IESECLiveGoodsListPageModel *listModel;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL hasPreviousPage;
@property (nonatomic) BOOL hasNextPage;
@property (retain, nonatomic) NSError *error;

- (void)setListModel:(id)arg0;
- (id)refreshInfo;
- (void)setRefreshInfo:(id)arg0;
- (BOOL)hasPreviousPage;
- (void)setHasPreviousPage:(BOOL)arg0;
- (void)setHasNextPage:(BOOL)arg0;
- (id)listModel;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setSelectedIndex:(long long)arg0;
- (void)setError:(id)arg0;
- (BOOL)hasNextPage;
- (id)error;
- (long long)selectedIndex;

@end
