//
//     Generated by private class-dump
//

@class NSNumber;
@protocol AWEIMQuickReplyControllerHandlerPortocol, AWEIMShareModelProtocol;

@interface AWELongPressPanelShareFriendViewModel : AWELongPressPanelBaseViewModel {
    BOOL _hasShared;
    id<AWEIMShareModelProtocol> _shareModel;
    NSNumber *_rank;
    id<AWEIMQuickReplyControllerHandlerPortocol> _quickReplyHandler;
}

@property (retain, nonatomic) id<AWEIMQuickReplyControllerHandlerPortocol> quickReplyHandler;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) NSNumber *rank;
@property (nonatomic) BOOL hasShared;

+ (id)longPressPanelViewModel;

- (BOOL)needShow;
- (void)shareToUser:(id)arg0 dismiss:(id /* block */)arg1 completion:(id /* block */)arg2 awemeModel:(id)arg3 referString:(id)arg4 logExtraDict:(id)arg5;
- (void)setQuickReplyHandler:(id)arg0;
- (id)quickReplyHandler;
- (void)shareFriendText;
- (void)trackClickShareButtonWithShareModel:(id)arg0 awemeModel:(id)arg1 referString:(id)arg2 logExtraDict:(id)arg3;
- (id)generateCommomParamsWithShareModel:(id)arg0 awemeModel:(id)arg1 referString:(id)arg2 logExtra:(id)arg3;
- (void)configVM;
- (void)fetchSubTitleAttributedStringWithShareModel:(id)arg0 subTitleMaxWidth:(double)arg1 completion:(id /* block */)arg2;
- (void)sharePrivateFriendsWithToast:(BOOL)arg0;
- (void)memoriesPlayerShareLocalToUser;
- (void)closeFriendMomentShareToUser;
- (void)p_shareToUser:(id)arg0 dismiss:(id /* block */)arg1 completion:(id /* block */)arg2 awemeModel:(id)arg3 referString:(id)arg4 logExtraDict:(id)arg5;
- (void)checkShouldSendIncentiveFeedShareTaskWithShareModel:(id)arg0 itemID:(id)arg1 completion:(id /* block */)arg2;
- (void)trackClickPostScript;
- (void)setRank:(id)arg0;
- (id)rank;
- (void).cxx_destruct;
- (void)setHasShared:(BOOL)arg0;
- (BOOL)hasShared;
- (id)shareModel;
- (void)setShareModel:(id)arg0;

@end
