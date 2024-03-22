//
//     Generated by private class-dump
//

@class RTVVoipInitialAction, NSArray, NSString, NSDictionary, NSNumber;
@protocol Optional;

@interface RTVVoipCallInfo : JSONModel {
    NSString *_callId;
    NSString<Optional> *_version;
    long long _type;
    long long _callType;
    NSNumber<Optional> *_cameraOff;
    NSString *_roomId;
    NSArray<Optional> *_participators;
    NSString<Optional> *_conversationID;
    RTVVoipInitialAction<Optional> *_initialAction;
    NSNumber<Optional> *_createAt;
    long long _roomType;
    long long _capacityType;
    NSNumber<Optional> *_capacity;
    NSString<Optional> *_creator;
    NSString<Optional> *_extString;
}

@property (copy, nonatomic) NSArray<Optional> *participators;
@property (copy, nonatomic) NSString<Optional> *conversationID;
@property (retain, nonatomic) NSNumber<Optional> *cameraOff;
@property (copy, nonatomic) NSString<Optional> *extString;
@property (retain, nonatomic) NSString *callId;
@property (copy, nonatomic) NSString<Optional> *version;
@property (nonatomic) long long type;
@property (nonatomic) long long callType;
@property (readonly, nonatomic) long long enterType;
@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) RTVVoipInitialAction<Optional> *initialAction;
@property (retain, nonatomic) NSNumber<Optional> *createAt;
@property (nonatomic) long long roomType;
@property (nonatomic) long long capacityType;
@property (retain, nonatomic) NSNumber<Optional> *capacity;
@property (copy, nonatomic) NSString<Optional> *creator;
@property (readonly, copy, nonatomic) NSDictionary *ext;
@property (readonly, nonatomic) BOOL roomInteractionWindow;
@property (readonly, nonatomic) long long voipInvokeBizType;
@property (readonly, nonatomic) BOOL isConvCreatedByServer;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)createAt;
- (void)setCreateAt:(id)arg0;
- (long long)roomType;
- (void)setRoomType:(long long)arg0;
- (id)cameraOff;
- (void)setCameraOff:(id)arg0;
- (id)participators;
- (long long)voipInvokeBizType;
- (BOOL)isConvCreatedByServer;
- (id)extString;
- (void)setExtString:(id)arg0;
- (id)initWithV1InfoDictionary:(id)arg0;
- (BOOL)roomInteractionWindow;
- (void)setInitialActionWithNSString:(id)arg0;
- (void)setInitialActionWithNSDictionary:(id)arg0;
- (id)JSONObjectForInitialAction;
- (void)setParticipators:(id)arg0;
- (long long)capacityType;
- (void)setCapacityType:(long long)arg0;
- (id)capacity;
- (void)setCapacity:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)conversationID;
- (void)setType:(long long)arg0;
- (id)version;
- (id)callId;
- (void)setCallId:(id)arg0;
- (void)setConversationID:(id)arg0;
- (id)creator;
- (void)setCreator:(id)arg0;
- (long long)callType;
- (void)setCallType:(long long)arg0;
- (long long)enterType;
- (id)initialAction;
- (void)setInitialAction:(id)arg0;
- (id)ext;

@end