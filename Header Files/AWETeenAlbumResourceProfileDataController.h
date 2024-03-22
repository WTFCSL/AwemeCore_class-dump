//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWETeenAlbumResourceProfileDataController : AWEListDataController {
    NSString *_title;
    NSString *_introduction;
    AWEURLModel *_cover;
    NSString *_resourceID;
    unsigned long long _cursor;
    NSString *_pageToken;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *introduction;
@property (retain, nonatomic) AWEURLModel *cover;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) unsigned long long cursor;
@property (copy, nonatomic) NSString *pageToken;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)cover;
- (void)setCover:(id)arg0;
- (id)introduction;
- (void)setIntroduction:(id)arg0;
- (id)pageToken;
- (void)setPageToken:(id)arg0;
- (id)initWithResourceID:(id)arg0;
- (void)p_fetchWithPullType:(long long)arg0 completion:(id /* block */)arg1;
- (unsigned long long)cursor;
- (void)setResourceID:(id)arg0;
- (void).cxx_destruct;
- (id)resourceID;
- (id)title;
- (void)setCursor:(unsigned long long)arg0;
- (void)setTitle:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
