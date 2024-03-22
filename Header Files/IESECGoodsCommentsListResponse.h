//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary, NSNumber, IESECCommentSurveyModelV2;

@interface IESECGoodsCommentsListResponse : IESECBaseApiModel {
    BOOL _hasMore;
    BOOL _isCache;
    NSNumber *_totalCount;
    NSArray *_commentList;
    NSString *_noticeDesc;
    NSNumber *_noticePosition;
    IESECCommentSurveyModelV2 *_npsSurvey;
    NSNumber *_meaninglessCount;
    NSDictionary *_extraInfo;
}

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *totalCount;
@property (copy, nonatomic) NSArray *commentList;
@property (copy, nonatomic) NSString *noticeDesc;
@property (retain, nonatomic) NSNumber *noticePosition;
@property (nonatomic) BOOL isCache;
@property (retain, nonatomic) IESECCommentSurveyModelV2 *npsSurvey;
@property (retain, nonatomic) NSNumber *meaninglessCount;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (id)commentListJSONTransformer;
+ (id)npsSurveyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtraInfo:(id)arg0;
- (BOOL)isCache;
- (void)setIsCache:(BOOL)arg0;
- (id)commentList;
- (void)setCommentList:(id)arg0;
- (id)noticeDesc;
- (void)setNoticeDesc:(id)arg0;
- (id)noticePosition;
- (void)setNoticePosition:(id)arg0;
- (id)npsSurvey;
- (void)setNpsSurvey:(id)arg0;
- (id)meaninglessCount;
- (void)setMeaninglessCount:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)totalCount;
- (void)setTotalCount:(id)arg0;
- (id)extraInfo;

@end
