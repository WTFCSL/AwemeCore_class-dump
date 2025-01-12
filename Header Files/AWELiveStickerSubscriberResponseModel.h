//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSMutableArray;

@interface AWELiveStickerSubscriberResponseModel : MTLModel <MTLJSONSerializing> {
    long long _type;
    NSNumber *_appointmentId;
    NSString *_appointmentIdStr;
    long long _total;
    NSMutableArray *_userList;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *appointmentId;
@property (copy, nonatomic) NSString *appointmentIdStr;
@property (nonatomic) long long total;
@property (retain, nonatomic) NSMutableArray *userList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setUserList:(id)arg0;
- (id)appointmentId;
- (void)setAppointmentId:(id)arg0;
- (id)appointmentIdStr;
- (void)setAppointmentIdStr:(id)arg0;
- (long long)total;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)userList;
- (void)setTotal:(long long)arg0;

@end
