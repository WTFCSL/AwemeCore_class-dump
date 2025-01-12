//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveRoomServiceAdapter;

@interface IESLiveMessageFilterStrategy : NSObject <IESLiveMessageFilterStrategy> {
    BOOL enableFoldAll;
    BOOL isAnchor;
    long long roomHeat;
    id<IESLiveRoomServiceAdapter> room;
    NSString *currentUserID;
    long long commentCount;
    long long selfActionCount;
    long long giftCount;
    long long systemActionCount;
    long long danmuCount;
    long long otherMessageCount;
    long long discardCommentCount;
    long long discardGiftCount;
    long long discardSystemActionCount;
    long long foldEnterCount;
    long long unfoldEnterCount;
}

@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *currentUserID;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long selfActionCount;
@property (nonatomic) long long giftCount;
@property (nonatomic) long long systemActionCount;
@property (nonatomic) long long danmuCount;
@property (nonatomic) long long otherMessageCount;
@property (nonatomic) long long discardCommentCount;
@property (nonatomic) long long discardGiftCount;
@property (nonatomic) long long discardSystemActionCount;
@property (nonatomic) long long foldEnterCount;
@property (nonatomic) long long unfoldEnterCount;
@property (nonatomic) BOOL enableFoldAll;
@property (nonatomic) long long roomHeat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsAnchor:(BOOL)arg0;
- (long long)giftCount;
- (void)setGiftCount:(long long)arg0;
- (void)setCurrentUserID:(id)arg0;
- (BOOL)needFoldForMessage:(id)arg0;
- (BOOL)enableFoldAll;
- (void)setEnableFoldAll:(BOOL)arg0;
- (long long)roomHeat;
- (void)setRoomHeat:(long long)arg0;
- (BOOL)doFilterForMessageList:(id)arg0;
- (long long)selfActionCount;
- (void)setSelfActionCount:(long long)arg0;
- (long long)systemActionCount;
- (void)setSystemActionCount:(long long)arg0;
- (long long)danmuCount;
- (void)setDanmuCount:(long long)arg0;
- (long long)otherMessageCount;
- (void)setOtherMessageCount:(long long)arg0;
- (long long)discardCommentCount;
- (void)setDiscardCommentCount:(long long)arg0;
- (long long)discardGiftCount;
- (void)setDiscardGiftCount:(long long)arg0;
- (long long)discardSystemActionCount;
- (void)setDiscardSystemActionCount:(long long)arg0;
- (long long)foldEnterCount;
- (void)setFoldEnterCount:(long long)arg0;
- (long long)unfoldEnterCount;
- (void)setUnfoldEnterCount:(long long)arg0;
- (BOOL)isMyMessage:(id)arg0;
- (BOOL)enableFansClubMessageFold:(id)arg0;
- (BOOL)enableGiftMessageFold:(id)arg0;
- (BOOL)enableGiftMessageShowInList:(id)arg0;
- (BOOL)enableFoldBy:(long long)arg0 defaultValue:(BOOL)arg1;
- (BOOL)isUserSide:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)room;
- (void)setRoom:(id)arg0;
- (long long)commentCount;
- (void)setCommentCount:(long long)arg0;
- (id)currentUserID;

@end
