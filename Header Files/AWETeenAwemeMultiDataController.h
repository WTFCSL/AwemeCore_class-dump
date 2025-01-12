//
//     Generated by private class-dump
//

@class NSArray;

@interface AWETeenAwemeMultiDataController : AWEListDataController {
    id /* block */ _fetchAwemeListBlock;
    NSArray *_itemIDList;
}

@property (copy, nonatomic) NSArray *itemIDList;
@property (copy, nonatomic) id /* block */ fetchAwemeListBlock;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)itemIDList;
- (void)setItemIDList:(id)arg0;
- (void)p_fetchAwemeListWithCompletion:(id /* block */)arg0;
- (void)p_reportAwemeVideoNotTeen:(id)arg0;
- (id)initWithAwemeList:(id)arg0;
- (id)initWithItemIDList:(id)arg0;
- (void)setFetchAwemeListBlock:(id /* block */)arg0;
- (id /* block */)fetchAwemeListBlock;
- (id)initWithItemIDStr:(id)arg0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
