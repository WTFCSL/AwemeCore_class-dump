//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserProfileParamsContext : NSObject {
    unsigned long long _interfaceType;
    unsigned long long _actionType;
    NSString *_userID;
}

@property (nonatomic) unsigned long long interfaceType;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *userID;

- (id)userID;
- (void)setInterfaceType:(unsigned long long)arg0;
- (void)setActionType:(unsigned long long)arg0;
- (unsigned long long)interfaceType;
- (unsigned long long)actionType;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;

@end