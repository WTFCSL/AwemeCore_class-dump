//
//     Generated by private class-dump
//

@class AFDBookUserCommentModel;

@interface AFDBookUserCommentInfo : AWEBaseApiModel {
    AFDBookUserCommentModel *_userComment;
}

@property (retain, nonatomic) AFDBookUserCommentModel *userComment;

+ (id)userCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setUserComment:(id)arg0;
- (id)userComment;
- (void).cxx_destruct;

@end
