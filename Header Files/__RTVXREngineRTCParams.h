//
//     Generated by private class-dump
//

@class NSString;

@interface __RTVXREngineRTCParams : JSONModel {
    NSString *_appID;
    NSString *_roomID;
    NSString *_token;
    NSString *_userID;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *userID;

+ (id)keyMapper;

- (void)__setupDefaultValue:(id)arg0;
- (id)userID;
- (id)init;
- (void)setAppID:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setToken:(id)arg0;
- (id)token;
- (id)appID;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end
