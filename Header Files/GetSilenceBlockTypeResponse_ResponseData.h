//
//     Generated by private class-dump
//

@class NSString, WindowsPrompt;

@interface GetSilenceBlockTypeResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long blockType;
@property (copy, nonatomic) NSString *toastText;
@property (retain, nonatomic) WindowsPrompt *windowsPrompt;
@property (nonatomic) BOOL hasWindowsPrompt;

+ (id)descriptor;

@end