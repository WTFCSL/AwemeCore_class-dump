//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEPostMultiCommentResponse : AWEBaseApiModel {
    NSArray *_comments;
}

@property (retain, nonatomic) NSArray *comments;

+ (id)commentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)comments;
- (void)setComments:(id)arg0;

@end