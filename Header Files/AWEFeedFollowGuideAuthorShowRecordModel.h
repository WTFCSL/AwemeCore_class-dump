//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AWEFeedFollowGuideAuthorShowRecordModel : MTLModel {
    BOOL _canShow;
    BOOL _isUpdating;
    NSString *_authorID;
    NSString *_latestUpdateSessionKey;
    NSDate *_lastShowTimeStamp;
    NSString *_lastShowSessionKey;
    long long _showCount;
}

@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) BOOL canShow;
@property (copy, nonatomic) NSString *latestUpdateSessionKey;
@property (retain, nonatomic) NSDate *lastShowTimeStamp;
@property (copy, nonatomic) NSString *lastShowSessionKey;
@property (nonatomic) long long showCount;
@property (nonatomic) BOOL isUpdating;

- (BOOL)canShow;
- (void)setCanShow:(BOOL)arg0;
- (id)lastShowTimeStamp;
- (void)setLastShowTimeStamp:(id)arg0;
- (BOOL)satisfyFrequencyControl;
- (void)updateCanShowStatusWithSessionKey:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)dataTrustworthyWithSessionKey:(id)arg0;
- (BOOL)isTimeStampOutdated;
- (void)countShownForAuthorWithSessionKey:(id)arg0;
- (id)latestUpdateSessionKey;
- (void)setLatestUpdateSessionKey:(id)arg0;
- (void)setLastShowSessionKey:(id)arg0;
- (id)lastShowSessionKey;
- (BOOL)isUpdating;
- (void).cxx_destruct;
- (void)clearData;
- (void)setIsUpdating:(BOOL)arg0;
- (long long)showCount;
- (void)setShowCount:(long long)arg0;
- (id)initWithAuthor:(id)arg0;
- (id)authorID;
- (void)setAuthorID:(id)arg0;

@end