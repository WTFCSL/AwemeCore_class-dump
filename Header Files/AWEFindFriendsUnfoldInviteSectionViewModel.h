//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEFindFriendsUnfoldInviteSectionViewModelProtocol;

@interface AWEFindFriendsUnfoldInviteSectionViewModel : AWEBaseListSectionViewModel {
    BOOL _hasAction;
    NSString *_enterFrom;
    id<AWEFindFriendsUnfoldInviteSectionViewModelProtocol> _delegate;
}

@property (nonatomic) BOOL hasAction;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWEFindFriendsUnfoldInviteSectionViewModelProtocol> delegate;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)removeCellWithModel:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (BOOL)hasAction;
- (void)setHasAction:(BOOL)arg0;

@end
