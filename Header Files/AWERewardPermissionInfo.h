//
//     Generated by private class-dump
//

@class NSString;

@interface AWERewardPermissionInfo : MTLModel <MTLJSONSerializing> {
    BOOL _isClickRecently;
    BOOL _isFiftyAuthorStableFans;
    BOOL _isIronFansInAwemePost;
    BOOL _exitAdmireInAwemePost;
    BOOL _authorCanAdmire;
    long long _rewardTabAuthStatus;
    long long _rewardBtnAuthStatus;
    long long _rewardBtnStatus;
    long long _rewardIconAuthStatus;
}

@property (nonatomic) long long rewardTabAuthStatus;
@property (nonatomic) long long rewardBtnAuthStatus;
@property (nonatomic) long long rewardBtnStatus;
@property (nonatomic) long long rewardIconAuthStatus;
@property (nonatomic) BOOL isClickRecently;
@property (nonatomic) BOOL isFiftyAuthorStableFans;
@property (nonatomic) BOOL isIronFansInAwemePost;
@property (nonatomic) BOOL exitAdmireInAwemePost;
@property (nonatomic) BOOL authorCanAdmire;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)rewardTabAuthStatus;
- (void)setRewardTabAuthStatus:(long long)arg0;
- (long long)rewardBtnAuthStatus;
- (void)setRewardBtnAuthStatus:(long long)arg0;
- (long long)rewardBtnStatus;
- (void)setRewardBtnStatus:(long long)arg0;
- (long long)rewardIconAuthStatus;
- (void)setRewardIconAuthStatus:(long long)arg0;
- (BOOL)isClickRecently;
- (void)setIsClickRecently:(BOOL)arg0;
- (BOOL)isFiftyAuthorStableFans;
- (void)setIsFiftyAuthorStableFans:(BOOL)arg0;
- (BOOL)isIronFansInAwemePost;
- (void)setIsIronFansInAwemePost:(BOOL)arg0;
- (BOOL)exitAdmireInAwemePost;
- (void)setExitAdmireInAwemePost:(BOOL)arg0;
- (BOOL)authorCanAdmire;
- (void)setAuthorCanAdmire:(BOOL)arg0;

@end
