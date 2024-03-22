//
//     Generated by private class-dump
//

@class NSString, AFDCloseFriendsMomentContext, AFDCloseFriendsMomentModel;

@interface AFDCloseFriendsSpringSnackBarContext : AWEPageContext {
    BOOL _isInFeed;
    NSString *_enterFrom;
    AFDCloseFriendsMomentContext *_pageContext;
    AFDCloseFriendsMomentModel *_currentModel;
}

@property (nonatomic) BOOL isInFeed;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) AFDCloseFriendsMomentContext *pageContext;
@property (retain, nonatomic) AFDCloseFriendsMomentModel *currentModel;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)currentAwemeModel;
- (BOOL)isMomentSpringEnable;
- (void)setIsInFeed:(BOOL)arg0;
- (BOOL)isSelfPost;
- (BOOL)isValidMomentItemSource:(long long)arg0;
- (BOOL)isCurrentUserFinishNewUserTask;
- (BOOL)isInFeed;
- (BOOL)hasOpenCurrentPostRedPocket;
- (BOOL)isValidMomentSpringTime;
- (BOOL)isBlurMaskPost;
- (BOOL)isSpringNewUser;
- (void).cxx_destruct;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end