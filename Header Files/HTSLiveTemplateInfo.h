//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveTemplateInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *templateId;
@property (retain, nonatomic) HTSLiveImage *templatePhoto;
@property (nonatomic) BOOL hasTemplatePhoto;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *templateTitle;
@property (nonatomic) BOOL supportReplace;
@property (copy, nonatomic) NSString *replaceContent;

+ (id)descriptor;

@end
