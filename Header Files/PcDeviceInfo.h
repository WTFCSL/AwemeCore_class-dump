//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface PcDeviceInfo : IESLivePBBaseMessage

@property (nonatomic) long long webId;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *systemName;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
