//
//     Generated by private class-dump
//

@class HTSLiveFeedbackMaterial, HTSLiveBuoyMaterial, HTSLiveBackgroundMaterial, NSString;

@interface HTSLiveMidiSkinMaterial : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveBuoyMaterial *buoy;
@property (nonatomic) BOOL hasBuoy;
@property (retain, nonatomic) HTSLiveBackgroundMaterial *bg;
@property (nonatomic) BOOL hasBg;
@property (retain, nonatomic) HTSLiveFeedbackMaterial *feedback;
@property (nonatomic) BOOL hasFeedback;
@property (copy, nonatomic) NSString *lyricColorValue;

+ (id)descriptor;

@end