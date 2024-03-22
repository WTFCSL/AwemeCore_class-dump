//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface IESLiveMicPosTagInfo : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveMicPosTagInfo *localInfo;
@property (nonatomic) int tagType;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *textColorValue;
@property (copy, nonatomic) NSString *bgColorValue;
@property (nonatomic) long long tagTypeId;
@property (retain, nonatomic) HTSLiveImage *bgColorImg;
@property (nonatomic) BOOL hasBgColorImg;
@property (nonatomic) BOOL openTagDescPage;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

- (id)localInfo;
- (void)setLocalInfo:(id)arg0;
- (id)deepCopy;

@end