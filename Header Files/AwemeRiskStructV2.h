//
//     Generated by private class-dump
//

@class NSString;

@interface AwemeRiskStructV2 : GPBMessage

@property (nonatomic) BOOL vote;
@property (nonatomic) BOOL hasVote;
@property (nonatomic) BOOL warn;
@property (nonatomic) BOOL hasWarn;
@property (nonatomic) BOOL riskSink;
@property (nonatomic) BOOL hasRiskSink;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL notice;
@property (nonatomic) BOOL hasNotice;
@property (copy, nonatomic) NSString *URL;
@property (nonatomic) BOOL hasURL;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) BOOL hasIconURL;

+ (id)descriptor;

- (id)content;
- (int)type;
- (BOOL)riskSink;
- (BOOL)warn;
- (BOOL)vote;

@end
