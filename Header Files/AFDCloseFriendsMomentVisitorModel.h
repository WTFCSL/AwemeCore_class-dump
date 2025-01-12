//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface AFDCloseFriendsMomentVisitorModel : AWEBaseApiModel {
    NSString *_awemeID;
    unsigned long long _expireTime;
    NSNumber *_viewerCount;
    NSArray *_userList;
    NSNumber *_ttlDays;
}

@property (retain, nonatomic) NSString *awemeID;
@property (nonatomic) unsigned long long expireTime;
@property (retain, nonatomic) NSNumber *viewerCount;
@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSNumber *ttlDays;

+ (id)userListJSONTransformer;
+ (id)awemeIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)setUserList:(id)arg0;
- (id)viewerCount;
- (void)setViewerCount:(id)arg0;
- (void)setTtlDays:(id)arg0;
- (void).cxx_destruct;
- (id)ttlDays;
- (id)userList;
- (unsigned long long)expireTime;
- (void)setExpireTime:(unsigned long long)arg0;

@end
