//
//     Generated by private class-dump
//

@class NSNumber, NSString;
@protocol IESLiveRoomService;

@interface IESLiveAudienceWatchInfoServiceImpl : NSObject <IESLiveRoomWatchTimeDelegate, HTSLiveDiggAction, HTSLiveSendGiftActions, IESLiveAudienceWatchInfoService> {
    long long watchDuration;
    long long likeCount;
    long long commentCount;
    long long giftCount;
    double giftValue;
    long long followCount;
    long long unfollowCount;
    long long position;
    NSNumber *_roomID;
    id<IESLiveRoomService> _room;
}

@property (nonatomic) long long watchDuration;
@property (nonatomic) long long likeCount;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long giftCount;
@property (nonatomic) double giftValue;
@property (nonatomic) long long followCount;
@property (nonatomic) long long unfollowCount;
@property (nonatomic) long long position;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLikeCount:(long long)arg0;
- (void)didSetAttachingDIContext;
- (long long)giftCount;
- (void)setGiftCount:(long long)arg0;
- (long long)followCount;
- (void)setFollowCount:(long long)arg0;
- (long long)watchDuration;
- (void)setWatchDuration:(long long)arg0;
- (id)initWithRoomModel:(id)arg0;
- (id)convertToDict;
- (double)giftValue;
- (void)setGiftValue:(double)arg0;
- (void)diggUploaded:(long long)arg0;
- (void)setUnfollowCount:(long long)arg0;
- (void)addCommentCount:(long long)arg0;
- (long long)unfollowCount;
- (void)didGiveGiftWithResponse:(id)arg0;
- (void)subscribeFollowStatusChanged;
- (void)didFollowUser:(id)arg0;
- (void)didUnfollowUser:(id)arg0;
- (void)liveRoomWatchMinitTick:(unsigned long long)arg0;
- (void).cxx_destruct;
- (long long)position;
- (void)setPosition:(long long)arg0;
- (void)dealloc;
- (void)reset;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (long long)commentCount;
- (long long)likeCount;
- (void)setCommentCount:(long long)arg0;

@end