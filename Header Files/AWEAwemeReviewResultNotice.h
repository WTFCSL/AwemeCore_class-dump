//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEAwemeReviewResultNotice : AWEBaseApiModel {
    BOOL _shouldTell;
    long long _reviewType;
    NSString *_linkUrl;
    NSString *_videoDetailNoticeBottom;
    NSString *_videoDetailNotice;
    NSString *_coverNotice;
    NSString *_extra;
}

@property (readonly, nonatomic) long long reviewType;
@property (readonly, nonatomic) BOOL shouldTell;
@property (readonly, nonatomic) NSString *linkUrl;
@property (readonly, nonatomic) NSString *videoDetailNoticeBottom;
@property (readonly, nonatomic) NSString *videoDetailNotice;
@property (readonly, nonatomic) NSString *coverNotice;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, copy, nonatomic) NSDictionary *extraDict;

+ (id)shouldTellJSONTransformer;
+ (id)reviewTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraDict;
- (long long)reviewType;
- (BOOL)shouldTell;
- (id)videoDetailNoticeBottom;
- (id)videoDetailNotice;
- (id)coverNotice;
- (void).cxx_destruct;
- (id)extra;
- (id)linkUrl;

@end