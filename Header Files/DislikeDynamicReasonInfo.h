//
//     Generated by private class-dump
//

@class NSString, UrlStructV2;

@interface DislikeDynamicReasonInfo : GPBMessage

@property (copy, nonatomic) NSString *buttonType;
@property (nonatomic) BOOL hasButtonType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) UrlStructV2 *iconURL;
@property (nonatomic) BOOL hasIconURL;
@property (copy, nonatomic) NSString *clientAnchorExtra;
@property (nonatomic) BOOL hasClientAnchorExtra;
@property (copy, nonatomic) NSString *serverAnchorExtra;
@property (nonatomic) BOOL hasServerAnchorExtra;

+ (id)descriptor;

@end
