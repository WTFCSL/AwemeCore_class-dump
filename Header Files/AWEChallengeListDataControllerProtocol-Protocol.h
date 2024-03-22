//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@protocol AWEChallengeListDataControllerProtocol <NSObject>

@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *hashtagName;
@property (copy, nonatomic) NSString *awemeIDToInsert;
@property (nonatomic) unsigned long long sortType;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSMutableArray *adFilteredDataSource;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) unsigned long long lastVisitTime;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long initFetchCount;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (BOOL)isCommerce;
- (void)setHashtagName:(id)arg0;
- (void)setIsCommerce:(BOOL)arg0;
- (void)setAdFilteredDataSource:(id)arg0;
- (id)adFilteredDataSource;
- (unsigned long long)initFetchCount;
- (id)awemeIDToInsert;
- (long long)convertIndexToOrigin:(long long)arg0;
- (void)setAwemeIDToInsert:(id)arg0;
- (void)setLastVisitTime:(unsigned long long)arg0;
- (void)setInitFetchCount:(unsigned long long)arg0;
- (void)setSourceType:(unsigned long long)arg0;
- (unsigned long long)sourceType;
- (void)resetData;
- (unsigned long long)lastVisitTime;
- (unsigned long long)sortType;
- (void)setSortType:(unsigned long long)arg0;
- (id)hashtagName;
- (id)challengeID;
- (void)setChallengeID:(id)arg0;

@optional

- (void)preloadWithDataSource:(id)arg0;

@end
