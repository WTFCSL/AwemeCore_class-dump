//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeSendCommentMethodParamModel : BDXBridgeModel {
    NSString *_aweme_id;
    NSString *_comment_text;
    NSString *_sticker;
    NSString *_enter_from;
    id _track_params;
}

@property (copy, nonatomic) NSString *aweme_id;
@property (copy, nonatomic) NSString *comment_text;
@property (copy, nonatomic) NSString *sticker;
@property (copy, nonatomic) NSString *enter_from;
@property (retain, nonatomic) id track_params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)enter_from;
- (void)setEnter_from:(id)arg0;
- (id)aweme_id;
- (void)setAweme_id:(id)arg0;
- (id)track_params;
- (id)comment_text;
- (void)setComment_text:(id)arg0;
- (void)setTrack_params:(id)arg0;
- (void).cxx_destruct;
- (void)setSticker:(id)arg0;
- (id)sticker;

@end