//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface BoxListResponse_BoxMeta : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *titleDesc;
@property (copy, nonatomic) NSString *contentCountDesc;
@property (copy, nonatomic) NSString *contentAmountDesc;
@property (copy, nonatomic) NSString *animationDesc;
@property (copy, nonatomic) NSString *beforeUnpackDesc;
@property (copy, nonatomic) NSString *successUnpackDesc;
@property (copy, nonatomic) NSString *failUnpackDesc;
@property (retain, nonatomic) HTSLiveImage *adImage;
@property (nonatomic) BOOL hasAdImage;
@property (copy, nonatomic) NSString *imDesc;

+ (id)descriptor;

@end
