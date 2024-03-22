//
//     Generated by private class-dump
//

@class NSString, AFDBookUserCommentModel;

@interface AFDBookCommentTabResponseModel : AWEBaseApiModel {
    NSString *_commentTabInfo;
    AFDBookUserCommentModel *_userComment;
}

@property (copy, nonatomic) NSString *commentTabInfo;
@property (retain, nonatomic) AFDBookUserCommentModel *userComment;

+ (id)userCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commentTabInfo;
- (void)setCommentTabInfo:(id)arg0;
- (void)setUserComment:(id)arg0;
- (id)userComment;
- (void).cxx_destruct;

@end
