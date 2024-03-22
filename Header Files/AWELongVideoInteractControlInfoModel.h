//
//     Generated by private class-dump
//

@class NSString;

@interface AWELongVideoInteractControlInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _canShare;
    BOOL _canCollect;
    BOOL _canComment;
    BOOL _canDigg;
    NSString *_noShareReason;
    NSString *_noCollectReason;
    NSString *_noCommentReason;
    NSString *_noDiggReason;
}

@property (nonatomic) BOOL canShare;
@property (nonatomic) BOOL canCollect;
@property (nonatomic) BOOL canComment;
@property (nonatomic) BOOL canDigg;
@property (copy, nonatomic) NSString *noShareReason;
@property (copy, nonatomic) NSString *noCollectReason;
@property (copy, nonatomic) NSString *noCommentReason;
@property (copy, nonatomic) NSString *noDiggReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)canCollect;
- (BOOL)canComment;
- (void)setCanShare:(BOOL)arg0;
- (void)setCanComment:(BOOL)arg0;
- (void)setCanCollect:(BOOL)arg0;
- (BOOL)canDigg;
- (void)setCanDigg:(BOOL)arg0;
- (id)noShareReason;
- (void)setNoShareReason:(id)arg0;
- (id)noCollectReason;
- (void)setNoCollectReason:(id)arg0;
- (id)noCommentReason;
- (void)setNoCommentReason:(id)arg0;
- (id)noDiggReason;
- (void)setNoDiggReason:(id)arg0;
- (void).cxx_destruct;
- (BOOL)canShare;

@end
