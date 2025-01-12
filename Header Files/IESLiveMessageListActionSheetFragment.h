//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray;

@interface IESLiveMessageListActionSheetFragment : IESLiveRoomComponent <IESLiveMessageListActionSheetRouter> {
    BOOL _messageOperateEnable;
    BOOL _commentReplyLinkEnable;
    NSMutableDictionary *_items;
    NSMutableArray *_showItems;
}

@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) NSMutableArray *showItems;
@property (nonatomic) BOOL messageOperateEnable;
@property (nonatomic) BOOL commentReplyLinkEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (id)showItems;
- (void)setShowItems:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (BOOL)commentReplyLinkEnable;
- (void)setCommentReplyLinkEnable:(BOOL)arg0;
- (void)addActionSheetItem:(id)arg0;
- (void)showActionSheetWithNode:(id)arg0 atCell:(id)arg1;
- (void)removeActionSheetItemWithType:(unsigned long long)arg0;
- (void)addReplyActionSheetItem;
- (void)addOpenUserCardActionSheetItem;
- (void)replyComment:(id)arg0;
- (void)updateShowItemsWithNode:(id)arg0;
- (void)directActionWithNode:(id)arg0;
- (void)trackClickCommentWithNode:(id)arg0 onActionSheet:(BOOL)arg1;
- (void)addItemsToSheet:(id)arg0 withNode:(id)arg1;
- (void)addItemType:(unsigned long long)arg0 withNode:(id)arg1 toSheet:(id)arg2;
- (BOOL)messageOperateEnable;
- (void)setMessageOperateEnable:(BOOL)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;

@end
