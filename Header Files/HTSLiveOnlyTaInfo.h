//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveOnlyTaInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fullText;
@property (retain, nonatomic) HTSLiveImage *fullAvatar;
@property (nonatomic) BOOL hasFullAvatar;
@property (retain, nonatomic) NSMutableArray *tasArray;
@property (readonly, nonatomic) unsigned long long tasArray_Count;

+ (id)descriptor;

@end
