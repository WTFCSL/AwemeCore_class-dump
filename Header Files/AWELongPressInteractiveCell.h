//
//     Generated by private class-dump
//

@class NSString, UICollectionView, NSMutableSet, UILabel, UIView, AWELongPressPanelViewGroupModel;

@interface AWELongPressInteractiveCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, AWELongPressInteractiveShareCellDelegate> {
    AWELongPressPanelViewGroupModel *_interactiveGroupModel;
    UICollectionView *_collectionView;
    NSMutableSet *_trackChatShowSet;
    NSMutableSet *_trackRecentlyChatShowSet;
    UIView *_iconBackView;
    UILabel *_shareLabel;
    NSMutableSet *_trackConsetutiveChatShowSet;
}

@property (retain, nonatomic) UIView *iconBackView;
@property (retain, nonatomic) UILabel *shareLabel;
@property (retain, nonatomic) NSMutableSet *trackConsetutiveChatShowSet;
@property (retain, nonatomic) NSMutableSet *trackChatShowSet;
@property (retain, nonatomic) NSMutableSet *trackRecentlyChatShowSet;
@property (retain, nonatomic) AWELongPressPanelViewGroupModel *interactiveGroupModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackConsetutiveChatShowSet;
- (void)setTrackConsetutiveChatShowSet:(id)arg0;
- (void)setShareLabel:(id)arg0;
- (id)shareLabel;
- (id)trackChatShowSet;
- (id)trackRecentlyChatShowSet;
- (void)setTrackChatShowSet:(id)arg0;
- (void)setTrackRecentlyChatShowSet:(id)arg0;
- (void)interactiveCellReload;
- (void)interactiveCellReloadForFlow;
- (void)handleCollectionViewCellLongPressed:(id)arg0;
- (void)showLongPressPopover;
- (id)interactiveGroupModel;
- (BOOL)isCellShowMoreThanHalf:(id)arg0;
- (void)showShareTextInputView:(id)arg0;
- (void)interactiveShareCellDelegateDidLongpressAvatar:(id)arg0 gesRecognizer:(id)arg1;
- (void)setInteractiveGroupModel:(id)arg0;
- (id)iconBackView;
- (void)setIconBackView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)setUpCollectionView;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)setUpUI;

@end