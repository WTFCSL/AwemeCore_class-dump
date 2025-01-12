//
//     Generated by private class-dump
//

@class CECPublishPrivacyRequestModel;

@interface CECPublishPrivacyDataFetchManger : NSObject {
    CECPublishPrivacyRequestModel *_requestModel;
}

@property (retain, nonatomic) CECPublishPrivacyRequestModel *requestModel;

+ (id)sharedInstance;

- (void)setRequestModel:(id)arg0;
- (void)fetchPublishPrivacyData;
- (long long)defaultSelectedTypeWithMode:(long long)arg0;
- (BOOL)isCloseFriendVisiable;
- (BOOL)isNeededCache:(long long)arg0;
- (id)lastPublishNotesMomentPrivacyKey;
- (id)lastPublishMomentPrivacyKey;
- (BOOL)isFriendVisiable;
- (BOOL)isPartFriendVisiable;
- (BOOL)hasPublishedNewMoment;
- (BOOL)isNeededShow:(long long)arg0;
- (id)defaultmodel;
- (id)arrayNeededCache;
- (id)arrayNeededShow;
- (id)cacheKey;
- (void).cxx_destruct;
- (id)requestModel;

@end
