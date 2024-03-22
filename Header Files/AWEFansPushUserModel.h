//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber, AWEUserModel;

@interface AWEFansPushUserModel : AWEBaseApiModel {
    AWEUserModel *_user;
    NSNumber *_urgeTime;
    long long _userType;
    NSString *_labelText;
    NSArray *_giftList;
    NSString *_urgeResultText;
    NSString *_sendGiftResultText;
    long long _urgeResultType;
    NSArray *_extraUrgeType;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSNumber *urgeTime;
@property (nonatomic) long long userType;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSArray *giftList;
@property (retain, nonatomic) NSString *urgeResultText;
@property (retain, nonatomic) NSString *sendGiftResultText;
@property (nonatomic) long long urgeResultType;
@property (retain, nonatomic) NSArray *extraUrgeType;

+ (id)userJSONTransformer;
+ (id)giftListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)urgeResultType;
- (id)urgeTime;
- (void)setUrgeTime:(id)arg0;
- (id)giftList;
- (void)setGiftList:(id)arg0;
- (id)urgeResultText;
- (void)setUrgeResultText:(id)arg0;
- (id)sendGiftResultText;
- (void)setSendGiftResultText:(id)arg0;
- (void)setUrgeResultType:(long long)arg0;
- (id)extraUrgeType;
- (void)setExtraUrgeType:(id)arg0;
- (void)setUser:(id)arg0;
- (long long)userType;
- (id)user;
- (void)setLabelText:(id)arg0;
- (void).cxx_destruct;
- (id)labelText;
- (void)setUserType:(long long)arg0;

@end