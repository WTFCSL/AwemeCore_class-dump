//
//     Generated by private class-dump
//

@class NSString;

@interface VideoTagStructV2 : GPBMessage

@property (nonatomic) long long tagId;
@property (nonatomic) BOOL hasTagId;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) BOOL hasTagName;
@property (nonatomic) int level;
@property (nonatomic) BOOL hasLevel;

+ (id)descriptor;

- (int)level;
- (id)tagName;
- (long long)tagId;

@end