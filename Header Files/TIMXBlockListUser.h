//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface TIMXBlockListUser : NSObject <TIMXBlockListUserProtocol> {
    long long _userID;
    NSDate *_createdAt;
}

@property (nonatomic) long long userID;
@property (retain, nonatomic) NSDate *createdAt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)userID;
- (void).cxx_destruct;
- (void)setUserID:(long long)arg0;
- (void)setCreatedAt:(id)arg0;
- (id)createdAt;

@end
