//
//     Generated by private class-dump
//

@class NSString, NSDateFormatter, NSDictionary, NSNumber, NSMutableArray;

@interface IESLiveFeatureInstance : NSObject {
    BOOL _durationEnd;
    BOOL _interactEnd;
    BOOL _end;
    NSString *_roomId;
    NSString *_authorId;
    NSString *_title;
    NSString *_enterRoomId;
    NSString *_enterAuthorId;
    NSNumber *_roomType;
    NSNumber *_index;
    NSNumber *_userCount;
    NSNumber *_showTs;
    NSNumber *_showTms;
    NSNumber *_innerDuration;
    NSNumber *_outerDurationBeforeEnter;
    NSMutableArray *_interactArray;
    NSNumber *_likeCnt;
    NSNumber *_messageCnt;
    NSNumber *_giftCnt;
    NSNumber *_userLikeCnt;
    NSNumber *_userMessageCnt;
    NSNumber *_userGiftCnt;
    NSNumber *_userGiftMoneySum;
    NSNumber *_userClickProductCnt;
    NSNumber *_follow;
    NSNumber *_share;
    NSNumber *_dislike;
    NSNumber *_userReport;
    NSNumber *_har;
    NSNumber *_harRct;
    NSNumber *_ohr;
    NSNumber *_ohrRct;
    NSNumber *_ohrHabit;
    NSNumber *_allInnerDuration;
    NSNumber *_drawToNext;
    NSDictionary *_itemExplicitInfo;
    NSString *_targetsRecInfo;
    NSDateFormatter *_formatter;
}

@property (retain, nonatomic) NSDateFormatter *formatter;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *enterRoomId;
@property (copy, nonatomic) NSString *enterAuthorId;
@property (retain, nonatomic) NSNumber *roomType;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *userCount;
@property (retain, nonatomic) NSNumber *showTs;
@property (retain, nonatomic) NSNumber *showTms;
@property (retain, nonatomic) NSNumber *innerDuration;
@property (retain, nonatomic) NSNumber *outerDurationBeforeEnter;
@property (retain, nonatomic) NSMutableArray *interactArray;
@property (retain, nonatomic) NSNumber *likeCnt;
@property (retain, nonatomic) NSNumber *messageCnt;
@property (retain, nonatomic) NSNumber *giftCnt;
@property (retain, nonatomic) NSNumber *userLikeCnt;
@property (retain, nonatomic) NSNumber *userMessageCnt;
@property (retain, nonatomic) NSNumber *userGiftCnt;
@property (retain, nonatomic) NSNumber *userGiftMoneySum;
@property (retain, nonatomic) NSNumber *userClickProductCnt;
@property (retain, nonatomic) NSNumber *follow;
@property (retain, nonatomic) NSNumber *share;
@property (retain, nonatomic) NSNumber *dislike;
@property (retain, nonatomic) NSNumber *userReport;
@property (retain, nonatomic) NSNumber *har;
@property (retain, nonatomic) NSNumber *harRct;
@property (retain, nonatomic) NSNumber *ohr;
@property (retain, nonatomic) NSNumber *ohrRct;
@property (retain, nonatomic) NSNumber *ohrHabit;
@property (nonatomic) BOOL durationEnd;
@property (nonatomic) BOOL interactEnd;
@property (nonatomic) BOOL end;
@property (retain, nonatomic) NSNumber *allInnerDuration;
@property (retain, nonatomic) NSNumber *drawToNext;
@property (retain, nonatomic) NSDictionary *itemExplicitInfo;
@property (retain, nonatomic) NSString *targetsRecInfo;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)itemExplicitInfo;
- (void)setDislike:(id)arg0;
- (id)roomType;
- (void)setRoomType:(id)arg0;
- (id)follow;
- (void)setFollow:(id)arg0;
- (void)setItemExplicitInfo:(id)arg0;
- (id)likeCnt;
- (void)setLikeCnt:(id)arg0;
- (void)setInteractEnd:(BOOL)arg0;
- (BOOL)interactEnd;
- (id)enterAuthorId;
- (id)showTms;
- (id)messageCnt;
- (id)giftCnt;
- (id)innerDuration;
- (id)outerDurationBeforeEnter;
- (id)userLikeCnt;
- (id)userMessageCnt;
- (id)userGiftCnt;
- (id)userGiftMoneySum;
- (id)userReport;
- (id)targetsRecInfo;
- (id)ohr;
- (id)har;
- (id)harRct;
- (id)ohrRct;
- (id)ohrHabit;
- (void)setEnterRoomId:(id)arg0;
- (void)setEnterAuthorId:(id)arg0;
- (void)setShowTs:(id)arg0;
- (void)setShowTms:(id)arg0;
- (void)setInnerDuration:(id)arg0;
- (void)setOuterDurationBeforeEnter:(id)arg0;
- (void)setInteractArray:(id)arg0;
- (void)setMessageCnt:(id)arg0;
- (void)setGiftCnt:(id)arg0;
- (void)setUserLikeCnt:(id)arg0;
- (void)setUserMessageCnt:(id)arg0;
- (void)setUserGiftCnt:(id)arg0;
- (void)setUserGiftMoneySum:(id)arg0;
- (void)setUserReport:(id)arg0;
- (void)setHar:(id)arg0;
- (void)setHarRct:(id)arg0;
- (void)setOhr:(id)arg0;
- (void)setOhrRct:(id)arg0;
- (void)setOhrHabit:(id)arg0;
- (void)setAllInnerDuration:(id)arg0;
- (void)setDrawToNext:(id)arg0;
- (void)setDurationEnd:(BOOL)arg0;
- (void)checkEnd;
- (id)interactArray;
- (void)sumInteractData;
- (void)setTargetsRecInfo:(id)arg0;
- (BOOL)durationEnd;
- (void)addPointToInnerDuration:(id)arg0;
- (void)addOuterDurationBeforeEnter:(id)arg0;
- (void)addPointToInteractArray:(id)arg0;
- (void)addItemExplicitInfo:(id)arg0;
- (id)enterRoomId;
- (id)showTs;
- (id)userClickProductCnt;
- (void)setUserClickProductCnt:(id)arg0;
- (id)allInnerDuration;
- (id)drawToNext;
- (void)setEnd:(BOOL)arg0;
- (id)share;
- (BOOL)end;
- (void)setIndex:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)formatter;
- (id)dislike;
- (id)title;
- (id)index;
- (void)setShare:(id)arg0;
- (void)setFormatter:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)userCount;
- (void)setUserCount:(id)arg0;
- (id)authorId;
- (void)setAuthorId:(id)arg0;

@end
