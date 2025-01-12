//
//     Generated by private class-dump
//

@class AWEAnchorAdditionListModel;

@interface AWEAnchorAdditionSearchDataController : AWEListDataController {
    long long _anchorType;
    long long _page;
    AWEAnchorAdditionListModel *_listModel;
}

@property (nonatomic) long long anchorType;
@property (nonatomic) long long page;
@property (retain, nonatomic) AWEAnchorAdditionListModel *listModel;

- (void)setListModel:(id)arg0;
- (id)initWithAnchorBusinessType:(long long)arg0;
- (void)fetchSearchGameDataSourceWithKeyword:(id)arg0 page:(long long)arg1 completion:(id /* block */)arg2;
- (void)refreshWithKeyword:(id)arg0 completion:(id /* block */)arg1;
- (void)loadMoreWithKeyword:(id)arg0 completion:(id /* block */)arg1;
- (id)listModel;
- (long long)anchorType;
- (long long)page;
- (void).cxx_destruct;
- (void)setPage:(long long)arg0;
- (void)setAnchorType:(long long)arg0;

@end
