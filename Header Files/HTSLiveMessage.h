//
//     Generated by private class-dump
//

@class NSString, NSData, NSMutableDictionary;

@interface HTSLiveMessage : GPBMessage

@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSData *payload;
@property (nonatomic) long long msgId;
@property (nonatomic) int msgType;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL needWrdsStore;
@property (nonatomic) long long wrdsVersion;
@property (copy, nonatomic) NSString *wrdsSubKey;
@property (retain, nonatomic) NSMutableDictionary *messageExtra;
@property (readonly, nonatomic) unsigned long long messageExtra_Count;

+ (id)descriptor;

@end
