//
//     Generated by private class-dump
//

@class NSString;

@interface AFDCloseFriendsRelationItem : AWEBaseApiModel {
    NSString *_userID;
    long long _cfTimeStamp;
}

@property (retain, nonatomic) NSString *userID;
@property (nonatomic) long long cfTimeStamp;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)cfTimeStamp;
- (void)setCfTimeStamp:(long long)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;

@end
