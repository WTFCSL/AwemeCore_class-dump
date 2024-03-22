//
//     Generated by private class-dump
//

@class AWECommentModel, NSDictionary, NSString;

@protocol AWESearchCardCommentCellProtocol <NSObject>

+ (id)identifier;

@property (retain, nonatomic) AWECommentModel *commentModel;
@property (copy, nonatomic) id /* block */ likeButtonTappedBlock;
@property (copy, nonatomic) id /* block */ truncationTokenTappedBlock;
@property (copy, nonatomic) id /* block */ avatarOrNameTappedBlock;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL isFromXigua;

- (id)referString;
- (id)commentModel;
- (void)setCommentModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id /* block */)likeButtonTappedBlock;
- (void)setLikeButtonTappedBlock:(id /* block */)arg0;
- (id /* block */)truncationTokenTappedBlock;
- (void)setTruncationTokenTappedBlock:(id /* block */)arg0;
- (id /* block */)avatarOrNameTappedBlock;
- (void)setAvatarOrNameTappedBlock:(id /* block */)arg0;
- (void)resetLikesLabel;
- (void)setIsFromXigua:(BOOL)arg0;
- (BOOL)isFromXigua;
- (void)configWithComment:(id)arg0;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;

@optional

- (void)addAvatarTagViewIfNeededWithModel:(id)arg0;

@end
