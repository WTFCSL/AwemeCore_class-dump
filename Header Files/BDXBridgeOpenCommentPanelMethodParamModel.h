//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXBridgeOpenCommentPanelMethodParamModel : BDXBridgeModel {
    BOOL _forceOpenReply;
    NSString *_enterMethod;
    NSString *_previousPage;
    NSDictionary *_aweme;
    NSDictionary *_comment;
    NSDictionary *_extra;
}

@property (nonatomic) BOOL forceOpenReply;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *aweme;
@property (copy, nonatomic) NSDictionary *comment;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterMethod:(id)arg0;
- (void)setExtra:(id)arg0;
- (id)enterMethod;
- (id)aweme;
- (void)setAweme:(id)arg0;
- (BOOL)forceOpenReply;
- (void)setForceOpenReply:(BOOL)arg0;
- (void).cxx_destruct;
- (id)extra;
- (id)comment;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)setComment:(id)arg0;

@end
