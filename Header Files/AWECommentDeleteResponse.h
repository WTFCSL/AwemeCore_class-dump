//
//     Generated by private class-dump
//

@class AWECommentUserGuideModel;

@interface AWECommentDeleteResponse : AWEBaseApiModel {
    BOOL _controlCommentCheck;
    AWECommentUserGuideModel *_guideModel;
}

@property (nonatomic) BOOL controlCommentCheck;
@property (retain, nonatomic) AWECommentUserGuideModel *guideModel;

+ (id)guideModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (BOOL)controlCommentCheck;
- (void)setControlCommentCheck:(BOOL)arg0;
- (void).cxx_destruct;

@end
