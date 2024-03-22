//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEPOIIMEvaluationResult : NSObject {
    NSArray *_tagArray;
    NSString *_bizCommentExtStr;
    long long _ratingResult;
    NSString *_tagString;
    NSString *_remark;
    NSDictionary *_bizCommentExt;
    unsigned long long _fixedMark;
    double _firstCommentAt;
    long long _ratingModifyCount;
    long long _maxModifyCount;
    double _commentDeadline;
    NSString *_commentVersion;
    long long _type;
    NSString *_pigeonCid;
    NSString *_talkID;
    NSString *_remarkTagString;
    NSDictionary *_bizExt;
}

@property (readonly, nonatomic) long long ratingResult;
@property (readonly, copy, nonatomic) NSString *tagString;
@property (readonly, copy, nonatomic) NSArray *tagArray;
@property (readonly, copy, nonatomic) NSString *remark;
@property (readonly, copy, nonatomic) NSString *useRemark;
@property (readonly, copy, nonatomic) NSDictionary *bizCommentExt;
@property (readonly, copy, nonatomic) NSString *bizCommentExtStr;
@property (readonly, nonatomic) unsigned long long fixedMark;
@property (readonly, nonatomic) double firstCommentAt;
@property (readonly, nonatomic) long long ratingModifyCount;
@property (readonly, nonatomic) long long maxModifyCount;
@property (readonly, nonatomic) double commentDeadline;
@property (readonly, copy, nonatomic) NSString *commentVersion;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *pigeonCid;
@property (readonly, copy, nonatomic) NSString *talkID;
@property (readonly, copy, nonatomic) NSString *remarkTagString;
@property (readonly, copy, nonatomic) NSDictionary *bizExt;

- (id)tagString;
- (id)bizExt;
- (id)pigeonCid;
- (id)remark;
- (id)bizCommentExt;
- (id)talkID;
- (id)remarkTagString;
- (id)tagArray;
- (id)commentVersion;
- (id)initWithInfo:(id)arg0 resultDict:(id)arg1;
- (id)initWithInfo:(id)arg0 ratingResult:(long long)arg1 selectedTagArray:(id)arg2 remark:(id)arg3 fixedMark:(unsigned long long)arg4;
- (id)bizCommentExtStr;
- (id)useRemark;
- (BOOL)isOldCommentVersion;
- (long long)ratingResult;
- (unsigned long long)fixedMark;
- (double)firstCommentAt;
- (long long)ratingModifyCount;
- (long long)maxModifyCount;
- (double)commentDeadline;
- (void).cxx_destruct;
- (long long)type;

@end