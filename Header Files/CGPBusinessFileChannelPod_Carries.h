//
//     Generated by private class-dump
//

@class NSString, CGPBusinessFileChannelPod_Carries_CloudStorage, NSMutableDictionary, GPBInt32Value;

@interface CGPBusinessFileChannelPod_Carries : GPBMessage

@property (retain, nonatomic) GPBInt32Value *result;
@property (nonatomic) BOOL hasResult;
@property (retain, nonatomic) GPBInt32Value *progress;
@property (nonatomic) BOOL hasProgress;
@property (copy, nonatomic) NSString *folder;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *md5;
@property (retain, nonatomic) CGPBusinessFileChannelPod_Carries_CloudStorage *cloudStorage;
@property (nonatomic) BOOL hasCloudStorage;
@property (retain, nonatomic) NSMutableDictionary *options;
@property (readonly, nonatomic) unsigned long long options_Count;

+ (id)descriptor;

@end
