//
//     Generated by private class-dump
//

@class NSString, HTSLiveUMGWEventData;

@interface HTSLiveUMGWDownlinkPacket : GPBMessage

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (nonatomic) long long uniqueId;
@property (nonatomic) int eventType;
@property (retain, nonatomic) HTSLiveUMGWEventData *eventData;
@property (nonatomic) BOOL hasEventData;

+ (id)descriptor;

@end
