//
//     Generated by private class-dump
//

@class NSString, AWEAdEvaluateUserModel, NSArray, NSNumber;

@interface AWEAdEvaluateDetailModel : MTLModel <MTLJSONSerializing> {
    BOOL _userDigged;
    AWEAdEvaluateUserModel *_user;
    NSNumber *_rate;
    NSString *_commentContent;
    NSArray *_tags;
    NSNumber *_commentTime;
    long long _diggCount;
    NSString *_commentID;
    NSArray *_replyComment;
    NSArray *_picUrlList;
    NSString *_commentLabelsDesc;
}

@property (copy, nonatomic) NSString *commentLabelsDesc;
@property (retain, nonatomic) AWEAdEvaluateUserModel *user;
@property (retain, nonatomic) NSNumber *rate;
@property (copy, nonatomic) NSString *commentContent;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSNumber *commentTime;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) long long diggCount;
@property (copy, nonatomic) NSString *commentID;
@property (retain, nonatomic) NSArray *replyComment;
@property (retain, nonatomic) NSArray *picUrlList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userJSONTransformer;
+ (id)replyCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commentID;
- (long long)diggCount;
- (BOOL)userDigged;
- (void)setDiggCount:(long long)arg0;
- (void)setCommentID:(id)arg0;
- (void)setUserDigged:(BOOL)arg0;
- (void)setReplyComment:(id)arg0;
- (id)replyComment;
- (id)commentTime;
- (void)setCommentTime:(id)arg0;
- (id)commentContent;
- (void)setCommentContent:(id)arg0;
- (id)picUrlList;
- (id)commentLabelsDesc;
- (void)setPicUrlList:(id)arg0;
- (void)setCommentLabelsDesc:(id)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id)tags;
- (void)setRate:(id)arg0;
- (id)rate;
- (void)setTags:(id)arg0;

@end