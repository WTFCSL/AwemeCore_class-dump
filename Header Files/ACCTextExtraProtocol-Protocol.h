//
//     Generated by private class-dump
//

@class NSString;

@protocol ACCTextExtraProtocol <NSObject, NSCopying>

@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *secUserID;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *awemeId;
@property (nonatomic, copy) NSString *hashtagName;
@property (nonatomic, readonly) long long accType;
@property (nonatomic, readonly) long long accSubtype;
@property (nonatomic) long long followStatus;
@property (nonatomic, copy) NSString *hotSpotText;
@property (nonatomic, copy) NSString *hotSpotId;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (long long)followStatus;
- (void)setFollowStatus:(long long)arg0;
- (void)setAwemeId:(id)arg0;
- (void)setHashtagName:(id)arg0;
- (long long)accType;
- (long long)accSubtype;
- (id)hotSpotText;
- (void)setHotSpotText:(id)arg0;
- (id)hotSpotId;
- (void)setHotSpotId:(id)arg0;
- (id)awemeId;
- (void)setEnd:(long long)arg0;
- (long long)end;
- (id)nickname;
- (void)setStart:(long long)arg0;
- (void)setLength:(long long)arg0;
- (void)setNickname:(id)arg0;
- (long long)length;
- (id)userId;
- (long long)start;
- (void)setUserId:(id)arg0;
- (id)hashtagName;

@end
