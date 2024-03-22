//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEChallengeModel, NSNumber;

@interface AWENewChallengePageContext : NSObject {
    BOOL _isHeaderUnfold;
    BOOL _isFromCommentEntrance;
    NSString *_challengeID;
    NSString *_challengeName;
    NSDictionary *_logPassback;
    NSString *_fromGroupId;
    AWEChallengeModel *_containerModel;
    NSNumber *_ugcType;
    NSString *_enterMethod;
    NSString *_previousPage;
    NSString *_hotListParams;
    long long _defaultTab;
}

@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *fromGroupId;
@property (retain, nonatomic) AWEChallengeModel *containerModel;
@property (retain, nonatomic) NSNumber *ugcType;
@property (nonatomic) BOOL isHeaderUnfold;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *hotListParams;
@property (nonatomic) BOOL isFromCommentEntrance;
@property (nonatomic) long long defaultTab;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)setFromGroupId:(id)arg0;
- (id)challengeName;
- (void)setChallengeName:(id)arg0;
- (id)fromGroupId;
- (id)containerModel;
- (void)setContainerModel:(id)arg0;
- (id)ugcType;
- (void)setUgcType:(id)arg0;
- (BOOL)isHeaderUnfold;
- (void)setIsHeaderUnfold:(BOOL)arg0;
- (id)hotListParams;
- (void)setHotListParams:(id)arg0;
- (BOOL)isFromCommentEntrance;
- (void)setIsFromCommentEntrance:(BOOL)arg0;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)challengeID;
- (void)setChallengeID:(id)arg0;
- (long long)defaultTab;
- (void)setDefaultTab:(long long)arg0;

@end
