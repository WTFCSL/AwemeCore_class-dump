//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECRelationFeedCommentViewModel : NSObject {
    NSArray *_comments;
    long long _rollingCommentIndex;
    NSString *_desc;
}

@property (retain, nonatomic) NSArray *comments;
@property (nonatomic) long long rollingCommentIndex;
@property (copy, nonatomic) NSString *desc;

- (long long)rollingCommentIndex;
- (void)setRollingCommentIndex:(long long)arg0;
- (id)desc;
- (void).cxx_destruct;
- (void)setDesc:(id)arg0;
- (id)comments;
- (void)setComments:(id)arg0;

@end
