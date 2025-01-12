//
//     Generated by private class-dump
//

@class NSString, AWECommentSummaryTipsExtra;

@interface AWECommentSummaryTipsModel : AWEBaseApiModel {
    BOOL _hasRedPoint;
    long long _type;
    NSString *_content;
    NSString *_jumpText;
    NSString *_jumpURL;
    NSString *_lightIconURL;
    NSString *_darkIconURL;
    AWECommentSummaryTipsExtra *_extra;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *lightIconURL;
@property (copy, nonatomic) NSString *darkIconURL;
@property (nonatomic) BOOL hasRedPoint;
@property (retain, nonatomic) AWECommentSummaryTipsExtra *extra;

+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)jumpText;
- (id)darkIconURL;
- (id)lightIconURL;
- (void)setJumpText:(id)arg0;
- (void)setJumpURL:(id)arg0;
- (BOOL)hasRedPoint;
- (id)jumpURL;
- (void)setLightIconURL:(id)arg0;
- (void)setDarkIconURL:(id)arg0;
- (void)setHasRedPoint:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)content;
- (id)extra;
- (void)setType:(long long)arg0;
- (void)setContent:(id)arg0;

@end
