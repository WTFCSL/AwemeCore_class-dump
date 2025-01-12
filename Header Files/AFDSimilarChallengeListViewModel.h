//
//     Generated by private class-dump
//

@class NSString, NSArray, NSError, AFDSimilarChallengeListDataController;

@interface AFDSimilarChallengeListViewModel : NSObject <AFDSimilarChallengeListViewModelProtocol> {
    BOOL _hasMore;
    NSString *_tabName;
    NSString *_challengeName;
    NSString *_challengeId;
    NSString *_trackGroupId;
    NSString *_trackTabId;
    long long _dataState;
    NSArray *_allSimilarChallenges;
    NSError *_error;
    NSString *_logPass;
    AFDSimilarChallengeListDataController *_dataController;
}

@property (retain, nonatomic) AFDSimilarChallengeListDataController *dataController;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *trackGroupId;
@property (copy, nonatomic) NSString *trackTabId;
@property (nonatomic) long long dataState;
@property (copy, nonatomic) NSArray *allSimilarChallenges;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *logPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataState:(long long)arg0;
- (void)setDataController:(id)arg0;
- (id)challengeName;
- (void)setChallengeName:(id)arg0;
- (id)challengeId;
- (void)setChallengeId:(id)arg0;
- (void)loadMore;
- (id)trackGroupId;
- (void)setTrackGroupId:(id)arg0;
- (id)trackTabId;
- (void)setTrackTabId:(id)arg0;
- (void)fetchDataWithCompletion:(id /* block */)arg0;
- (void)updateCurrentSimilarChallengs;
- (id)allSimilarChallenges;
- (void)trackDidClickChallengeCell:(long long)arg0;
- (void)setAllSimilarChallenges:(id)arg0;
- (id)logPass;
- (void)setLogPass:(id)arg0;
- (void).cxx_destruct;
- (void)fetchData;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setError:(id)arg0;
- (id)error;
- (id)dataController;
- (void)setTabName:(id)arg0;
- (id)tabName;
- (long long)dataState;

@end
