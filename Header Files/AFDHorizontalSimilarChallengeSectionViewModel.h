//
//     Generated by private class-dump
//

@class AFDSimilarChallengeListDataController, NSString, NSArray;

@interface AFDHorizontalSimilarChallengeSectionViewModel : AWEBaseListSectionViewModel <AFDHorizontalSimilarChallengeViewModelProtocol> {
    BOOL _isFavourite;
    NSString *_challengeId;
    NSString *_challengeName;
    NSString *_trackGroupId;
    NSArray *_similarChallenges;
    AFDSimilarChallengeListDataController *_dataController;
}

@property (retain, nonatomic) AFDSimilarChallengeListDataController *dataController;
@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *trackGroupId;
@property (copy, nonatomic) NSArray *similarChallenges;
@property (nonatomic) BOOL isFavourite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataController:(id)arg0;
- (id)challengeName;
- (void)setChallengeName:(id)arg0;
- (id)challengeId;
- (void)setChallengeId:(id)arg0;
- (id)trackGroupId;
- (void)setTrackGroupId:(id)arg0;
- (void)setIsFavourite:(BOOL)arg0;
- (id)similarChallenges;
- (void)setSimilarChallenges:(id)arg0;
- (void)updateCurrentSimilarChallengs;
- (BOOL)isFavourite;
- (void).cxx_destruct;
- (void)show;
- (void)fetchData;
- (id)dataController;

@end