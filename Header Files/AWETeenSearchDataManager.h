//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWETeenSearchDataManager : NSObject {
    NSString *_groupID;
    NSString *_suggestLogId;
    NSString *_searchId;
    NSMutableArray *_wordIDList;
    NSString *_lastWatchVideoID;
}

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *suggestLogId;
@property (copy, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSMutableArray *wordIDList;
@property (retain, nonatomic) NSString *lastWatchVideoID;

+ (id)sharedInstance;

- (id)searchId;
- (void)setSearchId:(id)arg0;
- (void)setLastWatchVideoID:(id)arg0;
- (id)wordIDList;
- (void)setWordIDList:(id)arg0;
- (id)lastWatchVideoID;
- (void)fetchGuessWordsListWithFirst:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)fetchAfterWatchWordsListWithFirst:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)suggestLogId;
- (void)setSuggestLogId:(id)arg0;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;

@end