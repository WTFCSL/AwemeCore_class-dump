//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableDictionary;

@interface HTSLiveShareResource : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *toastBackground;
@property (nonatomic) BOOL hasToastBackground;
@property (retain, nonatomic) NSMutableDictionary *qrcode;
@property (readonly, nonatomic) unsigned long long qrcode_Count;
@property (copy, nonatomic) NSString *ugShareInfo;

+ (id)descriptor;

@end
