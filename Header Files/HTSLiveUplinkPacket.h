//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSData;

@interface HTSLiveUplinkPacket : GPBMessage

@property (nonatomic) long long uniqueId;
@property (nonatomic) long long serviceId;
@property (retain, nonatomic) NSMutableDictionary *queryParams;
@property (readonly, nonatomic) unsigned long long queryParams_Count;
@property (retain, nonatomic) NSMutableDictionary *headers;
@property (readonly, nonatomic) unsigned long long headers_Count;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSData *payload;
@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (nonatomic) int uplinkStrategy;

+ (id)descriptor;

@end