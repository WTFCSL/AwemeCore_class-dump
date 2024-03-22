//
//     Generated by private class-dump
//

@class NSString, UrlStructV2;

@interface VisualSearchEntryStructV2 : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL hasTextColor;
@property (retain, nonatomic) UrlStructV2 *iconURL;
@property (nonatomic) BOOL hasIconURL;

+ (id)descriptor;

- (id)iconURL;
- (id)textColor;
- (id)subTitle;
- (id)title;

@end
