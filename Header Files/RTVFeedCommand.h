//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber;
@protocol Optional;

@interface RTVFeedCommand : JSONModel <RTVXRRoomMessageContent> {
    NSString *_fromUserID;
    NSString *_sharingID;
    NSString<Optional> *_version;
    NSString *_payload;
    long long _commandType;
    long long _index;
    NSDictionary<Optional> *_payloadDict;
    NSNumber<Optional> *_isActive;
}

@property (copy, nonatomic) NSString *fromUserID;
@property (copy, nonatomic) NSString *sharingID;
@property (copy, nonatomic) NSString<Optional> *version;
@property (copy, nonatomic) NSString *payload;
@property (copy, nonatomic) NSDictionary<Optional> *payloadDict;
@property (retain, nonatomic) NSNumber<Optional> *isActive;
@property (nonatomic) long long index;
@property (readonly, nonatomic) long long commandType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;
+ (long long)messageType;

- (id)fromUserID;
- (void)setFromUserID:(id)arg0;
- (id)payloadDictionay;
- (id)initWithPayload:(id)arg0 fromUserID:(id)arg1 index:(long long)arg2;
- (long long)messageMethod;
- (long long)sendChannel;
- (void)updateActive:(BOOL)arg0;
- (id)sharingID;
- (void)setSharingID:(id)arg0;
- (void)setPayloadWithNSString:(id)arg0;
- (id)JSONObjectForPayload;
- (id)JSONObjectForFromUserID;
- (id)JSONObjectForSharingID;
- (id)JSONObjectForVersion;
- (void)setIndex:(long long)arg0;
- (id)payload;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(id)arg0;
- (void)setPayload:(id)arg0;
- (long long)commandType;
- (long long)index;
- (id)version;
- (id)isActive;
- (BOOL)isInactive;
- (id)payloadDict;
- (void)setPayloadDict:(id)arg0;

@end
