//
//     Generated by private class-dump
//

@class NSData, NSMutableArray;

@interface HTSLiveUMGWEventData : GPBMessage

@property (nonatomic) int service;
@property (nonatomic) int method;
@property (nonatomic) long long token;
@property (retain, nonatomic) NSMutableArray *paramsArray;
@property (readonly, nonatomic) unsigned long long paramsArray_Count;
@property (copy, nonatomic) NSData *payload;

+ (id)descriptor;

@end