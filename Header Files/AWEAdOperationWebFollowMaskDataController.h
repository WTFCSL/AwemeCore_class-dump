//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEAdOperationWebFollowMaskDataController : AWEListDataController {
    NSString *_userID;
    NSArray *_postAwemeList;
}

@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSArray *postAwemeList;

- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)arg0;
- (void)followStatusChanged:(id)arg0;
- (void)setPostAwemeList:(id)arg0;
- (id)postAwemeList;
- (id)initWithUserID:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (id)requestURL;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)refresh:(id /* block */)arg0;

@end