//
//     Generated by private class-dump
//

@class AWEUserModel, NSString, NSArray, NSAttributedString, NSNumber;

@interface AWEAdFeedCommentDetailModel : MTLModel <MTLJSONSerializing> {
    BOOL _liked;
    NSNumber *_commentID;
    AWEUserModel *_user;
    long long _grade;
    NSString *_commentContent;
    NSArray *_labels;
    NSNumber *_commentTime;
    NSNumber *_likesCount;
    NSString *_commentLabelsDesc;
    NSAttributedString *_commentContentNoExpandAttributeString;
    NSAttributedString *_commentContentExpandAttributeString;
}

@property (copy, nonatomic) NSString *commentLabelsDesc;
@property (copy, nonatomic) NSAttributedString *commentContentNoExpandAttributeString;
@property (copy, nonatomic) NSAttributedString *commentContentExpandAttributeString;
@property (retain, nonatomic) NSNumber *commentID;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long grade;
@property (copy, nonatomic) NSString *commentContent;
@property (copy, nonatomic) NSArray *labels;
@property (retain, nonatomic) NSNumber *commentTime;
@property (retain, nonatomic) NSNumber *likesCount;
@property (nonatomic) BOOL liked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commentID;
- (void)setCommentID:(id)arg0;
- (id)commentTime;
- (void)setCommentTime:(id)arg0;
- (id)commentContent;
- (void)setCommentContent:(id)arg0;
- (id)commentLabelsDesc;
- (id)likesCount;
- (void)setLikesCount:(id)arg0;
- (void)setCommentLabelsDesc:(id)arg0;
- (id)commentContentNoExpandAttributeString;
- (void)setCommentContentNoExpandAttributeString:(id)arg0;
- (id)commentContentExpandAttributeString;
- (void)setCommentContentExpandAttributeString:(id)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (long long)grade;
- (id)labels;
- (void)setLiked:(BOOL)arg0;
- (void)setGrade:(long long)arg0;
- (void)setLabels:(id)arg0;
- (BOOL)liked;

@end
