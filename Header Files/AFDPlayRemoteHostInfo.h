//
//     Generated by private class-dump
//

@class NSString;

@interface AFDPlayRemoteHostInfo : NSObject <AFDPlayRemoteHostInfoProtocol> {
    long long _version;
    NSString *_userID;
}

@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVersion:(long long)arg0 userID:(id)arg1;
- (id)userID;
- (void).cxx_destruct;
- (long long)version;

@end
