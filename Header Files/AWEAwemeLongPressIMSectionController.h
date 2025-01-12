//
//     Generated by private class-dump
//

@class NSMutableSet;

@interface AWEAwemeLongPressIMSectionController : AWEBaseListSectionController {
    BOOL _didTrackShowReplyAuthor;
    id /* block */ _dismissBlock;
    id /* block */ _buttonClickedTrackBlock;
    id /* block */ _addDismissHandlerBlock;
    long long _selectedUserCount;
    NSMutableSet *_trackConsetutiveChatShowSet;
}

@property long long selectedUserCount;
@property (retain, nonatomic) NSMutableSet *trackConsetutiveChatShowSet;
@property (nonatomic) BOOL didTrackShowReplyAuthor;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ buttonClickedTrackBlock;
@property (copy, nonatomic) id /* block */ addDismissHandlerBlock;

+ (Class)sectionViewModelClass;
+ (Class)aAWEPadModuleAdapterClass;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (id)aAWEPadModuleAdapter;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (void)configSupplementaryHeaderView:(id)arg0;
- (id)trackConsetutiveChatShowSet;
- (void)setTrackConsetutiveChatShowSet:(id)arg0;
- (id /* block */)buttonClickedTrackBlock;
- (void)setButtonClickedTrackBlock:(id /* block */)arg0;
- (id /* block */)addDismissHandlerBlock;
- (void)setAddDismissHandlerBlock:(id /* block */)arg0;
- (long long)selectedUserCount;
- (BOOL)canShowLongpressPopover;
- (void)p_closeFriendMomentShareToUserWithModel:(id)arg0 index:(long long)arg1 newShareState:(long long)arg2;
- (void)p_sendMessageWithModel:(id)arg0 enterFrom:(id)arg1;
- (void)p_memoriesPlayerShareLocalToUserWithModel:(id)arg0 index:(long long)arg1 newShareState:(long long)arg2;
- (void)updateShareStateForCellAtIndex:(long long)arg0 model:(id)arg1;
- (void)shareToUserWithModel:(id)arg0 index:(long long)arg1 newShareState:(long long)arg2;
- (BOOL)didTrackShowReplyAuthor;
- (void)setDidTrackShowReplyAuthor:(BOOL)arg0;
- (void)setSelectedUserCount:(long long)arg0;
- (void)p_closeFriendClickMoreFriends;
- (void)p_memoriesPlayerClickMoreFriends;
- (void).cxx_destruct;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
