//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveProgrammeHighlightInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL hasHighlight;
@property (copy, nonatomic) NSString *startTime;
@property (copy, nonatomic) NSString *displayText;
@property (retain, nonatomic) HTSLiveImage *cover;
@property (nonatomic) BOOL hasCover;

+ (id)descriptor;

@end