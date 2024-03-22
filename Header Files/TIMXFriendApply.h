//
//     Generated by private class-dump
//

@protocol TIMXUserProfileProtocol;

@interface TIMXFriendApply : NSObject {
    long long _userId;
    long long _applyTimeSecond;
    long long _status;
    id<TIMXUserProfileProtocol> _profile;
}

@property (nonatomic) long long userId;
@property (nonatomic) long long applyTimeSecond;
@property (nonatomic) long long status;
@property (retain, nonatomic) id<TIMXUserProfileProtocol> profile;

- (long long)applyTimeSecond;
- (id)initWithRootObject:(id)arg0 pbModel:(id)arg1;
- (void)setApplyTimeSecond:(long long)arg0;
- (void)setProfile:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (long long)userId;
- (id)profile;
- (void)setStatus:(long long)arg0;
- (void)setUserId:(long long)arg0;

@end
