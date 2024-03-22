//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AFDFullPageRecommendWordViewModel : NSObject {
    BOOL _isSearchWordAvailable;
    NSString *_searchWordResultSchema;
    NSDictionary *_logExtra;
    NSString *_searchWords;
    NSString *_recommendWord;
    NSString *_enterFrom;
    NSString *_trackImprId;
    NSString *_trackGroupId;
    NSString *_trackAuthorId;
}

@property (retain, nonatomic) NSString *searchWords;
@property (retain, nonatomic) NSString *recommendWord;
@property (nonatomic) BOOL isSearchWordAvailable;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *trackImprId;
@property (copy, nonatomic) NSString *trackGroupId;
@property (copy, nonatomic) NSString *trackAuthorId;
@property (copy, nonatomic) NSString *searchWordResultSchema;
@property (copy, nonatomic) NSDictionary *logExtra;

- (void)setEnterFrom:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)enterFrom;
- (BOOL)configSearchWordWithAnchorModel:(id)arg0;
- (void)trackSearchWordShowRecommend;
- (void)setTrackAuthorId:(id)arg0;
- (BOOL)isSearchWordAvailable;
- (id)searchWordResultSchema;
- (void)trackSearchWordShowComment;
- (void)updateDataWithModel:(id)arg0 refer:(id)arg1;
- (id)trackGroupId;
- (void)setTrackGroupId:(id)arg0;
- (id)recommendWord;
- (void)setSearchWords:(id)arg0;
- (id)searchWords;
- (void)setTrackImprId:(id)arg0;
- (BOOL)isFollowStatusFriends:(id)arg0;
- (void)setIsSearchWordAvailable:(BOOL)arg0;
- (id)trackAuthorId;
- (id)trackImprId;
- (void)setRecommendWord:(id)arg0;
- (void)trackSearchWordClick;
- (void)setSearchWordResultSchema:(id)arg0;
- (void).cxx_destruct;

@end
